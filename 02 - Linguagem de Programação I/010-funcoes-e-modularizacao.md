# 🔧 Funções Modulares em C++
*Guia Completo para Dominar a Modularização*

---

## 📚 Índice

1. [Introdução à Modularização](#introdução-à-modularização)
2. [Tipos de Funções](#tipos-de-funções)
3. [Criando Funções Básicas](#criando-funções-básicas)
4. [Funções com Diferentes Tipos de Retorno](#funções-com-diferentes-tipos-de-retorno)
5. [Exemplo Prático: Calculadora de Fatorial](#exemplo-prático-calculadora-de-fatorial)
6. [Boas Práticas](#boas-práticas)
7. [Exercícios Práticos](#exercícios-práticos)

---

## 🎯 Introdução à Modularização

A **modularização** é o processo de dividir um programa em pequenas partes independentes chamadas **funções**. Isso torna o código mais organizado, reutilizável e fácil de manter.

### Por que usar funções?

- ✅ **Organização**: Código mais limpo e estruturado
- ✅ **Reutilização**: Evita repetição de código
- ✅ **Manutenção**: Facilita correções e melhorias
- ✅ **Colaboração**: Diferentes pessoas podem trabalhar em funções distintas

---

## 🏗️ Tipos de Funções

### 1. Função sem Retorno (void)
```cpp
void saudar() {
    cout << "Olá, mundo!" << endl;
}
```

### 2. Função com Retorno
```cpp
int somar(int a, int b) {
    return a + b;
}
```

### 3. Função com Parâmetros
```cpp
void mostrarNumero(int numero) {
    cout << "O número é: " << numero << endl;
}
```

### 4. Função sem Parâmetros
```cpp
int obterIdade() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    return idade;
}
```

---

## 🚀 Criando Funções Básicas

### Estrutura de uma Função

```cpp
tipo_retorno nome_funcao(parametros) {
    // código da função
    return valor; // se necessário
}
```

### Exemplo Simples

```cpp
#include <iostream>
using namespace std;

// Declaração da função
int multiplicar(int x, int y);

int main() {
    int resultado = multiplicar(5, 3);
    cout << "5 x 3 = " << resultado << endl;
    return 0;
}

// Implementação da função
int multiplicar(int x, int y) {
    return x * y;
}
```

**Saída:**
```
5 x 3 = 15
```

---

## 🔄 Funções com Diferentes Tipos de Retorno

### Função que Retorna Inteiro

```cpp
int calcularQuadrado(int numero) {
    return numero * numero;
}
```

### Função que Retorna Float

```cpp
float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}
```

### Função que Retorna String

```cpp
#include <string>

string criarSaudacao(string nome) {
    return "Olá, " + nome + "!";
}
```

### Função que Retorna Boolean

```cpp
bool ehPar(int numero) {
    return (numero % 2 == 0);
}
```

### Exemplo Completo

```cpp
#include <iostream>
#include <string>
using namespace std;

int calcularQuadrado(int numero) {
    return numero * numero;
}

float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

string criarSaudacao(string nome) {
    return "Olá, " + nome + "!";
}

bool ehPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    // Testando função que retorna int
    cout << "Quadrado de 4: " << calcularQuadrado(4) << endl;
    
    // Testando função que retorna float
    cout << "Média entre 8.5 e 7.2: " << calcularMedia(8.5, 7.2) << endl;
    
    // Testando função que retorna string
    cout << criarSaudacao("Maria") << endl;
    
    // Testando função que retorna bool
    cout << "6 é par? " << (ehPar(6) ? "Sim" : "Não") << endl;
    
    return 0;
}
```

---

## 🧮 Exemplo Prático: Calculadora de Fatorial

### O que é Fatorial?

O fatorial de um número n (escrito como n!) é o produto de todos os números inteiros positivos menores ou iguais a n.

**Exemplos:**
- 5! = 5 × 4 × 3 × 2 × 1 = 120
- 3! = 3 × 2 × 1 = 6

### Implementação Iterativa

```cpp
#include <iostream>
using namespace std;

long long calcularFatorial(int numero) {
    if (numero < 0) {
        cout << "Erro: Fatorial não existe para números negativos!" << endl;
        return -1;
    }
    
    if (numero == 0 || numero == 1) {
        return 1;
    }
    
    long long resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    
    return resultado;
}

bool ehNumeroValido(int numero) {
    return numero >= 0;
}

void mostrarResultado(int numero, long long fatorial) {
    cout << numero << "! = " << fatorial << endl;
}

int main() {
    int numero;
    
    cout << "=== CALCULADORA DE FATORIAL ===" << endl;
    cout << "Digite um número: ";
    cin >> numero;
    
    if (!ehNumeroValido(numero)) {
        cout << "Número inválido! Digite um número não-negativo." << endl;
        return 1;
    }
    
    long long resultado = calcularFatorial(numero);
    
    if (resultado != -1) {
        mostrarResultado(numero, resultado);
    }
    
    return 0;
}
```

### Implementação Recursiva

```cpp
long long fatorialRecursivo(int numero) {
    // Caso base
    if (numero == 0 || numero == 1) {
        return 1;
    }
    
    // Chamada recursiva
    return numero * fatorialRecursivo(numero - 1);
}
```

### Exemplo Completo com Menu

```cpp
#include <iostream>
using namespace std;

long long fatorialIterativo(int numero) {
    if (numero < 0) return -1;
    if (numero <= 1) return 1;
    
    long long resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

long long fatorialRecursivo(int numero) {
    if (numero < 0) return -1;
    if (numero <= 1) return 1;
    return numero * fatorialRecursivo(numero - 1);
}

void mostrarMenu() {
    cout << "\n=== CALCULADORA DE FATORIAL ===" << endl;
    cout << "1. Fatorial Iterativo" << endl;
    cout << "2. Fatorial Recursivo" << endl;
    cout << "3. Sair" << endl;
    cout << "Escolha uma opção: ";
}

int main() {
    int opcao, numero;
    long long resultado;
    
    do {
        mostrarMenu();
        cin >> opcao;
        
        switch (opcao) {
            case 1:
                cout << "Digite um número: ";
                cin >> numero;
                resultado = fatorialIterativo(numero);
                if (resultado != -1) {
                    cout << numero << "! = " << resultado << endl;
                } else {
                    cout << "Número inválido!" << endl;
                }
                break;
                
            case 2:
                cout << "Digite um número: ";
                cin >> numero;
                resultado = fatorialRecursivo(numero);
                if (resultado != -1) {
                    cout << numero << "! = " << resultado << endl;
                } else {
                    cout << "Número inválido!" << endl;
                }
                break;
                
            case 3:
                cout << "Saindo..." << endl;
                break;
                
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 3);
    
    return 0;
}
```

---

## ✨ Boas Práticas

### 1. **Nomes Descritivos**
```cpp
// ❌ Ruim
int calc(int x, int y) { return x + y; }

// ✅ Bom
int calcularSoma(int primeiro, int segundo) { 
    return primeiro + segundo; 
}
```

### 2. **Uma Função, Uma Responsabilidade**
```cpp
// ✅ Cada função tem uma responsabilidade específica
bool ehValido(int numero) {
    return numero >= 0;
}

void exibirResultado(int numero, long long resultado) {
    cout << numero << "! = " << resultado << endl;
}

long long calcularFatorial(int numero) {
    // apenas calcula o fatorial
}
```

### 3. **Validação de Entrada**
```cpp
int dividir(int dividendo, int divisor) {
    if (divisor == 0) {
        cout << "Erro: Divisão por zero!" << endl;
        return 0;
    }
    return dividendo / divisor;
}
```

### 4. **Comentários Úteis**
```cpp
/**
 * Calcula o fatorial de um número usando iteração
 * @param numero: número inteiro não-negativo
 * @return: fatorial do número ou -1 se inválido
 */
long long calcularFatorial(int numero) {
    // Validação de entrada
    if (numero < 0) return -1;
    
    // Casos base
    if (numero <= 1) return 1;
    
    // Cálculo iterativo
    long long resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    
    return resultado;
}
```

---

## 🎯 Exercícios Práticos

### Exercício 1: Calculadora Simples
Crie funções para:
- Somar dois números
- Subtrair dois números
- Multiplicar dois números
- Dividir dois números (com validação)

### Exercício 2: Funções Matemáticas
Implemente:
- Função para verificar se um número é primo
- Função para calcular potência
- Função para encontrar o maior de três números

### Exercício 3: Manipulação de Strings
Desenvolva:
- Função para contar caracteres em uma string
- Função para inverter uma string
- Função para verificar se uma string é palíndromo

### Código Base para os Exercícios

```cpp
#include <iostream>
#include <string>
using namespace std;

// Exercício 1: Calculadora
float somar(float a, float b) {
    // Sua implementação aqui
}

float subtrair(float a, float b) {
    // Sua implementação aqui
}

// Exercício 2: Funções Matemáticas
bool ehPrimo(int numero) {
    // Sua implementação aqui
}

int calcularPotencia(int base, int expoente) {
    // Sua implementação aqui
}

// Exercício 3: Strings
int contarCaracteres(string texto) {
    // Sua implementação aqui
}

string inverterString(string texto) {
    // Sua implementação aqui
}

int main() {
    // Teste suas funções aqui
    return 0;
}
```

---

## 🏆 Conclusão

As funções são fundamentais para criar programas organizados e eficientes em C++. Elas permitem:

- **Modularização** do código
- **Reutilização** de funcionalidades
- **Facilidade de manutenção**
- **Trabalho em equipe** mais eficiente

Continue praticando e experimentando com diferentes tipos de funções para dominar completamente este conceito essencial da programação!

---

*Desenvolvido com 💙 para estudantes de C++*
