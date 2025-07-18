### 1. **Calculadora Simples**

```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtração: " << num1 - num2 << endl;
    cout << "Multiplicação: " << num1 * num2 << endl;
    cout << "Divisão: " << num1 / num2 << endl;

    return 0;
}
```

### 2. **Par ou Ímpar**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " é par" << endl;
    } else {
        cout << numero << " é ímpar" << endl;
    }

    return 0;
}
```

### 3. **Maior de Três Números**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite três números: ";
    cin >> a >> b >> c;

    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    cout << "O maior número é: " << maior << endl;

    return 0;
}
```

---

## 📊 Algoritmos com Loops

### 4. **Contador Simples**

```cpp
#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Contar até que número? ";
    cin >> limite;

    for (int i = 1; i <= limite; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
```

### 5. **Tabuada**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número para ver a tabuada: ";
    cin >> numero;

    cout << "Tabuada do " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
```

### 6. **Soma de Números**

```cpp
#include <iostream>
using namespace std;

int main() {
    int quantidade, numero, soma = 0;

    cout << "Quantos números você quer somar? ";
    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        soma += numero;
    }

    cout << "A soma é: " << soma << endl;

    return 0;
}
```

### 7. **Números Pares até N**

```cpp
#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Mostrar pares até que número? ";
    cin >> limite;

    cout << "Números pares até " << limite << ":" << endl;

    for (int i = 2; i <= limite; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
```

---

## 🎯 Algoritmos de Validação

### 8. **Validação de Idade**

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade < 0 || idade > 150) {
        cout << "Idade inválida!" << endl;
    } else if (idade < 18) {
        cout << "Menor de idade" << endl;
    } else if (idade < 65) {
        cout << "Adulto" << endl;
    } else {
        cout << "Idoso" << endl;
    }

    return 0;
}
```

### 9. **Validação de Nota**

```cpp
#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Digite a nota (0-10): ";
    cin >> nota;

    if (nota < 0 || nota > 10) {
        cout << "Nota inválida!" << endl;
    } else if (nota >= 7) {
        cout << "Aprovado!" << endl;
    } else if (nota >= 5) {
        cout << "Recuperação" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
```

---

## 🧮 Algoritmos Matemáticos

### 10. **Fatorial**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    long long fatorial = 1;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Fatorial não existe para números negativos" << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        cout << "Fatorial de " << numero << " é " << fatorial << endl;
    }

    return 0;
}
```

### 11. **Fibonacci**

```cpp
#include <iostream>
using namespace std;

int main() {
    int termos;
    int a = 0, b = 1, proximo;

    cout << "Quantos termos de Fibonacci? ";
    cin >> termos;

    cout << "Sequência de Fibonacci:" << endl;

    if (termos >= 1) cout << a << " ";
    if (termos >= 2) cout << b << " ";

    for (int i = 3; i <= termos; i++) {
        proximo = a + b;
        cout << proximo << " ";
        a = b;
        b = proximo;
    }
    cout << endl;

    return 0;
}
```

### 12. **Número Primo**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    bool primo = true;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero <= 1) {
        primo = false;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << numero << " é primo" << endl;
    } else {
        cout << numero << " não é primo" << endl;
    }

    return 0;
}
```

---

## 🌡️ Algoritmos de Conversão

### 13. **Conversor de Temperatura**

```cpp
#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit, kelvin;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;

    cout << "Celsius: " << celsius << "°C" << endl;
    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Kelvin: " << kelvin << "K" << endl;

    return 0;
}
```

### 14. **Conversor de Moeda**

```cpp
#include <iostream>
using namespace std;

int main() {
    double reais, cotacao_dolar, cotacao_euro;

    cout << "Digite o valor em reais: R$ ";
    cin >> reais;

    cout << "Digite a cotação do dólar: ";
    cin >> cotacao_dolar;

    cout << "Digite a cotação do euro: ";
    cin >> cotacao_euro;

    cout << "Em dólares: $" << reais / cotacao_dolar << endl;
    cout << "Em euros: €" << reais / cotacao_euro << endl;

    return 0;
}
```

---

## 🎮 Algoritmos de Jogos

### 15. **Jogo de Adivinhação**

```cpp
#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    int numero_secreto = dis(gen);
    int palpite, tentativas = 0;

    cout << "Adivinhe o número entre 1 e 100!" << endl;

    do {
        cout << "Seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numero_secreto) {
            cout << "Muito baixo!" << endl;
        } else if (palpite > numero_secreto) {
            cout << "Muito alto!" << endl;
        } else {
            cout << "Parabéns! Você acertou em " << tentativas << " tentativas!" << endl;
        }
    } while (palpite != numero_secreto);

    return 0;
}
```

### 16. **Pedra, Papel, Tesoura**

```cpp
#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);

    int jogador, computador;
    string opcoes[] = {"", "Pedra", "Papel", "Tesoura"};

    cout << "Pedra, Papel, Tesoura!" << endl;
    cout << "1 - Pedra, 2 - Papel, 3 - Tesoura: ";
    cin >> jogador;

    computador = dis(gen);

    cout << "Você: " << opcoes[jogador] << endl;
    cout << "Computador: " << opcoes[computador] << endl;

    if (jogador == computador) {
        cout << "Empate!" << endl;
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
        cout << "Você ganhou!" << endl;
    } else {
        cout << "Computador ganhou!" << endl;
    }

    return 0;
}
```

---

## 📋 Algoritmos de Array

### 17. **Maior e Menor em Array**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tamanho;

    cout << "Quantos números você vai digitar? ";
    cin >> tamanho;

    int numeros[tamanho];

    // Lendo os números
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> numeros[i];
    }

    // Encontrando maior e menor
    int maior = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    cout << "Maior número: " << maior << endl;
    cout << "Menor número: " << menor << endl;

    return 0;
}
```

### 18. **Média de Notas**

```cpp
#include <iostream>
using namespace std;

int main() {
    int quantidade;
    double soma = 0, media;

    cout << "Quantas notas? ";
    cin >> quantidade;

    double notas[quantidade];

    // Lendo as notas
    for (int i = 0; i < quantidade; i++) {
        cout << "Digite a " << i+1 << "ª nota: ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / quantidade;

    cout << "Média: " << media << endl;

    // Contando aprovados
    int aprovados = 0;
    for (int i = 0; i < quantidade; i++) {
        if (notas[i] >= 7.0) aprovados++;
    }

    cout << "Aprovados: " << aprovados << endl;
    cout << "Reprovados: " << quantidade - aprovados << endl;

    return 0;
}
```

---

## 🔤 Algoritmos com Strings

### 19. **Contador de Caracteres**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int vogais = 0, consoantes = 0, espacos = 0;

    cout << "Digite um texto: ";
    getline(cin, texto);

    for (char c : texto) {
        if (c == ' ') {
            espacos++;
        } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vogais++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consoantes++;
        }
    }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;
    cout << "Espaços: " << espacos << endl;
    cout << "Total de caracteres: " << texto.length() << endl;

    return 0;
}
```

### 20. **Inverter String**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, invertido = "";

    cout << "Digite uma palavra: ";
    cin >> texto;

    // Invertendo a string
    for (int i = texto.length() - 1; i >= 0; i--) {
        invertido += texto[i];
    }

    cout << "Original: " << texto << endl;
    cout << "Invertido: " << invertido << endl;

    // Verificando se é palíndromo
    if (texto == invertido) {
        cout << "É um palíndromo!" << endl;
    } else {
        cout << "Não é um palíndromo." << endl;
    }

    return 0;
}
```

---

## 💡 Dicas para Praticar

1. **Comece simples**: Execute cada algoritmo e entenda como funciona
2. **Modifique**: Tente alterar os exemplos para fazer coisas diferentes
3. **Combine**: Misture diferentes algoritmos para criar programas mais complexos
4. **Teste**: Sempre teste com diferentes valores de entrada
5. **Pratique**: A programação se aprende programando!

---

**Lembre-se:** Cada algoritmo aqui resolve um problema específico. Entenda a lógica por trás de cada um!
