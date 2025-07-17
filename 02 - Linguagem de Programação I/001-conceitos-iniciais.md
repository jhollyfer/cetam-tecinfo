## 📚 Introdução ao C++

### O que é Programação?

Programação é como **escrever uma receita de bolo para o computador**. Você precisa dar instruções claras, precisas e na ordem certa para que ele execute exatamente o que você quer.

**Exemplo simples:**

- Para fazer um bolo: "Misture a farinha, adicione ovos, asse por 30 minutos"
- Para programar: "Leia um número, some com 5, mostre o resultado"

### Por que C++?

C++ é uma linguagem **poderosa e versátil**, usada em:

| Área                        | Exemplos                 |
| --------------------------- | ------------------------ |
| 🎮 **Jogos**                | Unreal Engine, jogos AAA |
| 🖥️ **Sistemas**             | Windows, Linux, macOS    |
| 📱 **Apps Desktop**         | Programas como Photoshop |
| 🏦 **Sistemas Financeiros** | Bancos, trading          |
| 🤖 **Robótica**             | Automação industrial     |

### ⚡ Vantagens do C++

- **Performance:** Execução super rápida
- **Controle:** Você controla cada detalhe
- **Portabilidade:** Funciona em qualquer sistema
- **Mercado:** Muitas oportunidades de trabalho

---

## 🛠️ Configurando o Ambiente

### Dev C++ - Sua Primeira IDE

**IDE** = Ambiente de Desenvolvimento Integrado (como um Word para programação)

**Características do Dev C++:**

- ✅ Gratuito e simples
- ✅ Compilador integrado
- ✅ Cores no código (syntax highlighting)
- ✅ Perfeito para iniciantes

### 📥 Instalação Rápida

1. **Baixar:** Dev C++ 5.11 (site oficial)
2. **Instalar:** Usar configurações padrão
3. **Organizar:** Criar pasta `C:\ProjetosC++`
4. **Testar:** Criar primeiro programa

---

## 🎯 Seu Primeiro Programa

### O Famoso "Olá, Mundo!"

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Olá, Mundo!" << endl;
    return 0;
}
```

### 🔍 Anatomia do Código (Linha por Linha)

```cpp
#include <iostream>  // Importa biblioteca de entrada/saída
using namespace std; // Evita escrever std::cout toda vez
int main() {         // Função principal - onde tudo começa
    cout << "Olá, Mundo!" << endl;  // Imprime na tela
    return 0;        // Indica que programa terminou sem erros
}
```

### 💡 Entendendo Cada Parte

| Código                 | O que faz                            | Analogia                                     |
| ---------------------- | ------------------------------------ | -------------------------------------------- |
| `#include <iostream>`  | Importa ferramentas de entrada/saída | Como pegar uma caixa de ferramentas          |
| `using namespace std;` | Facilita a escrita                   | Como usar apelidos em vez de nomes completos |
| `int main()`           | Função principal                     | A porta de entrada da sua casa               |
| `cout <<`              | Imprime na tela                      | Como falar com o usuário                     |
| `endl`                 | Quebra linha                         | Como apertar Enter                           |
| `return 0;`            | Finaliza programa                    | Como dizer "terminei com sucesso"            |

### 🚀 Exemplo Personalizado

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "=== Meu Primeiro Programa ===" << endl;
    cout << "Olá! Eu sou João Silva" << endl;
    cout << "Bem-vindo ao curso de C++!" << endl;
    cout << "Vamos aprender juntos!" << endl;
    return 0;
}
```

---

## 📝 Variáveis e Tipos de Dados

### O que são Variáveis?

Variáveis são como **caixas etiquetadas** onde guardamos informações na memória do computador.

**Analogia da Casa:**

- 🏠 **Armário de roupas** (string) → guarda nomes
- 🗃️ **Gaveta de documentos** (int) → guarda números
- 💍 **Porta-joias** (char) → guarda caracteres únicos

### 📊 Tipos de Dados Fundamentais

#### 1. `int` - Números Inteiros

```cpp
int idade = 25;
int temperatura = -10;
int pontuacao = 0;
```

- **Uso:** Idades, contadores, pontuações
- **Faixa:** -2,147,483,648 a 2,147,483,647

#### 2. `float` - Números Decimais

```cpp
float altura = 1.75;
float peso = 68.5;
float preco = 29.99;
```

- **Uso:** Medidas, preços, porcentagens
- **Precisão:** ~7 dígitos decimais

#### 3. `char` - Caracteres

```cpp
char inicial = 'J';
char nota = 'A';
char simbolo = '@';
```

- **Uso:** Letras, símbolos, códigos
- **Formato:** Sempre entre aspas simples `'`

### 🏗️ Declaração vs Inicialização

#### Declaração (Criar a Caixa)

```cpp
int numero;        // Cria a caixa, mas vazia
float preco;       // Valor indefinido (perigoso!)
char letra;        // Conteúdo imprevisível
```

#### Inicialização (Colocar Valor na Caixa)

```cpp
int idade = 20;           // Cria e já coloca valor
float altura = 1.80;      // Boa prática!
char inicial = 'M';       // Valor definido
```

### 📏 Regras para Nomes de Variáveis

#### ✅ Permitido:

- Letras (a-z, A-Z)
- Números (0-9) - **mas não no início**
- Underscore (\_)

#### ❌ Não Permitido:

- Espaços em branco
- Caracteres especiais (@, #, %, etc.)
- Palavras reservadas (int, main, if, etc.)
- Começar com número

#### Exemplos Práticos:

```cpp
// ✅ Correto
int minhaIdade;
float valor_total;
char primeira_letra;
int contador1;

// ❌ Incorreto
int minha idade;     // espaço
float 2valor;        // começa com número
char int;            // palavra reservada
```

### 🔄 Entrada e Saída de Dados

#### Saída com `cout`

```cpp
int idade = 25;
cout << "Minha idade é: " << idade << endl;
cout << "Resultado: " << 10 + 5 << endl;
```

#### Entrada com `cin`

```cpp
int numero;
cout << "Digite um número: ";
cin >> numero;
cout << "Você digitou: " << numero << endl;
```

---

## 🎯 Exemplos Práticos

### 📋 Cadastro Pessoal

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    int idade;
    float altura;
    char inicial;

    // Entrada de dados
    cout << "=== CADASTRO PESSOAL ===" << endl;
    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite sua altura (em metros): ";
    cin >> altura;

    cout << "Digite a inicial do seu nome: ";
    cin >> inicial;

    // Saída dos dados
    cout << "\n=== SEUS DADOS ===" << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Inicial: " << inicial << endl;

    return 0;
}
```

### 📐 Exemplo 2: Calculadora de Área

```cpp
#include <iostream>
using namespace std;

int main() {
    // Variáveis para as dimensões
    float comprimento, largura, area;

    // Entrada dos dados
    cout << "=== CALCULADORA DE ÁREA ===" << endl;
    cout << "Digite o comprimento do retângulo: ";
    cin >> comprimento;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;

    // Cálculo da área
    area = comprimento * largura;

    // Exibição do resultado
    cout << "\n=== RESULTADO ===" << endl;
    cout << "Comprimento: " << comprimento << " metros" << endl;
    cout << "Largura: " << largura << " metros" << endl;
    cout << "Área total: " << area << " metros quadrados" << endl;

    return 0;
}
```

---

## ⚠️ Erros Comuns e Como Evitar

### 1. Esquecer Ponto e Vírgula

```cpp
// ❌ Erro
int idade = 25
cout << idade << endl;

// ✅ Correto
int idade = 25;
cout << idade << endl;
```

### 2. Tipo de Variável Incorreto

```cpp
// ❌ Erro - usar int para decimais
int altura = 1.75;  // Perde a parte decimal!

// ✅ Correto
float altura = 1.75;
```

### 3. Não Inicializar Variáveis

```cpp
// ❌ Perigoso
int numero;
cout << numero;  // Valor imprevisível!

// ✅ Seguro
int numero = 0;
cout << numero;  // Valor definido
```

---

## 💡 Dicas de Ouro

### 📝 Boas Práticas:

- ✅ **Sempre inicialize** suas variáveis
- ✅ Use **nomes descritivos** (`idade` em vez de `i`)
- ✅ Mantenha **organização** no código
- ✅ **Teste** com diferentes valores
- ✅ Use **comentários** para explicar partes complexas

### 🔧 Processo de Desenvolvimento:

1. **Escrever** o código
2. **Compilar** (F9 no Dev C++)
3. **Corrigir** erros de sintaxe
4. **Executar** o programa
5. **Testar** com diferentes entradas
6. **Refinar** conforme necessário

---

## 🎯 Resumo das Aulas

- O que é programação
- Por que usar C++
- Como configurar o Dev C++
- Estrutura básica de um programa
- Nosso primeiro "Olá, Mundo!"

- O que são variáveis
- Tipos de dados (int, float, char)
- Como declarar e inicializar
- Entrada e saída de dados
- Exemplos práticos

---

_💻 Pratique sempre! A programação se aprende fazendo. Cada linha de código é um passo em direção ao domínio da linguagem._
