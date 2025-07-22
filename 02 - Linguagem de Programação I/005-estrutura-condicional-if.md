# Estruturas Condicionais em C++

## 📋 Sumário

- [If Simples](#if-simples)
- [If-Else](#if-else)
- [If-Else Compostos](#if-else-compostos)
- [Switch-Case](#switch-case)
- [Menu Interativo](#menu-interativo)
- [Boas Práticas](#boas-práticas)
- [Exercícios Práticos](#exercícios-práticos)

---

## If Simples

O `if` é a estrutura condicional mais básica. Executa um bloco de código apenas se a condição for verdadeira.

### Sintaxe

```cpp
if (condição) {
    // código a ser executado
}
```

### Exemplo Prático

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Você é maior de idade!" << endl;
    }

    return 0;
}
```

---

## If-Else

Permite executar diferentes blocos de código dependendo da condição.

### Sintaxe

```cpp
if (condição) {
    // código se verdadeiro
} else {
    // código se falso
}
```

### Exemplo Prático

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " é par." << endl;
    } else {
        cout << numero << " é ímpar." << endl;
    }

    return 0;
}
```

---

## If-Else Compostos

Estruturas condicionais aninhadas ou encadeadas permitem múltiplas verificações.

### If-Else Encadeado

```cpp
if (condição1) {
    // código 1
} else if (condição2) {
    // código 2
} else if (condição3) {
    // código 3
} else {
    // código padrão
}
```

### Exemplo: Sistema de Notas

```cpp
#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Digite a nota (0-10): ";
    cin >> nota;

    if (nota >= 9.0) {
        cout << "Conceito: A - Excelente!" << endl;
    } else if (nota >= 7.0) {
        cout << "Conceito: B - Bom!" << endl;
    } else if (nota >= 5.0) {
        cout << "Conceito: C - Regular" << endl;
    } else {
        cout << "Conceito: D - Insuficiente" << endl;
    }

    return 0;
}
```

### If Aninhado

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;
    bool temCarteira;

    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Tem carteira de motorista? (1-Sim, 0-Não): ";
    cin >> temCarteira;

    if (idade >= 18) {
        if (temCarteira) {
            cout << "Pode dirigir!" << endl;
        } else {
            cout << "Precisa tirar a carteira!" << endl;
        }
    } else {
        cout << "Muito jovem para dirigir!" << endl;
    }

    return 0;
}
```

---

## Switch-Case

Ideal para múltiplas opções baseadas em valores específicos de uma variável.

### Sintaxe

```cpp
switch (variável) {
    case valor1:
        // código
        break;
    case valor2:
        // código
        break;
    default:
        // código padrão
        break;
}
```

### Exemplo: Calculadora Simples

```cpp
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;
    cout << "Digite o segundo número: ";
    cin >> num2;

    switch (operacao) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Operação inválida!" << endl;
            break;
    }

    return 0;
}
```

---

## Menu Interativo

Exemplo prático de um sistema de menu usando switch-case.

```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao;

    do {
        cout << "\n=== MENU PRINCIPAL ===" << endl;
        cout << "1. Verificar número par/ímpar" << endl;
        cout << "2. Calcular área do círculo" << endl;
        cout << "3. Converter temperatura" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int num;
                cout << "Digite um número: ";
                cin >> num;
                cout << num << " é " << (num % 2 == 0 ? "par" : "ímpar") << endl;
                break;
            }
            case 2: {
                float raio;
                cout << "Digite o raio: ";
                cin >> raio;
                cout << "Área: " << 3.14159 * raio * raio << endl;
                break;
            }
            case 3: {
                float celsius;
                cout << "Digite temperatura em Celsius: ";
                cin >> celsius;
                cout << "Fahrenheit: " << (celsius * 9/5) + 32 << endl;
                break;
            }
            case 0:
                cout << "Saindo... Até logo!" << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
```

---

## Boas Práticas

### ✅ Faça

- Use `{}` mesmo para comandos únicos
- Sempre inclua `break` no switch-case
- Utilize `default` no switch
- Indente corretamente o código
- Use nomes descritivos para variáveis

### ❌ Evite

```cpp
// Sem chaves - perigoso
if (x > 0)
    cout << "Positivo";
    cout << "Sempre executa"; // Problema!

// Sem break - execução em cascata
switch (opcao) {
    case 1:
        cout << "Um";
        // sem break - continua para case 2
    case 2:
        cout << "Dois";
}
```

### ✅ Melhor Forma

```cpp
if (x > 0) {
    cout << "Positivo" << endl;
}
cout << "Sempre executa" << endl;

switch (opcao) {
    case 1:
        cout << "Um" << endl;
        break;
    case 2:
        cout << "Dois" << endl;
        break;
    default:
        cout << "Opção inválida" << endl;
        break;
}
```

---

## Exercícios Práticos

### 🎯 Exercício 1: Classificação de Idade

Crie um programa que classifique uma pessoa em:

- 0-12: Criança
- 13-17: Adolescente
- 18-59: Adulto
- 60+: Idoso

### 🎯 Exercício 2: Sistema de Login

Implemente um sistema simples que:

- Peça usuário e senha
- Valide as credenciais
- Exiba menu apenas se login correto

### 🎯 Exercício 3: Conversor de Medidas

Crie um menu para converter:

1. Metros para centímetros
2. Quilômetros para metros
3. Centímetros para milímetros
4. Sair

### 🎯 Exercício 4: Aprovação Escolar

Sistema que:

- Receba 3 notas
- Calcule a média
- Determine: Aprovado (≥7), Recuperação (5-6.9), Reprovado (<5)

---

## 💡 Dicas de Foco

Para manter o **foco** durante a programação:

1. **Planeje antes de codificar** - Desenhe o fluxo lógico
2. **Teste cada parte** - Execute frequentemente
3. **Use comentários** - Documente sua lógica
4. **Pratique regularmente** - Consolide o conhecimento
5. **Debug passo a passo** - Entenda cada execução

---

_Este guia aborda os conceitos fundamentais de estruturas condicionais em C++, preparando você para criar programas mais dinâmicos e interativos._
