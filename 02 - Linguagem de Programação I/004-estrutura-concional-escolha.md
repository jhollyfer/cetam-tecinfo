# 🎯 Controle de Fluxo em C++: Estrutura Switch-Case

## 📋 Índice

- [Introdução](#introdução)
- [Sintaxe Básica](#sintaxe-básica)
- [Comparação: if-else vs switch](#comparação-if-else-vs-switch)
- [Exemplos Práticos](#exemplos-práticos)
- [Boas Práticas](#boas-práticas)
- [Exercícios](#exercícios)

---

## 🎯 Introdução

A estrutura **switch-case** é uma ferramenta poderosa para controle de fluxo em C++, especialmente útil quando precisamos avaliar múltiplas condições baseadas no valor de uma única variável. É uma alternativa elegante e organizada ao uso excessivo de estruturas `if-else` encadeadas.

### 🔍 **Quando usar?**

- Múltiplas condições baseadas em uma única variável
- Valores discretos e conhecidos
- Menu de opções
- Classificação de dados

---

## ⚙️ Sintaxe Básica

```cpp
switch (expressao) {
    case valor1:
        // código para valor1
        break;
    case valor2:
        // código para valor2
        break;
    default:
        // código padrão (opcional)
        break;
}
```

### 📌 **Elementos Fundamentais**

| Elemento  | Função                                    |
| --------- | ----------------------------------------- |
| `switch`  | Palavra-chave que inicia a estrutura      |
| `case`    | Define cada condição específica           |
| `break`   | Interrompe a execução e sai do switch     |
| `default` | Caso padrão quando nenhum case é atendido |

---

## 🔄 Comparação: if-else vs switch

### **Usando if-else (menos eficiente)**

```cpp
int opcao = 2;

if (opcao == 1) {
    cout << "Opção 1 selecionada" << endl;
} else if (opcao == 2) {
    cout << "Opção 2 selecionada" << endl;
} else if (opcao == 3) {
    cout << "Opção 3 selecionada" << endl;
} else {
    cout << "Opção inválida" << endl;
}
```

### **Usando switch-case (mais eficiente)**

```cpp
int opcao = 2;

switch (opcao) {
    case 1:
        cout << "Opção 1 selecionada" << endl;
        break;
    case 2:
        cout << "Opção 2 selecionada" << endl;
        break;
    case 3:
        cout << "Opção 3 selecionada" << endl;
        break;
    default:
        cout << "Opção inválida" << endl;
}
```

---

## 💡 Exemplos Práticos

### 1️⃣ **Verificador Par/Ímpar**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    switch (numero % 2) {
        case 0:
            cout << numero << " é par" << endl;
            break;
        case 1:
            cout << numero << " é ímpar" << endl;
            break;
    }

    return 0;
}
```

### 2️⃣ **Sistema de Notas**

```cpp
#include <iostream>
using namespace std;

int main() {
    char nota;
    cout << "Digite sua nota (A, B, C, D, F): ";
    cin >> nota;

    switch (nota) {
        case 'A':
        case 'a':
            cout << "Excelente! (90-100)" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Muito Bom! (80-89)" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Bom! (70-79)" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Regular! (60-69)" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Reprovado! (0-59)" << endl;
            break;
        default:
            cout << "Nota inválida!" << endl;
    }

    return 0;
}
```

### 3️⃣ **Calculadora Básica**

```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operador;

    cout << "Digite dois números: ";
    cin >> num1 >> num2;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Operador inválido!" << endl;
            return 1;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
```

### 4️⃣ **Menu Interativo**

```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao;

    cout << "\n=== MENU PRINCIPAL ===" << endl;
    cout << "1. Novo Arquivo" << endl;
    cout << "2. Abrir Arquivo" << endl;
    cout << "3. Salvar Arquivo" << endl;
    cout << "4. Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Criando novo arquivo..." << endl;
            break;
        case 2:
            cout << "Abrindo arquivo..." << endl;
            break;
        case 3:
            cout << "Salvando arquivo..." << endl;
            break;
        case 4:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida! Tente novamente." << endl;
    }

    return 0;
}
```

---

## ✅ Boas Práticas

### 🎯 **1. Sempre use `break`**

```cpp
// ❌ ERRADO - Fall-through não intencional
switch (opcao) {
    case 1:
        cout << "Opção 1" << endl;
    case 2:  // Executa também caso opcao = 1
        cout << "Opção 2" << endl;
        break;
}

// ✅ CORRETO
switch (opcao) {
    case 1:
        cout << "Opção 1" << endl;
        break;
    case 2:
        cout << "Opção 2" << endl;
        break;
}
```

### 🎯 **2. Use `default` sempre que possível**

```cpp
switch (opcao) {
    case 1:
        // código
        break;
    case 2:
        // código
        break;
    default:
        cout << "Opção não reconhecida" << endl;
        break;
}
```

### 🎯 **3. Agrupe cases similares**

```cpp
switch (caractere) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "É uma vogal" << endl;
        break;
    default:
        cout << "É uma consoante" << endl;
        break;
}
```

### 🎯 **4. Mantenha cases organizados**

```cpp
// ✅ Ordenação lógica
switch (mes) {
    case 1:  // Janeiro
    case 2:  // Fevereiro
    case 3:  // Março
        cout << "Primeiro trimestre" << endl;
        break;
    case 4:  // Abril
    case 5:  // Maio
    case 6:  // Junho
        cout << "Segundo trimestre" << endl;
        break;
    // ...
}
```

---

## 🚨 Limitações e Cuidados

### ⚠️ **Tipos Suportados**

O switch-case funciona apenas com:

- Tipos inteiros (`int`, `char`, `short`, `long`)
- Tipos enumerados (`enum`)
- **NÃO** funciona com: `string`, `float`, `double`

### ⚠️ **Fall-through**

```cpp
int opcao = 1;
switch (opcao) {
    case 1:
        cout << "Um" << endl;
        // SEM break - continua para o próximo case
    case 2:
        cout << "Dois" << endl;
        break;
}
// Output: "Um" e "Dois"
```

---

## 📝 Exercícios Práticos

### **Exercício 1: Dias da Semana**

Crie um programa que receba um número de 1 a 7 e exiba o dia da semana correspondente.

### **Exercício 2: Classificação de Idade**

Desenvolva um programa que classifique uma pessoa por faixa etária:

- 0-12: Criança
- 13-17: Adolescente
- 18-59: Adulto
- 60+: Idoso

### **Exercício 3: Conversor de Moedas**

Implemente um menu para conversão entre diferentes moedas (Real, Dólar, Euro).

### **Exercício 4: Jogo Pedra, Papel, Tesoura**

Crie um jogo onde o usuário escolhe uma opção (1-Pedra, 2-Papel, 3-Tesoura) e o computador gera uma jogada aleatória.

---

## 🎓 Resumo

A estrutura **switch-case** é fundamental para:

- ✅ **Organização**: Código mais limpo e legível
- ✅ **Performance**: Mais eficiente que múltiplos if-else
- ✅ **Manutenibilidade**: Facilita alterações e expansões
- ✅ **Clareza**: Intenção do código fica mais evidente

### 💡 **Lembre-se sempre:**

1. Use `break` em cada case
2. Inclua `default` para casos não previstos
3. Ordene os cases logicamente
4. Teste todos os cenários possíveis

---

_Desenvolvido com 💻 para aprendizado em C++_
