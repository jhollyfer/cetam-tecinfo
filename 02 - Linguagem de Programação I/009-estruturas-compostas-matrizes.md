# 🧮 Matrizes em C++

## 📚 O que são Matrizes?

Uma **matriz** é uma estrutura de dados que organiza elementos em **linhas** e **colunas**, formando uma grade bidimensional. Imagine uma planilha do Excel ou uma tabela - isso é essencialmente uma matriz!

### 🎯 Conceitos Fundamentais

- **Elemento**: Cada valor individual na matriz
- **Índice**: A posição de um elemento (linha, coluna)
- **Dimensão**: Tamanho da matriz (linhas × colunas)

---

## 🏗️ Declarando Matrizes

Em C++, declaramos uma matriz especificando o tipo de dados, nome e dimensões:

```cpp
// Sintaxe básica
tipo nome[linhas][colunas];

// Exemplo prático
int matriz[3][4];  // Matriz 3x4 de inteiros
```

### 📝 Formas de Inicialização

```cpp
// 1. Declaração simples
int numeros[2][3];

// 2. Inicialização com valores
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// 3. Inicialização parcial
int parcial[2][3] = {{1, 2}, {4}};  // Restante fica com 0
```

---

## 🎮 Exemplo Prático: Jogo da Velha

Vamos criar uma matriz 3×3 para representar o tabuleiro:

```cpp
#include <iostream>
using namespace std;

int main() {
    char tabuleiro[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    // Fazendo uma jogada
    tabuleiro[1][1] = 'X';  // Centro do tabuleiro

    return 0;
}
```

---

## 🔄 Acessando e Manipulando Elementos

### Leitura e Escrita

```cpp
int matriz[3][3];

// Escrevendo valores
matriz[0][0] = 10;  // Primeira linha, primeira coluna
matriz[2][1] = 25;  // Terceira linha, segunda coluna

// Lendo valores
int valor = matriz[0][0];  // valor recebe 10
```

### 🔁 Percorrendo com Loops

```cpp
int matriz[3][4];

// Preenchendo a matriz
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
        cout << "Digite o valor [" << i << "][" << j << "]: ";
        cin >> matriz[i][j];
    }
}

// Exibindo a matriz
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
        cout << matriz[i][j] << " ";
    }
    cout << endl;  // Nova linha após cada linha da matriz
}
```

---

## ➕ Operações Básicas

### Soma de Elementos

```cpp
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int soma = 0;
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        soma += matriz[i][j];
    }
}

cout << "Soma total: " << soma << endl;  // Resultado: 45
```

### Encontrando o Maior Elemento

```cpp
int maior = matriz[0][0];  // Assume o primeiro como maior

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        if(matriz[i][j] > maior) {
            maior = matriz[i][j];
        }
    }
}
```

---

## 🎯 Dicas Importantes

### ⚠️ Cuidados com Índices

- Os índices sempre começam em **0**
- Para uma matriz 3×3: índices válidos são 0, 1, 2
- Acessar índices inválidos causa **comportamento indefinido**

### 💡 Boas Práticas

```cpp
// Use constantes para dimensões
const int LINHAS = 3;
const int COLUNAS = 4;
int matriz[LINHAS][COLUNAS];

// Facilita mudanças futuras e evita erros
for(int i = 0; i < LINHAS; i++) {
    for(int j = 0; j < COLUNAS; j++) {
        // Seu código aqui
    }
}
```

---

## 🚀 Exemplo Completo: Sistema de Notas

```cpp
#include <iostream>
using namespace std;

int main() {
    const int ALUNOS = 3;
    const int PROVAS = 4;

    float notas[ALUNOS][PROVAS];
    float medias[ALUNOS];

    // Entrada de dados
    for(int i = 0; i < ALUNOS; i++) {
        cout << "Aluno " << (i+1) << ":" << endl;
        for(int j = 0; j < PROVAS; j++) {
            cout << "  Prova " << (j+1) << ": ";
            cin >> notas[i][j];
        }
    }

    // Calculando médias
    for(int i = 0; i < ALUNOS; i++) {
        float soma = 0;
        for(int j = 0; j < PROVAS; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / PROVAS;
    }

    // Exibindo resultados
    cout << "\n=== MÉDIAS ===" << endl;
    for(int i = 0; i < ALUNOS; i++) {
        cout << "Aluno " << (i+1) << ": " << medias[i] << endl;
    }

    return 0;
}
```

---

## 🎪 Exercícios para Praticar

1. **Matriz Identidade**: Crie uma matriz 4×4 onde a diagonal principal tem valor 1 e o resto 0

2. **Transposição**: Transforme linhas em colunas e vice-versa

3. **Busca**: Encontre se um número específico existe na matriz e retorne sua posição

4. **Jogo da Velha Completo**: Implemente a lógica completa do jogo usando uma matriz 3×3

---

## 🎨 Visualização da Memória

```
Matriz[2][3]:
┌─────┬─────┬─────┐
│[0,0]│[0,1]│[0,2]│  ← Linha 0
├─────┼─────┼─────┤
│[1,0]│[1,1]│[1,2]│  ← Linha 1
└─────┴─────┴─────┘
   ↑     ↑     ↑
Col 0   Col 1  Col 2
```

---

## 🏆 Resumo

- Matrizes são tabelas bidimensionais de dados
- Use `[linha][coluna]` para acessar elementos
- Loops aninhados são ideais para percorrer matrizes
- Sempre cuidado com os limites dos índices
- Pratique com exemplos reais como jogos e sistemas

Com essas bases, você está pronto para explorar o mundo das matrizes em C++! 🚀
