# Expressões e Formatação de Saída

## 📋 Visão Geral

Este material aborda os conceitos fundamentais de **expressões** e **formatação de saída** em C++, essenciais para criar programas que processem dados e apresentem resultados de forma clara e profissional.

---

## 🧮 Expressões em C++

### Definição

Uma **expressão** é uma combinação de variáveis, constantes, operadores e chamadas de função que produz um valor.

### Tipos de Expressões

#### 1. Expressões Aritméticas

```cpp
int a = 10, b = 3;
int soma = a + b;        // 13
int produto = a * b;     // 30
double divisao = a / 3.0; // 3.33333
```

#### 2. Expressões Relacionais

```cpp
bool maior = (a > b);    // true
bool igual = (a == b);   // false
bool diferente = (a != b); // true
```

#### 3. Expressões Lógicas

```cpp
bool resultado1 = (a > 5) && (b < 10);  // true
bool resultado2 = (a < 5) || (b > 1);   // true
bool resultado3 = !(a == b);            // true
```

### Precedência de Operadores

| Prioridade | Operadores           | Descrição                      |
| ---------- | -------------------- | ------------------------------ | --- | --------- |
| **1**      | `()`                 | Parênteses                     |
| **2**      | `*`, `/`, `%`        | Multiplicação, Divisão, Módulo |
| **3**      | `+`, `-`             | Adição, Subtração              |
| **4**      | `<`, `>`, `<=`, `>=` | Relacionais                    |
| **5**      | `==`, `!=`           | Igualdade                      |
| **6**      | `&&`                 | E lógico                       |
| **7**      | `                    |                                | `   | OU lógico |

---

## 🖨️ Formatação de Saída com `cout`

### Conceitos Básicos

O objeto `cout` é usado para exibir dados na tela. Para formatação avançada, utilizamos manipuladores e métodos específicos.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
```

### Formatação Numérica

#### Precisão Decimal

```cpp
double pi = 3.14159265;
cout << fixed << setprecision(2) << pi; // 3.14
cout << fixed << setprecision(4) << pi; // 3.1416
```

#### Largura de Campo

```cpp
int num = 42;
cout << setw(10) << num << endl;        // "        42"
cout << setw(10) << left << num << endl; // "42        "
```

#### Preenchimento

```cpp
cout << setfill('0') << setw(5) << 42;  // "00042"
cout << setfill('-') << setw(8) << 123; // "-----123"
```

### Formatação de Tabelas

#### Exemplo Prático: Tabela de Produtos

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Cabeçalho
    cout << left << setw(15) << "Produto"
         << right << setw(10) << "Preço"
         << right << setw(10) << "Qtd" << endl;
    cout << string(35, '-') << endl;

    // Dados
    cout << left << setw(15) << "Notebook"
         << right << setw(10) << fixed << setprecision(2) << 1299.99
         << right << setw(10) << 5 << endl;

    cout << left << setw(15) << "Mouse"
         << right << setw(10) << 29.90
         << right << setw(10) << 15 << endl;

    return 0;
}
```

**Saída:**

```
Produto              Preço       Qtd
-----------------------------------
Notebook           1299.99         5
Mouse                29.90        15
```

---

## 🎯 Manipuladores Úteis

### Manipuladores Básicos

| Manipulador  | Função                 | Exemplo                               |
| ------------ | ---------------------- | ------------------------------------- |
| `endl`       | Nova linha + flush     | `cout << "Texto" << endl;`            |
| `left`       | Alinhamento à esquerda | `cout << left << setw(10) << "ABC";`  |
| `right`      | Alinhamento à direita  | `cout << right << setw(10) << "ABC";` |
| `fixed`      | Notação decimal fixa   | `cout << fixed << 3.14159;`           |
| `scientific` | Notação científica     | `cout << scientific << 1234.5;`       |

### Manipuladores com Parâmetros

```cpp
setw(n)           // Define largura do campo
setprecision(n)   // Define precisão decimal
setfill(char)     // Define caractere de preenchimento
```

---

## 💡 Exemplos Práticos

### 1. Calculadora Simples

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2;

    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    cout << fixed << setprecision(2);
    cout << "Soma: " << (num1 + num2) << endl;
    cout << "Subtração: " << (num1 - num2) << endl;
    cout << "Multiplicação: " << (num1 * num2) << endl;

    if (num2 != 0) {
        cout << "Divisão: " << (num1 / num2) << endl;
    }

    return 0;
}
```

### 2. Relatório Financeiro

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double receita = 15000.50;
    double despesas = 8750.25;
    double lucro = receita - despesas;
    double percentual = (lucro / receita) * 100;

    cout << "=== RELATÓRIO FINANCEIRO ===" << endl;
    cout << fixed << setprecision(2);
    cout << "Receita:    R$ " << setw(10) << receita << endl;
    cout << "Despesas:   R$ " << setw(10) << despesas << endl;
    cout << "Lucro:      R$ " << setw(10) << lucro << endl;
    cout << "Margem:        " << setw(7) << percentual << "%" << endl;

    return 0;
}
```

---

## 🔧 Dicas Importantes

### ✅ Boas Práticas

- Use `#include <iomanip>` para manipuladores avançados
- Sempre defina precisão antes de exibir números decimais
- Use `setw()` para alinhar colunas em tabelas
- Prefira `endl` ao invés de `\n` para garantir o flush do buffer

### ⚠️ Cuidados Especiais

- `setw()` afeta apenas a **próxima** saída
- `setprecision()` e `fixed` permanecem ativos até serem alterados
- Divisão por zero gera comportamento indefinido
- Use parênteses para garantir a precedência correta

### 🐛 Tratamento de Erros Comuns

```cpp
// Verificar divisão por zero
if (denominador != 0) {
    resultado = numerador / denominador;
} else {
    cout << "Erro: Divisão por zero!" << endl;
}

// Validar entrada do usuário
if (cin.fail()) {
    cout << "Entrada inválida!" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}
```

---

## 🎯 Exercícios Propostos

### 1. Tabela de Conversão

Crie um programa que exiba uma tabela convertendo Celsius para Fahrenheit (0°C a 100°C, de 10 em 10).

### 2. Calculadora de IMC

Desenvolva um programa que calcule o IMC e exiba o resultado formatado com 2 casas decimais.

### 3. Sistema de Notas

Implemente um programa que calcule a média de 3 notas e exiba uma tabela formatada com as notas individuais e a média.

---

## 📚 Resumo dos Conceitos

- **Expressões** combinam variáveis, constantes e operadores para produzir valores
- **Precedência de operadores** determina a ordem de avaliação
- **`cout`** com manipuladores permite formatação profissional da saída
- **Manipuladores** como `setw()`, `setprecision()` e `fixed` controlam a apresentação
- **Tabelas formatadas** melhoram a legibilidade dos dados
- **Validação de entrada** previne erros em tempo de execução

---

_Desenvolvido para o aprendizado de C++ - Foco em expressões e formatação de saída_
