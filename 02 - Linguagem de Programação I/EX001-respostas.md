# Exercícios de C++ para Iniciantes - Com Soluções

## 1. Tipos de Dados e Variáveis

### Exercício 1.1
**Enunciado:** Declare variáveis dos seguintes tipos e atribua valores adequados:
- Um número inteiro para armazenar sua idade
- Um número decimal para armazenar sua altura em metros
- Um caractere para armazenar a primeira letra do seu nome
- Uma string para armazenar seu nome completo
- Um valor booleano para indicar se você é estudante

**Solução:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int idade = 25;
    double altura = 1.75;
    char primeiraLetra = 'J';
    string nomeCompleto = "João Silva";
    bool ehEstudante = true;
    
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << "m" << endl;
    cout << "Primeira letra: " << primeiraLetra << endl;
    cout << "Nome completo: " << nomeCompleto << endl;
    cout << "É estudante: " << (ehEstudante ? "Sim" : "Não") << endl;
    
    return 0;
}
```

### Exercício 1.2
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
    
    cout << "=== INFORMAÇÕES DO PRODUTO ===" << endl;
    cout << "Código: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    cout << "Preço: R$ " << preco << endl;
    cout << "Disponível: " << (disponivel ? "Sim" : "Não") << endl;
    
    return 0;
}
```

### Exercício 1.3
**Enunciado:** Declare duas variáveis inteiras, calcule e exiba:
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
    
    cout << "Número 1: " << numero1 << endl;
    cout << "Número 2: " << numero2 << endl;
    cout << "Soma: " << soma << endl;
    cout << "Diferença: " << diferenca << endl;
    cout << "Produto: " << produto << endl;
    cout << "Divisão: " << divisao << endl;
    
    return 0;
}
```

## 2. Entrada e Saída

### Exercício 2.1
**Enunciado:** Crie um programa que:
- Solicite ao usuário seu nome
- Solicite sua idade
- Exiba uma mensagem de boas-vindas personalizada

**Solução:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    
    cout << "Digite seu nome: ";
    getline(cin, nome);
    
    cout << "Digite sua idade: ";
    cin >> idade;
    
    cout << "\nOlá, " << nome << "!" << endl;
    cout << "Seja bem-vindo(a)! Você tem " << idade << " anos." << endl;
    
    return 0;
}
```

### Exercício 2.2
**Enunciado:** Desenvolva um programa que leia dois números inteiros do usuário e exiba:
- A soma dos números
- A média aritmética dos números

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    int soma = num1 + num2;
    double media = (num1 + num2) / 2.0;
    
    cout << "\nResultados:" << endl;
    cout << "Soma: " << soma << endl;
    cout << "Média: " << media << endl;
    
    return 0;
}
```

### Exercício 2.3
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

### Exercício 2.4
**Enunciado:** Crie um programa que leia três notas de um aluno e calcule a média final, exibindo o resultado com duas casas decimais.

**Solução:**
```cpp
#include <iostream>
#include <iomanip>
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
    
    cout << fixed << setprecision(2);
    cout << "\nMédia final: " << media << endl;
    
    return 0;
}
```

## 3. Condicionais IF Simples

### Exercício 3.1
**Enunciado:** Escreva um programa que leia um número e informe se ele é positivo ou não.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << "O número é positivo." << endl;
    }
    
    if (numero <= 0) {
        cout << "O número não é positivo." << endl;
    }
    
    return 0;
}
```

### Exercício 3.2
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

### Exercício 3.3
**Enunciado:** Crie um programa que leia dois números e informe se o primeiro é maior que o segundo.

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
        cout << "O primeiro número é maior que o segundo." << endl;
    }
    
    if (num1 <= num2) {
        cout << "O primeiro número não é maior que o segundo." << endl;
    }
    
    return 0;
}
```

### Exercício 3.4
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

### Exercício 3.5
**Enunciado:** Faça um programa que leia um número e informe se ele é par.

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
    }
    
    if (numero % 2 != 0) {
        cout << "O número não é par." << endl;
    }
    
    return 0;
}
```

## 4. Condicionais IF Compostas (if-else)

### Exercício 4.1
**Enunciado:** Escreva um programa que leia um número e informe se ele é positivo ou negativo.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << "O número é positivo." << endl;
    } else if (numero < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }
    
    return 0;
}
```

### Exercício 4.2
**Enunciado:** Crie um programa que leia a idade de uma pessoa e informe se ela é maior ou menor de idade.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;
    
    cout << "Digite sua idade: ";
    cin >> idade;
    
    if (idade >= 18) {
        cout << "Você é maior de idade." << endl;
    } else {
        cout << "Você é menor de idade." << endl;
    }
    
    return 0;
}
```

### Exercício 4.3
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

### Exercício 4.4
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

### Exercício 4.5
**Enunciado:** Crie um programa que leia a nota de um aluno e informe se ele foi aprovado (nota >= 7.0) ou reprovado.

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
    } else {
        cout << "Aluno reprovado." << endl;
    }
    
    return 0;
}
```

### Exercício 4.6
**Enunciado:** Faça um programa que leia o salário de um funcionário e calcule o novo salário com aumento:
- Se salário <= 1000: aumento de 20%
- Se salário > 1000: aumento de 10%

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double salario;
    
    cout << "Digite o salário atual: R$ ";
    cin >> salario;
    
    double novoSalario;
    
    if (salario <= 1000) {
        novoSalario = salario * 1.20; // aumento de 20%
        cout << "Aumento de 20% aplicado." << endl;
    } else {
        novoSalario = salario * 1.10; // aumento de 10%
        cout << "Aumento de 10% aplicado." << endl;
    }
    
    cout << "Salário anterior: R$ " << salario << endl;
    cout << "Novo salário: R$ " << novoSalario << endl;
    
    return 0;
}
```

## 5. Condicionais IF Encadeadas (if-else if-else)

### Exercício 5.1
**Enunciado:** Crie um programa que leia três números e determine qual é o maior.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    cout << "Digite o terceiro número: ";
    cin >> num3;
    
    if (num1 >= num2 && num1 >= num3) {
        cout << "O maior número é: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "O maior número é: " << num2 << endl;
    } else {
        cout << "O maior número é: " << num3 << endl;
    }
    
    return 0;
}
```

### Exercício 5.2
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

### Exercício 5.3
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

### Exercício 5.4
**Enunciado:** Crie um programa que calcule o IMC (Peso/Altura²) e classifique:
- IMC < 18.5: "Abaixo do peso"
- IMC < 25: "Peso normal"
- IMC < 30: "Sobrepeso"
- IMC >= 30: "Obesidade"

**Solução:**
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso, altura, imc;
    
    cout << "Digite seu peso (kg): ";
    cin >> peso;
    
    cout << "Digite sua altura (m): ";
    cin >> altura;
    
    imc = peso / (altura * altura);
    
    cout << fixed << setprecision(2);
    cout << "\nSeu IMC é: " << imc << endl;
    
    if (imc < 18.5) {
        cout << "Classificação: Abaixo do peso" << endl;
    } else if (imc < 25) {
        cout << "Classificação: Peso normal" << endl;
    } else if (imc < 30) {
        cout << "Classificação: Sobrepeso" << endl;
    } else {
        cout << "Classificação: Obesidade" << endl;
    }
    
    return 0;
}
```

### Exercício 5.5
**Enunciado:** Faça um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente:
- 1: "Domingo"
- 2: "Segunda-feira"
- ... e assim por diante

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int dia;
    
    cout << "Digite um número de 1 a 7: ";
    cin >> dia;
    
    if (dia == 1) {
        cout << "Domingo" << endl;
    } else if (dia == 2) {
        cout << "Segunda-feira" << endl;
    } else if (dia == 3) {
        cout << "Terça-feira" << endl;
    } else if (dia == 4) {
        cout << "Quarta-feira" << endl;
    } else if (dia == 5) {
        cout << "Quinta-feira" << endl;
    } else if (dia == 6) {
        cout << "Sexta-feira" << endl;
    } else if (dia == 7) {
        cout << "Sábado" << endl;
    } else {
        cout << "Número inválido! Digite um número de 1 a 7." << endl;
    }
    
    return 0;
}
```

### Exercício 5.6
**Enunciado:** Desenvolva uma calculadora simples que leia dois números e uma operação (+, -, *, /) e execute o cálculo correspondente.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacao;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (operacao == '+') {
        resultado = num1 + num2;
        cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
    } else if (operacao == '-') {
        resultado = num1 - num2;
        cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
    } else if (operacao == '*') {
        resultado = num1 * num2;
        cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
    } else if (operacao == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
        }
    } else {
        cout << "Operação inválida!" << endl;
    }
    
    return 0;
}
```

## 6. Condicionais Switch-Case

### Exercício 6.1
**Enunciado:** Refaça o exercício 5.5 (dias da semana) usando switch-case.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int dia;
    
    cout << "Digite um número de 1 a 7: ";
    cin >> dia;
    
    switch (dia) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Terça-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        case 7:
            cout << "Sábado" << endl;
            break;
        default:
            cout << "Número inválido! Digite um número de 1 a 7." << endl;
            break;
    }
    
    return 0;
}
```

### Exercício 6.2
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

### Exercício 6.3
**Enunciado:** Desenvolva um menu de opções usando switch-case:
1. Calcular área do quadrado
2. Calcular área do círculo
3. Calcular área do triângulo
4. Sair

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao;
    double lado, raio, base, altura, area;
    const double PI = 3.14159;
    
    cout << "=== CALCULADORA DE ÁREAS ===" << endl;
    cout << "1. Calcular área do quadrado" << endl;
    cout << "2. Calcular área do círculo" << endl;
    cout << "3. Calcular área do triângulo" << endl;
    cout << "4. Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    
    switch (opcao) {
        case 1:
            cout << "Digite o lado do quadrado: ";
            cin >> lado;
            area = lado * lado;
            cout << "Área do quadrado: " << area << endl;
            break;
            
        case 2:
            cout << "Digite o raio do círculo: ";
            cin >> raio;
            area = PI * raio * raio;
            cout << "Área do círculo: " << area << endl;
            break;
            
        case 3:
            cout << "Digite a base do triângulo: ";
            cin >> base;
            cout << "Digite a altura do triângulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "Área do triângulo: " << area << endl;
            break;
            
        case 4:
            cout << "Saindo do programa..." << endl;
            break;
            
        default:
            cout << "Opção inválida!" << endl;
            break;
    }
    
    return 0;
}
```

### Exercício 6.4
**Enunciado:** Refaça a calculadora do exercício 5.6 usando switch-case.

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacao;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
            break;
            
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
            break;
            
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
            break;
            
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
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

### Exercício 6.5
**Enunciado:** Crie um programa que simule um caixa eletrônico com as opções:
1. Consultar saldo
2. Depositar
3. Sacar
4. Sair

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao;
    double saldo = 1000.0; // saldo inicial
    double valor;
    
    cout << "=== CAIXA ELETRÔNICO ===" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Sacar" << endl;
    cout << "4. Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    
    switch (opcao) {
        case 1:
            cout << "Seu saldo atual é: R$ " << saldo << endl;
            break;
            
        case 2:
            cout << "Digite o valor para depósito: R$ ";
            cin >> valor;
            if (valor > 0) {
                saldo += valor;
                cout << "Depósito realizado com sucesso!" << endl;
                cout << "Novo saldo: R$ " << saldo << endl;
            } else {
                cout << "Valor inválido para depósito!" << endl;
            }
            break;
            
        case 3:
            cout << "Digite o valor para saque: R$ ";
            cin >> valor;
            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                cout << "Saque realizado com sucesso!" << endl;
                cout << "Novo saldo: R$ " << saldo << endl;
            } else if (valor > saldo) {
                cout << "Saldo insuficiente!" << endl;
            } else {
                cout << "Valor inválido para saque!" << endl;
            }
            break;
            
        case 4:
            cout << "Obrigado por usar nosso caixa eletrônico!" << endl;
            break;
            
        default:
            cout << "Opção inválida!" << endl;
            break;
    }
    
    return 0;
}
```

### Exercício 6.6
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

## Desafios Extras

### Desafio 1
**Enunciado:** Crie um programa que leia três lados de um triângulo e determine:
- Se formam um triângulo válido
- Se é equilátero, isósceles ou escaleno

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;
    
    cout << "Digite o primeiro lado do triângulo: ";
    cin >> lado1;
    
    cout << "Digite o segundo lado do triângulo: ";
    cin >> lado2;
    
    cout << "Digite o terceiro lado do triângulo: ";
    cin >> lado3;
    
    // Verifica se é um triângulo válido
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        cout << "Os lados formam um triângulo válido." << endl;
        
        // Classifica o tipo de triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Tipo: Triângulo Equilátero (todos os lados iguais)" << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Tipo: Triângulo Isósceles (dois lados iguais)" << endl;
        } else {
            cout << "Tipo: Triângulo Escaleno (todos os lados diferentes)" << endl;
        }
    } else {
        cout << "Os lados NÃO formam um triângulo válido." << endl;
    }
    
    return 0;
}
```

### Desafio 2
**Enunciado:** Desenvolva um programa que simule um jogo de pedra, papel e tesoura:
- O usuário escolhe sua jogada (1-pedra, 2-papel, 3-tesoura)
- O computador escolhe aleatoriamente
- Determine o vencedor

**Solução:**
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int jogadaUsuario, jogadaComputador;
    
    // Inicializa o gerador de números aleatórios
    srand(time(0));
    
    cout << "=== JOGO PEDRA, PAPEL E TESOURA ===" << endl;
    cout << "1 - Pedra" << endl;
    cout << "2 - Papel" << endl;
    cout << "3 - Tesoura" << endl;
    cout << "Escolha sua jogada (1-3): ";
    cin >> jogadaUsuario;
    
    // Computador escolhe aleatoriamente (1 a 3)
    jogadaComputador = rand() % 3 + 1;
    
    // Mostra as jogadas
    cout << "\nSuas jogadas:" << endl;
    
    cout << "Você: ";
    switch (jogadaUsuario) {
        case 1: cout << "Pedra"; break;
        case 2: cout << "Papel"; break;
        case 3: cout << "Tesoura"; break;
        default: cout << "Jogada inválida!"; return 1;
    }
    cout << endl;
    
    cout << "Computador: ";
    switch (jogadaComputador) {
        case 1: cout << "Pedra"; break;
        case 2: cout << "Papel"; break;
        case 3: cout << "Tesoura"; break;
    }
    cout << endl;
    
    // Determina o vencedor
    if (jogadaUsuario == jogadaComputador) {
        cout << "\nResultado: EMPATE!" << endl;
    } else if ((jogadaUsuario == 1 && jogadaComputador == 3) ||
               (jogadaUsuario == 2 && jogadaComputador == 1) ||
               (jogadaUsuario == 3 && jogadaComputador == 2)) {
        cout << "\nResultado: VOCÊ GANHOU!" << endl;
    } else {
        cout << "\nResultado: COMPUTADOR GANHOU!" << endl;
    }
    
    return 0;
}
```

### Desafio 3
**Enunciado:** Faça um programa que leia um ano e determine se é bissexto. Um ano é bissexto se:
- É divisível por 4 E não é divisível por 100, OU
- É divisível por 400

**Solução:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int ano;
    
    cout << "Digite um ano: ";
    cin >> ano;
    
    bool ehBissexto;
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        ehBissexto = true;
    } else {
        ehBissexto = false;
    }
    
    if (ehBissexto) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }
    
    return 0;
}
```

### Desafio 4
**Enunciado:** Crie um programa que funcione como uma calculadora de gorjeta:
- Leia o valor da conta
- Leia a qualidade do serviço (1-Ruim, 2-Regular, 3-Bom, 4-Excelente)
- Calcule a gorjeta: Ruim=5%, Regular=10%, Bom=15%, Excelente=20%
- Exiba o valor da gorjeta e o total a pagar

**Solução:**
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valorConta, percentualGorjeta, valorGorjeta, totalPagar;
    int qualidadeServico;
    
    cout << "=== CALCULADORA DE GORJETA ===" << endl;
    cout << "Digite o valor da conta: R$ ";
    cin >> valorConta;
    
    cout << "\nQualidade do serviço:" << endl;
    cout << "1 - Ruim (5%)" << endl;
    cout << "2 - Regular (10%)" << endl;
    cout << "3 - Bom (15%)" << endl;
    cout << "4 - Excelente (20%)" << endl;
    cout << "Digite sua avaliação (1-4): ";
    cin >> qualidadeServico;
    
    switch (qualidadeServico) {
        case 1:
            percentualGorjeta = 0.05; // 5%
            cout << "\nServiço avaliado como: Ruim" << endl;
            break;
        case 2:
            percentualGorjeta = 0.10; // 10%
            cout << "\nServiço avaliado como: Regular" << endl;
            break;
        case 3:
            percentualGorjeta = 0.15; // 15%
            cout << "\nServiço avaliado como: Bom" << endl;
            break;
        case 4:
            percentualGorjeta = 0.20; // 20%
            cout << "\nServiço avaliado como: Excelente" << endl;
            break;
        default:
            cout << "Avaliação inválida!" << endl;
            return 1;
    }
    
    valorGorjeta = valorConta * percentualGorjeta;
    totalPagar = valorConta + valorGorjeta;
    
    cout << fixed << setprecision(2);
    cout << "\n=== RESUMO ===" << endl;
    cout << "Valor da conta: R$ " << valorConta << endl;
    cout << "Gorjeta (" << (percentualGorjeta * 100) << "%): R$ " << valorGorjeta << endl;
    cout << "Total a pagar: R$ " << totalPagar << endl;
    
    return 0;
}
```

## Observações Importantes

### Bibliotecas Utilizadas
- `#include <iostream>`: Para entrada e saída (cin, cout)
- `#include <string>`: Para trabalhar com strings
- `#include <iomanip>`: Para formatação de saída (setprecision, fixed)
- `#include <cstdlib>`: Para funções como rand()
- `#include <ctime>`: Para funções relacionadas ao tempo

### Dicas de Compilação
Para compilar os programas, use:
```bash
g++ -o programa programa.cpp
./programa
```

### Conceitos Importantes Demonstrados
1. **Tipos de dados**: int, double, char, string, bool
2. **Entrada/Saída**: cin, cout, getline
3. **Operadores**: aritméticos (+, -, *, /), relacionais (==, !=, <, >), lógicos (&&, ||)
4. **Estruturas condicionais**: if, if-else, if-else if-else, switch-case
5. **Formatação**: fixed, setprecision para casas decimais
6. **Validação**: verificação de divisão por zero, valores válidos
7. **Números aleatórios**: srand(), rand()

### Próximos Passos
Após dominar esses exercícios, você pode avançar para:
- Estruturas de repetição (for, while, do-while)
- Arrays e vetores
- Funções
- Estruturas (struct)
- Ponteiros
