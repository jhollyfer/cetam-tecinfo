# Avaliação N1

**Objetivo:**

- Esta avaliação deve ser feita em dupla.
- Cada dupla deve criar uma documentação para cada solução/algoritmo (exercício resolvido).
- Para cada solução deve ser adicionado comentários do que cada linha faz e ao final uma descrição geral do que o algoritmo resolve.
- A documentação deve ser entregue em um documento Word até o dia 28 de julho de 2025.

**Exemplo de como a documentação deve ser efetuada:**
**Solução:**

```cpp
#include <iostream> // biblioteca para entrada e saída de dados
using namespace std; // para usar cout e cin sem std::

int main() { // função principal do programa

    float num1, num2, num3, num4; // declarando 4 variáveis do tipo float para os números
    float soma; // variável para armazenar a soma dos 4 números
    float media; // variável para armazenar a média calculada

    cout << "Digite o primeiro número: "; // pede o primeiro número
    cin >> num1; // lê e armazena o primeiro número

    cout << "Digite o segundo número: "; // pede o segundo número
    cin >> num2; // lê e armazena o segundo número

    cout << "Digite o terceiro número: "; // pede o terceiro número
    cin >> num3; // lê e armazena o terceiro número

    cout << "Digite o quarto número: "; // pede o quarto número
    cin >> num4; // lê e armazena o quarto número

    soma = num1 + num2 + num3 + num4; // calcula a soma dos 4 números
    media = soma / 4; // calcula a média dividindo a soma por 4

    cout << "\nResultados:" << endl; // título dos resultados
    cout << "Números digitados: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl; // mostra os números
    cout << "Soma: " << soma << endl; // mostra a soma
    cout << "Média: " << media << endl; // mostra a média calculada

    return 0; // programa terminou com sucesso
}
```

**Descrição para a solução**
**O que o código faz?**

- Pede ao usuário para digitar 4 números
- Armazena cada número em uma variável separada
- Calcula a soma dos 4 números
- Divide a soma por 4 para obter a média
- Mostra os resultados na tela

**Agora documente as seguintes soluções abaixo:**

## 1. Tipos de Dados e Variáveis

### Exercício 1

**Enunciado:** Crie um programa que declare variáveis para armazenar as seguintes informações de um produto:

- Código (inteiro)
- Nome (string)
- Preço (decimal)
- Disponível em estoque (booleano)

**Solução:**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int codigo = 1001;
    string nome = "Notebook Dell";
    double preco = 2599.99;
    bool disponivel = true;

    return 0;
}
```

### Exercício 2

**Enunciado:** Declare duas variáveis inteiras e calcule :

- A soma dos dois números
- A diferença entre eles
- O produto
- A divisão (use números que resultem em divisão exata)

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero1 = 20;
    int numero2 = 4;

    int soma = numero1 + numero2;
    int diferenca = numero1 - numero2;
    int produto = numero1 * numero2;
    int divisao = numero1 / numero2;

     return 0;
}
```

## 2. Entrada e Saída

### Exercício 1

**Enunciado:** Faça um programa que leia o raio de um círculo e calcule:

- A área do círculo (π × r²)
- O perímetro do círculo (2 × π × r)
- Use π = 3.14159

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    double raio;
    const double PI = 3.14159;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    double area = PI * raio * raio;
    double perimetro = 2 * PI * raio;

    cout << "\nResultados:" << endl;
    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;

    return 0;
}
```

### Exercício 2

**Enunciado:** Crie um programa que leia três notas de um aluno e calcule a média final, exiba o resultado

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    double media = (nota1 + nota2 + nota3) / 3.0;

    cout << "\nMédia final: " << media << endl;

    return 0;
}
```

## 3. Condicionais IF Simples

### Exercício 1

**Enunciado:** Faça um programa que leia a idade de uma pessoa e informe se ela pode votar (idade >= 16).

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 16) {
        cout << "Você pode votar!" << endl;
    }

    if (idade < 16) {
        cout << "Você ainda não pode votar." << endl;
    }

    return 0;
}
```

### Exercício 2

**Enunciado:** Desenvolva um programa que leia a nota de um aluno e informe se ele foi aprovado (nota >= 7.0).

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Digite a nota do aluno: ";
    cin >> nota;

    if (nota >= 7.0) {
        cout << "Aluno aprovado!" << endl;
    }

    if (nota < 7.0) {
        cout << "Aluno não foi aprovado." << endl;
    }

    return 0;
}
```

## 4. Condicionais IF Compostas (if-else)

### Exercício 1

**Enunciado:** Faça um programa que leia dois números e informe qual é o maior.

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "O primeiro número (" << num1 << ") é maior." << endl;
    } else if (num2 > num1) {
        cout << "O segundo número (" << num2 << ") é maior." << endl;
    } else {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}
```

### Exercício 2

**Enunciado:** Desenvolva um programa que leia um número e informe se ele é par ou ímpar.

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O número é par." << endl;
    } else {
        cout << "O número é ímpar." << endl;
    }

    return 0;
}
```

## 5. Condicionais IF Encadeadas (if-else if-else)

### Exercício 1

**Enunciado:** Faça um programa que leia a nota de um aluno e classifique:

- Nota >= 9.0: "Excelente"
- Nota >= 7.0: "Bom"
- Nota >= 5.0: "Regular"
- Nota < 5.0: "Insuficiente"

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Digite a nota do aluno: ";
    cin >> nota;

    if (nota >= 9.0) {
        cout << "Classificação: Excelente" << endl;
    } else if (nota >= 7.0) {
        cout << "Classificação: Bom" << endl;
    } else if (nota >= 5.0) {
        cout << "Classificação: Regular" << endl;
    } else {
        cout << "Classificação: Insuficiente" << endl;
    }

    return 0;
}
```

### Exercício 2

**Enunciado:** Desenvolva um programa que leia a idade de uma pessoa e classifique:

- 0-12 anos: "Criança"
- 13-17 anos: "Adolescente"
- 18-59 anos: "Adulto"
- 60+ anos: "Idoso"

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if (idade >= 0 && idade <= 12) {
        cout << "Classificação: Criança" << endl;
    } else if (idade >= 13 && idade <= 17) {
        cout << "Classificação: Adolescente" << endl;
    } else if (idade >= 18 && idade <= 59) {
        cout << "Classificação: Adulto" << endl;
    } else if (idade >= 60) {
        cout << "Classificação: Idoso" << endl;
    } else {
        cout << "Idade inválida!" << endl;
    }

    return 0;
}
```

## 6. Condicionais Switch-Case

### Exercício 1

**Enunciado:** Crie um programa que leia um número de 1 a 12 e exiba o mês correspondente usando switch-case.

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "Digite um número de 1 a 12: ";
    cin >> mes;

    switch (mes) {
        case 1:
            cout << "Janeiro" << endl;
            break;
        case 2:
            cout << "Fevereiro" << endl;
            break;
        case 3:
            cout << "Março" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Maio" << endl;
            break;
        case 6:
            cout << "Junho" << endl;
            break;
        case 7:
            cout << "Julho" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            break;
        case 9:
            cout << "Setembro" << endl;
            break;
        case 10:
            cout << "Outubro" << endl;
            break;
        case 11:
            cout << "Novembro" << endl;
            break;
        case 12:
            cout << "Dezembro" << endl;
            break;
        default:
            cout << "Número inválido! Digite um número de 1 a 12." << endl;
            break;
    }

    return 0;
}
```

### Exercício 2

**Enunciado:** Faça um programa que leia uma letra e informe se é vogal ou consoante usando switch-case.

**Solução:**

```cpp
#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    // Converte para minúscula para facilitar a comparação
    letra = tolower(letra);

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "A letra '" << letra << "' é uma vogal." << endl;
            break;

        default:
            if ((letra >= 'a' && letra <= 'z')) {
                cout << "A letra '" << letra << "' é uma consoante." << endl;
            } else {
                cout << "Caractere inválido! Digite apenas letras." << endl;
            }
            break;
    }

    return 0;
}
```

## Observações Importantes

### Dê uma olhada nos seguintes conceitos para realizar esta avaliação

1. **Tipos de dados**: int, double, char, string, bool
2. **Entrada/Saída**: cin, cout, getline
3. **Operadores**: aritméticos (+, -, \*, /), relacionais (==, !=, <, >), lógicos (&&, ||)
4. **Estruturas condicionais**: if, if-else, if-else if-else, switch-case

### Bibliotecas Utilizadas

- `#include <iostream>`: Para entrada e saída (cin, cout)
- `#include <string>`: Para trabalhar com strings
