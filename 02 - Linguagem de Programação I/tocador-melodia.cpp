#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cmath>
#include <fstream>
#include <sstream>
#include <cstdlib>

// Includes específicos por plataforma
#ifdef _WIN32
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#elif __linux__
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/kd.h>
#endif

// Definir M_PI se não estiver definido
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Definição das frequências das notas musicais
enum class Nota
{
  C4 = 261, // Dó
  D4 = 294, // Ré
  E4 = 329, // Mi
  F4 = 349, // Fá
  G4 = 392, // Sol
  A4 = 440, // Lá
  B4 = 493, // Si
  C5 = 523, // Dó (oitava superior)
  D5 = 587, // Ré (oitava superior)
  E5 = 659, // Mi (oitava superior)
  F5 = 698, // Fá (oitava superior)
  G5 = 784, // Sol (oitava superior)
  PAUSA = 0 // Pausa/silêncio
};

// Estrutura para representar uma nota com duração
struct NotaMusical
{
  Nota nota;
  int duracao_ms;

  NotaMusical(Nota n, int d) : nota(n), duracao_ms(d) {}
};

class TocadorMelodia
{
private:
  std::vector<NotaMusical> melodia;

  // Método para detectar a plataforma
  void tocarNotaWindows(int frequencia, int duracao_ms)
  {
#ifdef _WIN32
    if (frequencia == 0)
    {
      Sleep(duracao_ms);
    }
    else
    {
      Beep(frequencia, duracao_ms);
    }
#endif
  }

  // Método para tocar no Linux usando diferentes abordagens
  void tocarNotaLinux(int frequencia, int duracao_ms)
  {
#ifdef __linux__
    if (frequencia == 0)
    {
      std::this_thread::sleep_for(std::chrono::milliseconds(duracao_ms));
      return;
    }

    // Tentar método 1: PC Speaker (requer privilégios)
    if (tocarPCSpeaker(frequencia, duracao_ms))
    {
      return;
    }

    // Método 2: Gerar arquivo WAV e tocar com aplay
    if (tocarComAplay(frequencia, duracao_ms))
    {
      return;
    }

    // Método 3: Usar comando beep (se disponível)
    if (tocarComBeep(frequencia, duracao_ms))
    {
      return;
    }

    // Fallback: apenas mostrar a nota
    std::cout << "♪ " << frequencia << "Hz (" << duracao_ms << "ms) ♪" << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(duracao_ms));
#endif
  }

#ifdef __linux__
  // Método 1: PC Speaker (Linux)
  bool tocarPCSpeaker(int frequencia, int duracao_ms)
  {
    int console_fd = open("/dev/console", O_WRONLY);
    if (console_fd == -1)
    {
      return false;
    }

    // Ativar o som
    if (ioctl(console_fd, KIOCSOUND, (int)(1193180 / frequencia)) == -1)
    {
      close(console_fd);
      return false;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(duracao_ms));

    // Desativar o som
    ioctl(console_fd, KIOCSOUND, 0);
    close(console_fd);
    return true;
  }

  // Método 2: Gerar WAV e tocar com aplay
  bool tocarComAplay(int frequencia, int duracao_ms)
  {
    // Verificar se aplay está disponível
    if (system("which aplay > /dev/null 2>&1") != 0)
    {
      return false;
    }

    std::string filename = "/tmp/nota_temp.wav";
    if (gerarArquivoWAV(filename, frequencia, duracao_ms))
    {
      std::string comando = "aplay " + filename + " > /dev/null 2>&1";
      system(comando.c_str());
      std::remove(filename.c_str());
      return true;
    }
    return false;
  }

  // Método 3: Comando beep
  bool tocarComBeep(int frequencia, int duracao_ms)
  {
    if (system("which beep > /dev/null 2>&1") != 0)
    {
      return false;
    }

    std::stringstream ss;
    ss << "beep -f " << frequencia << " -l " << duracao_ms << " > /dev/null 2>&1";
    system(ss.str().c_str());
    return true;
  }

  // Gerar arquivo WAV simples
  bool gerarArquivoWAV(const std::string &filename, int frequencia, int duracao_ms)
  {
    std::ofstream arquivo(filename, std::ios::binary);
    if (!arquivo.is_open())
    {
      return false;
    }

    const int sample_rate = 44100;
    const int bits_per_sample = 16;
    const int channels = 1;
    const int duration_samples = (sample_rate * duracao_ms) / 1000;
    const int data_size = duration_samples * channels * (bits_per_sample / 8);

    // Cabeçalho WAV
    arquivo.write("RIFF", 4);
    int file_size = 36 + data_size;
    arquivo.write(reinterpret_cast<const char *>(&file_size), 4);
    arquivo.write("WAVE", 4);
    arquivo.write("fmt ", 4);
    int fmt_size = 16;
    arquivo.write(reinterpret_cast<const char *>(&fmt_size), 4);
    short audio_format = 1;
    arquivo.write(reinterpret_cast<const char *>(&audio_format), 2);
    short num_channels = channels;
    arquivo.write(reinterpret_cast<const char *>(&num_channels), 2);
    int sample_rate_copy = sample_rate;
    arquivo.write(reinterpret_cast<const char *>(&sample_rate_copy), 4);
    int byte_rate = sample_rate * channels * (bits_per_sample / 8);
    arquivo.write(reinterpret_cast<const char *>(&byte_rate), 4);
    short block_align = channels * (bits_per_sample / 8);
    arquivo.write(reinterpret_cast<const char *>(&block_align), 2);
    short bits_per_sample_copy = bits_per_sample;
    arquivo.write(reinterpret_cast<const char *>(&bits_per_sample_copy), 2);
    arquivo.write("data", 4);
    arquivo.write(reinterpret_cast<const char *>(&data_size), 4);

    // Dados de áudio (onda senoidal)
    for (int i = 0; i < duration_samples; ++i)
    {
      double time = static_cast<double>(i) / sample_rate;
      double amplitude = 16383.0; // Amplitude máxima para 16-bit
      short sample = static_cast<short>(amplitude * sin(2.0 * M_PI * frequencia * time));
      arquivo.write(reinterpret_cast<const char *>(&sample), 2);
    }

    arquivo.close();
    return true;
  }
#endif

public:
  // Adiciona uma nota à melodia
  void adicionarNota(Nota nota, int duracao_ms)
  {
    melodia.push_back(NotaMusical(nota, duracao_ms));
  }

  // Toca uma nota individual
  void tocarNota(Nota nota, int duracao_ms)
  {
    int frequencia = static_cast<int>(nota);

#ifdef _WIN32
    tocarNotaWindows(frequencia, duracao_ms);
#elif __linux__
    tocarNotaLinux(frequencia, duracao_ms);
#else
    // Fallback para outras plataformas
    std::cout << "♪ " << frequencia << "Hz (" << duracao_ms << "ms) ♪" << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(duracao_ms));
#endif
  }

  // Toca toda a melodia
  void tocarMelodia()
  {
    std::cout << "Tocando melodia..." << std::endl;
    for (const auto &nota_musical : melodia)
    {
      tocarNota(nota_musical.nota, nota_musical.duracao_ms);
    }
    std::cout << "\nMelodia finalizada!" << std::endl;
  }

  // Limpa a melodia atual
  void limparMelodia()
  {
    melodia.clear();
  }

  // Exibe a melodia em formato textual
  void exibirMelodia()
  {
    std::cout << "Melodia atual:" << std::endl;
    for (size_t i = 0; i < melodia.size(); ++i)
    {
      std::cout << "Nota " << i + 1 << ": ";
      switch (melodia[i].nota)
      {
      case Nota::C4:
        std::cout << "Dó4";
        break;
      case Nota::D4:
        std::cout << "Ré4";
        break;
      case Nota::E4:
        std::cout << "Mi4";
        break;
      case Nota::F4:
        std::cout << "Fá4";
        break;
      case Nota::G4:
        std::cout << "Sol4";
        break;
      case Nota::A4:
        std::cout << "Lá4";
        break;
      case Nota::B4:
        std::cout << "Si4";
        break;
      case Nota::C5:
        std::cout << "Dó5";
        break;
      case Nota::D5:
        std::cout << "Ré5";
        break;
      case Nota::E5:
        std::cout << "Mi5";
        break;
      case Nota::F5:
        std::cout << "Fá5";
        break;
      case Nota::G5:
        std::cout << "Sol5";
        break;
      case Nota::PAUSA:
        std::cout << "Pausa";
        break;
      }
      std::cout << " (" << melodia[i].duracao_ms << "ms)" << std::endl;
    }
  }

  // Exibe informações sobre a plataforma e métodos disponíveis
  void exibirInfoPlataforma()
  {
    std::cout << "=== Informações da Plataforma ===" << std::endl;
#ifdef _WIN32
    std::cout << "Plataforma: Windows" << std::endl;
    std::cout << "Método de som: Windows Beep API" << std::endl;
#elif __linux__
    std::cout << "Plataforma: Linux" << std::endl;
    std::cout << "Métodos disponíveis:" << std::endl;
    std::cout << "1. PC Speaker (requer privilégios)" << std::endl;
    std::cout << "2. ALSA (aplay) - " << (system("which aplay > /dev/null 2>&1") == 0 ? "Disponível" : "Não disponível") << std::endl;
    std::cout << "3. Comando beep - " << (system("which beep > /dev/null 2>&1") == 0 ? "Disponível" : "Não disponível") << std::endl;
    std::cout << "4. Fallback: exibição visual" << std::endl;
#else
    std::cout << "Plataforma: Outra" << std::endl;
    std::cout << "Método: Exibição visual apenas" << std::endl;
#endif
    std::cout << "===============================" << std::endl;
  }
};

// Função para criar uma melodia pré-definida (exemplo: "Parabéns pra você")
void criarMelodiaParabens(TocadorMelodia &tocador)
{
  // Parabéns pra você
  tocador.adicionarNota(Nota::C4, 500);  // Pa-
  tocador.adicionarNota(Nota::C4, 200);  // ra-
  tocador.adicionarNota(Nota::D4, 700);  // béns
  tocador.adicionarNota(Nota::C4, 700);  // pra
  tocador.adicionarNota(Nota::F4, 700);  // vo-
  tocador.adicionarNota(Nota::E4, 1000); // cê
  tocador.adicionarNota(Nota::PAUSA, 200);

  // Parabéns pra você
  tocador.adicionarNota(Nota::C4, 500);  // Pa-
  tocador.adicionarNota(Nota::C4, 200);  // ra-
  tocador.adicionarNota(Nota::D4, 700);  // béns
  tocador.adicionarNota(Nota::C4, 700);  // pra
  tocador.adicionarNota(Nota::G4, 700);  // vo-
  tocador.adicionarNota(Nota::F4, 1000); // cê
  tocador.adicionarNota(Nota::PAUSA, 200);
}

// Função para criar uma escala musical
void criarEscalaMusical(TocadorMelodia &tocador)
{
  tocador.adicionarNota(Nota::C4, 400); // Dó
  tocador.adicionarNota(Nota::D4, 400); // Ré
  tocador.adicionarNota(Nota::E4, 400); // Mi
  tocador.adicionarNota(Nota::F4, 400); // Fá
  tocador.adicionarNota(Nota::G4, 400); // Sol
  tocador.adicionarNota(Nota::A4, 400); // Lá
  tocador.adicionarNota(Nota::B4, 400); // Si
  tocador.adicionarNota(Nota::C5, 800); // Dó (oitava superior)
}

// Função para criar uma melodia simples (Twinkle Twinkle Little Star)
void criarMelodiaTwinkle(TocadorMelodia &tocador)
{
  tocador.adicionarNota(Nota::C4, 400); // Twin-
  tocador.adicionarNota(Nota::C4, 400); // kle
  tocador.adicionarNota(Nota::G4, 400); // twin-
  tocador.adicionarNota(Nota::G4, 400); // kle
  tocador.adicionarNota(Nota::A4, 400); // lit-
  tocador.adicionarNota(Nota::A4, 400); // tle
  tocador.adicionarNota(Nota::G4, 800); // star
  tocador.adicionarNota(Nota::F4, 400); // How
  tocador.adicionarNota(Nota::F4, 400); // I
  tocador.adicionarNota(Nota::E4, 400); // won-
  tocador.adicionarNota(Nota::E4, 400); // der
  tocador.adicionarNota(Nota::D4, 400); // what
  tocador.adicionarNota(Nota::D4, 400); // you
  tocador.adicionarNota(Nota::C4, 800); // are
}

int main()
{
  std::cout << "=== Tocador de Melodias Multiplataforma ===" << std::endl;

  TocadorMelodia tocador;
  tocador.exibirInfoPlataforma();

  int opcao;

  do
  {
    std::cout << "\nEscolha uma opção:" << std::endl;
    std::cout << "1 - Tocar escala musical" << std::endl;
    std::cout << "2 - Tocar 'Parabéns pra você'" << std::endl;
    std::cout << "3 - Tocar 'Twinkle Twinkle Little Star'" << std::endl;
    std::cout << "4 - Criar melodia personalizada" << std::endl;
    std::cout << "5 - Exibir melodia atual" << std::endl;
    std::cout << "6 - Tocar melodia atual" << std::endl;
    std::cout << "7 - Limpar melodia" << std::endl;
    std::cout << "8 - Exibir info da plataforma" << std::endl;
    std::cout << "0 - Sair" << std::endl;
    std::cout << "Opção: ";
    std::cin >> opcao;

    switch (opcao)
    {
    case 1:
      tocador.limparMelodia();
      criarEscalaMusical(tocador);
      tocador.tocarMelodia();
      break;

    case 2:
      tocador.limparMelodia();
      criarMelodiaParabens(tocador);
      tocador.tocarMelodia();
      break;

    case 3:
      tocador.limparMelodia();
      criarMelodiaTwinkle(tocador);
      tocador.tocarMelodia();
      break;

    case 4:
    {
      tocador.limparMelodia();
      std::cout << "Criando melodia personalizada..." << std::endl;
      std::cout << "Notas disponíveis:" << std::endl;
      std::cout << "1=C4, 2=D4, 3=E4, 4=F4, 5=G4, 6=A4, 7=B4, 8=C5, 9=D5, 10=E5, 11=F5, 12=G5, 0=Pausa" << std::endl;

      int nota_num, duracao;
      while (true)
      {
        std::cout << "Digite o número da nota (ou -1 para finalizar): ";
        std::cin >> nota_num;

        if (nota_num == -1)
          break;

        std::cout << "Digite a duração em ms: ";
        std::cin >> duracao;

        Nota nota_selecionada;
        switch (nota_num)
        {
        case 0:
          nota_selecionada = Nota::PAUSA;
          break;
        case 1:
          nota_selecionada = Nota::C4;
          break;
        case 2:
          nota_selecionada = Nota::D4;
          break;
        case 3:
          nota_selecionada = Nota::E4;
          break;
        case 4:
          nota_selecionada = Nota::F4;
          break;
        case 5:
          nota_selecionada = Nota::G4;
          break;
        case 6:
          nota_selecionada = Nota::A4;
          break;
        case 7:
          nota_selecionada = Nota::B4;
          break;
        case 8:
          nota_selecionada = Nota::C5;
          break;
        case 9:
          nota_selecionada = Nota::D5;
          break;
        case 10:
          nota_selecionada = Nota::E5;
          break;
        case 11:
          nota_selecionada = Nota::F5;
          break;
        case 12:
          nota_selecionada = Nota::G5;
          break;
        default:
          std::cout << "Nota inválida!" << std::endl;
          continue;
        }

        tocador.adicionarNota(nota_selecionada, duracao);
        std::cout << "Nota adicionada!" << std::endl;
      }
      break;
    }

    case 5:
      tocador.exibirMelodia();
      break;

    case 6:
      tocador.tocarMelodia();
      break;

    case 7:
      tocador.limparMelodia();
      std::cout << "Melodia limpa!" << std::endl;
      break;

    case 8:
      tocador.exibirInfoPlataforma();
      break;

    case 0:
      std::cout << "Saindo..." << std::endl;
      break;

    default:
      std::cout << "Opção inválida!" << std::endl;
    }

  } while (opcao != 0);

  return 0;
}