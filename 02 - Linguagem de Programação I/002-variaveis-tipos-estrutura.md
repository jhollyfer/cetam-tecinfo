# Variáveis, Tipos de Dados e Estrutura de Código em C++

## 🎯 Objetivos da Aula

Ao final desta aula, você será capaz de:

- Declarar variáveis corretamente em C++
- Entender e usar os principais tipos de dados
- Estruturar seu código de forma organizada
- Criar seus primeiros programas funcionais

---

## 📋 Estrutura Básica de um Programa C++

Todo programa C++ segue esta estrutura fundamental:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Seu código aqui
    return 0;
}
```

**Explicação linha por linha:**

- `#include <iostream>`: Inclui biblioteca para entrada/saída (cin, cout)
- `using namespace std;`: Permite usar cout sem escrever std::cout
- `int main()`: Função principal - todo programa C++ começa aqui
- `return 0;`: Indica que o programa terminou com sucesso

---

## 🗂️ Tipos de Dados Fundamentais

### 1. **Números Inteiros**

```cpp
int idade = 25;              // Número inteiro padrão
short ano = 2024;            // Inteiro pequeno (-32.768 a 32.767)
long populacao = 215000000;  // Inteiro grande
```

### 2. **Números Decimais**

```cpp
float altura = 1.75f;        // Decimal com 6-7 dígitos de precisão
double salario = 5500.50;    // Decimal com 15-16 dígitos (mais preciso)
```

### 3. **Caracteres**

```cpp
char inicial = 'J';          // Um único caractere
char nota = 'A';             // Sempre entre aspas simples
```

### 4. **Texto (String)**

```cpp
string nome = "João Silva";  // Texto completo
string cidade = "São Paulo"; // Sempre entre aspas duplas
```

### 5. **Valores Lógicos**

```cpp
bool aprovado = true;        // Verdadeiro ou falso
bool maior_idade = false;    // Apenas true ou false
```

---

## 📝 Declaração de Variáveis

### **Sintaxe Básica**

```
tipo_da_variavel nome_da_variavel = valor;
```

### **Exemplos Práticos**

```cpp
// Declaração com valor inicial
int pontos = 100;
double preco = 29.99;
string produto = "Notebook";

// Declaração sem valor inicial
int contador;
float media;
bool status;

// Múltiplas variáveis do mesmo tipo
int x = 10, y = 20, z = 30;
```

### **Regras para Nomes de Variáveis**

✅ **Pode usar:**

- Letras (a-z, A-Z)
- Números (0-9) - mas não no início
- Underscore (\_)

❌ **Não pode usar:**

- Espaços
- Caracteres especiais (@, #, $, %, etc.)
- Palavras reservadas (int, float, if, etc.)

```cpp
// ✅ Nomes válidos
int idade;
string nome_completo;
float salario2024;
bool _ativo;

// ❌ Nomes inválidos
int 2024ano;        // Começa com número
float salário;      // Tem acento
string nome do pai; // Tem espaços
```

---

## 🔄 Modificação de Variáveis

```cpp
#include <iostream>
using namespace std;

int main() {
    int pontos = 50;
    cout << "Pontos iniciais: " << pontos << endl;

    pontos = 75;  // Mudando o valor
    cout << "Novos pontos: " << pontos << endl;

    pontos = pontos + 25;  // Usando a própria variável
    cout << "Pontos finais: " << pontos << endl;

    return 0;
}
```

---

## 🧮 Operações Básicas

### **Operadores Aritméticos**

```cpp
int a = 10, b = 3;

cout << "Soma: " << a + b << endl;        // 13
cout << "Subtração: " << a - b << endl;   // 7
cout << "Multiplicação: " << a * b << endl; // 30
cout << "Divisão: " << a / b << endl;     // 3 (divisão inteira)
cout << "Resto: " << a % b << endl;       // 1
```

### **Operadores de Comparação**

```cpp
int x = 5, y = 3;

cout << (x > y) << endl;   // 1 (true)
cout << (x < y) << endl;   // 0 (false)
cout << (x == y) << endl;  // 0 (false)
cout << (x != y) << endl;  // 1 (true)
```

---

## 💬 Entrada e Saída de Dados

### **Saída (cout)**

```cpp
string nome = "Maria";
int idade = 30;

cout << "Nome: " << nome << endl;
cout << "Idade: " << idade << " anos" << endl;
cout << "Olá, " << nome << "! Você tem " << idade << " anos." << endl;
```

### **Entrada (cin)**

```cpp
string nome;
int idade;

cout << "Digite seu nome: ";
cin >> nome;

cout << "Digite sua idade: ";
cin >> idade;

cout << "Olá, " << nome << "! Você tem " << idade << " anos." << endl;
```

---

## 🎯 Exemplo Prático Completo

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    string nome_aluno;
    float nota1, nota2, nota3;
    float media;
    bool aprovado;

    // Entrada de dados
    cout << "=== SISTEMA DE NOTAS ===" << endl;
    cout << "Nome do aluno: ";
    cin >> nome_aluno;

    cout << "Primeira nota: ";
    cin >> nota1;

    cout << "Segunda nota: ";
    cin >> nota2;

    cout << "Terceira nota: ";
    cin >> nota3;

    // Processamento
    media = (nota1 + nota2 + nota3) / 3;
    aprovado = media >= 7.0;

    // Saída de dados
    cout << "\n=== RESULTADO ===" << endl;
    cout << "Aluno: " << nome_aluno << endl;
    cout << "Média: " << media << endl;
    cout << "Aprovado: " << (aprovado ? "SIM" : "NÃO") << endl;

    return 0;
}
```

---

## 🎨 Boas Práticas

### **1. Nomes Descritivos**

```cpp
// ❌ Ruim
int x = 25;
float y = 1.75;

// ✅ Bom
int idade = 25;
float altura = 1.75;
```

### **2. Inicialização de Variáveis**

```cpp
// ✅ Sempre inicialize
int contador = 0;
double saldo = 0.0;
bool ativo = false;
```

### **3. Comentários Úteis**

```cpp
float salario_bruto = 5000.0;  // Salário antes dos descontos
float desconto = 0.15;         // 15% de desconto
float salario_liquido = salario_bruto * (1 - desconto);  // Cálculo final
```

---

## 🚀 Exercícios Práticos

### **Exercício 1: Calculadora Simples**

Crie um programa que:

- Peça dois números ao usuário
- Calcule e mostre soma, subtração, multiplicação e divisão

### **Exercício 2: Conversor de Temperatura**

Crie um programa que:

- Peça uma temperatura em Celsius
- Converta para Fahrenheit (F = C × 9/5 + 32)
- Mostre o resultado

### **Exercício 3: Dados Pessoais**

Crie um programa que:

- Peça nome, idade e cidade
- Calcule o ano de nascimento
- Mostre todas as informações organizadas

---

## 🔧 Dicas Importantes

**1. Sempre teste seu código:** Compile e execute frequentemente para detectar erros cedo.

**2. Use nomes claros:** Prefira `idade_usuario` a `x` ou `valor1`.

**3. Organize seu código:** Use espaços e quebras de linha para melhor legibilidade.

**4. Inicialize variáveis:** Sempre dê um valor inicial para evitar comportamentos inesperados.

**5. Escolha o tipo certo:** Use `int` para números inteiros, `double` para decimais precisos, `string` para textos.

---

## 📚 Resumo da Aula

Você aprendeu:

- ✅ Estrutura básica de um programa C++
- ✅ Principais tipos de dados (int, float, double, char, string, bool)
- ✅ Como declarar e usar variáveis
- ✅ Operações básicas com variáveis
- ✅ Entrada e saída de dados
- ✅ Boas práticas de programação

**Próximos passos:** Pratique os exercícios propostos e experimente criar seus próprios programas simples. A programação se aprende praticando!

---

_"A jornada de mil quilômetros começa com um único passo. Você acabou de dar seu primeiro passo na programação C++!"_
