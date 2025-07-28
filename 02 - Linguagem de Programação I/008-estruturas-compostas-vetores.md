# 🚀 Vetores em C++: Seu Guia Completo

## 📋 O que são Vetores?

Imagine que você tem uma gaveta com várias caixinhas numeradas, onde cada caixinha pode guardar um item do mesmo tipo. Um **vetor** em C++ funciona exatamente assim! É uma estrutura de dados que permite armazenar múltiplos valores do mesmo tipo em posições sequenciais na memória.

### 🎯 Características Principais

- **Homogêneo**: Todos os elementos são do mesmo tipo
- **Indexado**: Cada elemento tem uma posição (índice) única
- **Tamanho fixo**: Uma vez criado, o tamanho não pode ser alterado
- **Acesso direto**: Você pode acessar qualquer elemento diretamente pelo índice

---

## 🏗️ Declarando Vetores

### Sintaxe Básica

```cpp
tipo_do_dado nome_do_vetor[tamanho];
```

### Exemplos Práticos

```cpp
int numeros[5];           // Vetor de 5 números inteiros
float notas[10];          // Vetor de 10 notas decimais
char letras[26];          // Vetor de 26 caracteres
```

### Declaração com Inicialização

```cpp
int idades[4] = {18, 25, 30, 45};
float precos[3] = {10.5, 25.0, 8.75};
```

---

## 🔢 Índices: A Chave do Acesso

Os vetores em C++ usam **indexação baseada em zero**:

| Posição Real | 1ª  | 2ª  | 3ª  | 4ª  | 5ª  |
| ------------ | --- | --- | --- | --- | --- |
| Índice       | 0   | 1   | 2   | 3   | 4   |

### Acessando Elementos

```cpp
int numeros[5] = {10, 20, 30, 40, 50};

cout << numeros[0];  // Imprime: 10 (primeiro elemento)
cout << numeros[4];  // Imprime: 50 (último elemento)
```

---

## ✏️ Manipulando Vetores

### Atribuindo Valores

```cpp
int pontuacao[3];
pontuacao[0] = 100;  // Primeiro elemento
pontuacao[1] = 85;   // Segundo elemento
pontuacao[2] = 92;   // Terceiro elemento
```

### Lendo Dados do Usuário

```cpp
int numeros[3];
for(int i = 0; i < 3; i++) {
    cout << "Digite o número " << (i+1) << ": ";
    cin >> numeros[i];
}
```

---

## 📊 Operações Comuns com Vetores

### 1. Soma dos Elementos

```cpp
int numeros[5] = {10, 20, 30, 40, 50};
int soma = 0;

for(int i = 0; i < 5; i++) {
    soma += numeros[i];
}
cout << "Soma total: " << soma;  // Resultado: 150
```

### 2. Encontrar o Maior Valor

```cpp
int valores[4] = {15, 8, 23, 12};
int maior = valores[0];

for(int i = 1; i < 4; i++) {
    if(valores[i] > maior) {
        maior = valores[i];
    }
}
cout << "Maior valor: " << maior;  // Resultado: 23
```

### 3. Exibir Todos os Elementos

```cpp
int lista[5] = {1, 2, 3, 4, 5};

for(int i = 0; i < 5; i++) {
    cout << "Posição " << i << ": " << lista[i] << endl;
}
```

---

## 🔄 Ordenação de Vetores

### Algoritmo Bubble Sort (Simples)

```cpp
int numeros[4] = {64, 34, 25, 12};
int n = 4;

// Ordenação crescente
for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
        if(numeros[j] > numeros[j+1]) {
            // Troca os elementos
            int temp = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = temp;
        }
    }
}
```

---

## ⚠️ Cuidados Importantes

### 1. Índices Válidos

```cpp
int vetor[5];
// ✅ Correto: índices de 0 a 4
vetor[0] = 10;
vetor[4] = 50;

// ❌ Erro: índice 5 não existe!
vetor[5] = 60;  // Comportamento indefinido
```

### 2. Inicialização

```cpp
int numeros[3];  // Valores podem ser aleatórios!

// Melhor prática: sempre inicializar
int numeros[3] = {0, 0, 0};  // Todos zerados
```

---

## 💡 Exemplo Prático Completo

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaração e inicialização
    float notas[5];
    float soma = 0;

    // Entrada de dados
    cout << "Digite 5 notas:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Nota " << (i+1) << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    // Cálculo da média
    float media = soma / 5;

    // Exibição dos resultados
    cout << "\n--- RELATÓRIO ---" << endl;
    cout << "Média: " << media << endl;

    if(media >= 7.0) {
        cout << "Status: APROVADO! 🎉" << endl;
    } else {
        cout << "Status: Precisa melhorar 📚" << endl;
    }

    return 0;
}
```

---

## 🎯 Resumo dos Conceitos

| Conceito          | Descrição                       |
| ----------------- | ------------------------------- |
| **Declaração**    | `tipo nome[tamanho]`            |
| **Acesso**        | `nome[índice]` (começando do 0) |
| **Tamanho**       | Fixo após a declaração          |
| **Inicialização** | `{valor1, valor2, ...}`         |
| **Iteração**      | Usar loops `for` com índices    |

---
