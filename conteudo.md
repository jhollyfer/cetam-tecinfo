# 🐍 Desvendando a Lógica de Programação

## Seu Guia Completo para Algoritmos e Python!

> "Programar é como cozinhar: com uma boa receita e prática, qualquer um pode criar algo incrível!"

Bem-vindo(a) ao mundo da programação! Este guia é feito para você, seja iniciante ou alguém querendo revisar os conceitos. Vamos aprender a pensar como um computador e transformar ideias em soluções práticas, de forma simples e divertida.

---

## 📚 Módulo 1: Primeiros Passos na Lógica e nos Algoritmos

### 🧠 1.1 Introdução à Lógica de Programação

Imagine que você está ensinando um robô a fazer um sanduíche. Você precisa dar instruções claras, como "pegar o pão", "passar a manteiga" e "colocar o queijo". A lógica de programação é exatamente isso: dar instruções claras para o computador resolver problemas.

#### 🎯 O que é?

É a arte de organizar ideias em passos simples e lógicos para que o computador entenda e execute o que você quer.

#### 🔍 Por que é importante?

Sem lógica, o computador não sabe o que fazer. É como tentar cozinhar sem uma receita – você pode acabar com um bolo salgado! A lógica ajuda a criar programas que funcionam direitinho.

#### 🌟 Exemplos do dia a dia:

- 🗺️ O GPS do celular encontra o caminho mais rápido
- 💳 O aplicativo do banco verifica seu saldo
- 🎮 Jogos reagem às suas ações

### ⚙️ 1.2 O que são Algoritmos?

Um algoritmo é como uma receita de bolo: uma lista de passos que, se seguida corretamente, resolve um problema.

🍰 **Exemplo:** Para fazer um bolo, você mistura os ingredientes, coloca no forno e espera assar. Isso é um algoritmo!

#### ✅ Características de um bom algoritmo:

| Característica | O que significa?                               |
| -------------- | ---------------------------------------------- |
| **Finito**     | Tem começo e fim, não fica rodando para sempre |
| **Claro**      | As instruções são fáceis de entender           |
| **Preciso**    | Cada passo é exato, sem deixar dúvidas         |
| **Eficiente**  | Resolve o problema sem demorar muito           |

#### 📝 Como escrevemos algoritmos?

- **Pseudocódigo:** Parece uma mistura de português com programação, fácil de entender
- **Fluxogramas:** Desenhos com caixas e setas que mostram o fluxo do programa

#### 💡 Exemplo de Algoritmo - Somar dois números:

```
INÍCIO
  1. Pergunte: "Qual o primeiro número?"
  2. Guarde o número em numero1
  3. Pergunte: "Qual o segundo número?"
  4. Guarde o número em numero2
  5. Some: resultado = numero1 + numero2
  6. Mostre o resultado
FIM
```

---

## 🔧 Módulo 2: Fundamentos da Programação com Python

### 💬 2.1 Comunicação com o Usuário (Entrada e Saída de Dados)

#### 📥 Entrada de Dados - input()

A função `input()` é como perguntar algo ao usuário. Ele digita uma resposta, e você guarda para usar no programa.

⚠️ **Atenção:** Tudo que o usuário digita com `input()` vira texto, mesmo números!

```python
# Exemplo: Perguntando o nome
nome = input("Qual é o seu nome? ")
print("Oi, " + nome + "!")

# Exemplo com números (precisa converter!)
idade = input("Quantos anos você tem? ")  # Isso é texto, tipo "25"
idade_numero = int(idade)  # Converte para número
```

#### 📤 Saída de Dados - print()

A função `print()` é como o computador "falar" com você, mostrando mensagens na tela.

```python
# Exemplos simples
print("Bem-vindo ao Python!")

numero = 42
print("O número da vida é:", numero)

# Usando f-strings (jeito moderno)
nome = "Ana"
idade = 20
print(f"{nome} tem {idade} anos.")
```

### 📦 2.2 Variáveis: Guardando Informações

Pense nas variáveis como caixinhas onde você guarda coisas (números, textos, etc.) para usar depois.

```python
# Criando variáveis
nome = "João"
idade = 15
nota = 8.5
aprovado = True  # Verdadeiro ou Falso

print(f"{nome} tem {idade} anos e tirou nota {nota}.")
print(f"Aprovado? {aprovado}")
```

#### 📋 Regras para nomes de variáveis:

- ✅ Comece com letras ou \_ (ex.: `nome`, `_idade`)
- ✅ Use letras, números ou \_ (ex.: `nota1`, `total_compra`)
- ❌ Não comece com números (ex.: `1nome` não pode!)
- ❌ Não use palavras do Python (como `if`, `print`)
- ⚠️ Letras maiúsculas e minúsculas são diferentes: `Nome` ≠ `nome`

> 🎯 **Dica de ouro:** Use nomes que explicam o que a variável guarda, como `preco_total` em vez de `pt`.

### 🏷️ 2.3 Tipos de Dados: O que guardamos nas caixinhas?

| Tipo      | O que é?            | Exemplos                 |
| --------- | ------------------- | ------------------------ |
| **int**   | Números inteiros    | 5, -10, 100              |
| **float** | Números com decimal | 3.14, 0.5, -2.7          |
| **str**   | Textos              | "Olá", "Python é legal!" |
| **bool**  | Verdadeiro ou Falso | True, False              |

#### 🔍 Como saber o tipo?

Use a função `type()`:

```python
numero = 42
print(type(numero))  # <class 'int'>

texto = "Python"
print(type(texto))  # <class 'str'>

decimal = 3.14
print(type(decimal))  # <class 'float'>

verdade = True
print(type(verdade))  # <class 'bool'>
```

### 🔄 2.4 Convertendo Tipos (Type Casting)

Como o `input()` devolve texto, precisamos converter para números quando queremos fazer cálculos.

#### 🛠️ Funções de conversão:

- `int()`: Transforma em número inteiro (ex.: "5" → 5)
- `float()`: Transforma em número decimal (ex.: "5.5" → 5.5)
- `str()`: Transforma em texto (ex.: 5 → "5")
- `bool()`: Transforma em Verdadeiro/Falso

```python
# Exemplo: Calculando o total de uma compra
quantidade = int(input("Quantos itens? "))  # Converte texto para inteiro
preco = float(input("Preço por item? "))   # Converte texto para decimal
total = quantidade * preco
print(f"Total: R${total:.2f}")  # Mostra com 2 casas decimais
```

**Saída:**

```
Quantos itens? 3
Preço por item? 10.50
Total: R$31.50
```

---

## 🔢 Módulo 3: Operadores – Dando Ação ao Código

### ➕ 3.1 Operadores Matemáticos

Esses operadores são como as operações da calculadora!

| Operador | O que faz?            | Exemplo  | Resultado | Com texto?                   |
| -------- | --------------------- | -------- | --------- | ---------------------------- |
| **+**    | Soma                  | 5 + 3    | 8         | Junta textos: "Oi" + "!"     |
| **-**    | Subtração             | 7 - 2    | 5         | -                            |
| **\***   | Multiplicação         | 4 \* 2   | 8         | Repete: "Oi" \* 3 → "OiOiOi" |
| **/**    | Divisão (com decimal) | 10 / 2   | 5.0       | -                            |
| **//**   | Divisão inteira       | 10 // 3  | 3         | -                            |
| **%**    | Resto da divisão      | 10 % 3   | 1         | -                            |
| **\*\*** | Potência              | 2 \*\* 3 | 8         | -                            |

```python
# Exemplo: Verificando se um número é par
numero = 6
eh_par = numero % 2 == 0  # Se o resto for 0, é par
print(f"{numero} é par? {eh_par}")
```

**Saída:**

```
6 é par? True
```

### ⚖️ 3.2 Operadores de Comparação

Comparam valores e devolvem True ou False.

| Operador | O que faz?     | Exemplo | Resultado |
| -------- | -------------- | ------- | --------- |
| **==**   | Igual a        | 5 == 5  | True      |
| **!=**   | Diferente de   | 5 != 3  | True      |
| **<**    | Menor que      | 3 < 5   | True      |
| **<=**   | Menor ou igual | 5 <= 5  | True      |
| **>**    | Maior que      | 7 > 2   | True      |
| **>=**   | Maior ou igual | 4 >= 5  | False     |

⚠️ **Cuidado:** `=` é para guardar valores, `==` é para comparar!

### 🧩 3.3 Operadores Lógicos

Juntam condições para decisões mais complexas.

| Operador | O que faz?                                         | Exemplo         | Resultado |
| -------- | -------------------------------------------------- | --------------- | --------- |
| **and**  | Verdadeiro se TODAS condições são verdadeiras      | 5 > 3 and 2 < 4 | True      |
| **or**   | Verdadeiro se PELO MENOS UMA condição é verdadeira | 5 > 7 or 2 < 4  | True      |
| **not**  | Inverte o resultado                                | not True        | False     |

```python
# Exemplo: Pode dirigir?
idade = 16
tem_carteira = False
pode_dirigir = idade >= 18 and tem_carteira
print(f"Pode dirigir? {pode_dirigir}")
```

**Saída:**

```
Pode dirigir? False
```

### 📝 3.4 Operadores de Atribuição

Ajudam a mudar valores de variáveis de forma rápida.

| Operador | O que faz?          | Exemplo | Equivale a |
| -------- | ------------------- | ------- | ---------- |
| **=**    | Guarda um valor     | x = 10  | x = 10     |
| **+=**   | Soma e guarda       | x += 5  | x = x + 5  |
| **-=**   | Subtrai e guarda    | x -= 2  | x = x - 2  |
| **\*=**  | Multiplica e guarda | x \*= 3 | x = x \* 3 |
| **/=**   | Divide e guarda     | x /= 2  | x = x / 2  |

```python
# Exemplo: Contando pontos
pontos = 0
pontos += 10  # Ganhou 10 pontos
pontos *= 2   # Bônus: dobrou os pontos
print(f"Pontos: {pontos}")
```

**Saída:**

```
Pontos: 20
```

---

## 🔀 Módulo 4: Controle de Fluxo – Tomada de Decisão

### 🤔 4.1 O que são Estruturas de Seleção?

Pense nas estruturas de seleção como um cruzamento na estrada. Dependendo da condição (ex.: "está chovendo?"), você escolhe um caminho diferente (ex.: "pegar o guarda-chuva" ou "sair sem ele").

#### 🎯 Para que servem?

- Decidir o que o programa faz com base em condições
- Criar caminhos diferentes no código, como em jogos ou formulários

### 🔵 4.2.1 Seleção Simples (if)

"Se algo for verdade, faça isso!"

```python
if condicao:
    # Faça algo se a condição for True
    # Use 4 espaços para indentar!
```

#### 💡 Exemplo: Número Positivo

```python
numero = float(input("Digite um número: "))
if numero > 0:
    print("Esse número é positivo!")
print("Fim")
```

**Saída:**

```
Digite um número: 7
Esse número é positivo!
Fim
```

### 🟡 4.2.2 Seleção Composta (if-else)

"Se for verdade, faça isso; senão, faça outra coisa!"

```python
if condicao:
    # Faça algo se True
else:
    # Faça algo se False
```

#### 💡 Exemplo: Verificar Idade

```python
idade = int(input("Digite sua idade: "))
if idade >= 18:
    print("Você é maior de idade!")
else:
    print("Você é menor de idade.")
```

**Saída:**

```
Digite sua idade: 16
Você é menor de idade.
```

### 🟢 4.2.3 Seleção Aninhada (if-elif-else)

Para escolher entre várias opções!

```python
if condicao1:
    # Faça algo
elif condicao2:
    # Faça outra coisa
else:
    # Faça se nenhuma condição for verdadeira
```

#### 💡 Exemplo: Classificação de Notas

```python
nota = float(input("Digite sua nota (0 a 100): "))
if nota >= 90:
    print("Parabéns! Você tirou A!")
elif nota >= 70:
    print("Boa! Você tirou B.")
elif nota >= 50:
    print("Ok, você tirou C.")
else:
    print("Estude mais! Você tirou F.")
```

**Saída:**

```
Digite sua nota (0 a 100): 85
Boa! Você tirou B.
```

## 🟣 4.2.4 Seleção Múltipla (switch com match-case)

Em algumas linguagens, como C ou Java, existe a estrutura `switch`, que escolhe uma ação entre várias opções. Python não tem `switch`, mas usa o `match-case` (a partir do Python 3.10) para fazer a mesma coisa de forma simples e clara.

### 📜 Como funciona?

O `match-case` compara um valor com várias opções (chamadas "casos") e executa o código do caso que combina.

```python
match valor:
    case opcao1:
        # Faça algo
    case opcao2:
        # Faça outra coisa
    case _:  # Caso padrão, como "else"
        # Faça se nenhuma opção combinar
```

### 💡 Exemplo: Menu de Restaurante

Imagine que você está em um restaurante e escolhe um prato pelo número. O programa usa `match-case` para mostrar o prato escolhido.

```python
prato = input("Escolha um prato (1 a 4): ")
match prato:
    case "1":
        print("Você escolheu Pizza!")
    case "2":
        print("Você escolheu Hamburguer!")
    case "3":
        print("Você escolheu Salada!")
    case "4":
        print("Você escolheu Sorvete!")
    case _:
        print("Opção inválida! Escolha de 1 a 4.")
```

**Saída:**

```
Escolha um prato (1 a 4): 2
Você escolheu Hamburguer!
```

### 💡 Exemplo: Calculadora Simples

```python
operacao = input("Escolha a operação (+, -, *, /): ")
numero1 = float(input("Digite o primeiro número: "))
numero2 = float(input("Digite o segundo número: "))

match operacao:
    case "+":
        print(f"Resultado: {numero1 + numero2}")
    case "-":
        print(f"Resultado: {numero1 - numero2}")
    case "*":
        print(f"Resultado: {numero1 * numero2}")
    case "/":
        if numero2 != 0:
            print(f"Resultado: {numero1 / numero2}")
        else:
            print("Erro: Não pode dividir por zero!")
    case _:
        print("Operação inválida!")
```

**Saída:**

```
Escolha a operação (+, -, *, /): +
Digite o primeiro número: 5
Digite o segundo número: 3
Resultado: 8.0
```

### 🛠️ Dicas para usar match-case:

- Use para menus ou escolhas claras, como números ou textos específicos
- Sempre inclua o caso padrão (`_`) para lidar com entradas erradas
- Combine com `if` dentro dos casos para condições extras, como no exemplo da divisão

---

## 🔄 Módulo 5: Estruturas de Repetição

Às vezes, queremos que o computador repita uma tarefa várias vezes, como contar até 10 ou perguntar algo até acertar. É aí que entram as estruturas de repetição! Python tem duas principais: `while` e `for`. Também podemos imitar um `do/while` (comum em outras linguagens) de um jeito simples.

## 🔁 5.1 Laço while

### 📜 O que é?

O `while` repete um bloco de código enquanto uma condição for verdadeira. É como dizer: "Enquanto eu estiver com fome, continue comendo!"

### 📜 Como usar?

```python
while condicao:
    # Faça algo enquanto a condição for True
```

### 💡 Exemplo: Contar até 5

```python
contador = 1
while contador <= 5:
    print(f"Contagem: {contador}")
    contador += 1  # Aumenta o contador para evitar loop infinito!
print("Acabou!")
```

**Saída:**

```
Contagem: 1
Contagem: 2
Contagem: 3
Contagem: 4
Contagem: 5
Acabou!
```

### 💡 Exemplo: Tentar Senha

```python
senha_correta = "1234"
tentativa = ""
while tentativa != senha_correta:
    tentativa = input("Digite a senha: ")
    if tentativa == senha_correta:
        print("Acesso liberado!")
    else:
        print("Senha errada, tente novamente.")
```

**Saída:**

```
Digite a senha: abcd
Senha errada, tente novamente.
Digite a senha: 1234
Acesso liberado!
```

### ⚠️ Cuidado com loops infinitos!

Se você esquecer de mudar a condição (ex.: não aumentar o contador), o programa pode ficar repetindo para sempre. Exemplo errado:

```python
contador = 1
while contador <= 5:
    print("Oi!")  # Vai repetir "Oi!" para sempre!
```

### 🛠️ Dicas:

- Sempre atualize a condição (ex.: `contador += 1`)
- Use `try-except` para evitar erros com entradas do usuário
- Se precisar de um loop que nunca para (de propósito), use `while True` e saia com `break`

## 🔁 5.2 Laço for

### 📜 O que é?

O `for` é usado quando você sabe quantas vezes quer repetir algo ou quer percorrer uma lista. É como dizer: "Para cada item na minha lista de compras, pegue um!"

### 📜 Como usar?

```python
for variavel in sequencia:
    # Faça algo com cada item
```

A `sequencia` pode ser uma lista ou criada com `range(inicio, fim, passo)`.

### 💡 Exemplo: Contar de 1 a 5

```python
for numero in range(1, 6):  # De 1 até 5
    print(f"Contagem: {numero}")
print("Acabou!")
```

**Saída:**

```
Contagem: 1
Contagem: 2
Contagem: 3
Contagem: 4
Contagem: 5
Acabou!
```

### 💡 Exemplo: Somar Números de uma Lista

```python
numeros = [1, 2, 3, 4, 5]
soma = 0
for num in numeros:
    soma += num
print(f"Soma total: {soma}")
```

**Saída:**

```
Soma total: 15
```

### 💡 Exemplo: Usando range com Passo

```python
# Contar de 2 em 2 até 10
for num in range(2, 11, 2):
    print(num)
```

**Saída:**

```
2
4
6
8
10
```

### 🛠️ Dicas:

- Use `range(inicio, fim)` para números (o fim não é incluído!)
- Para listas, use o `for` direto (ex.: `for item in lista`)
- Use `enumerate` se precisar do índice:

```python
frutas = ["maçã", "banana", "laranja"]
for i, fruta in enumerate(frutas, 1):
    print(f"{i}. {fruta}")
```

**Saída:**

```
1. maçã
2. banana
3. laranja
```

## 🔁 5.3 Emulando do/while

### 📜 O que é?

Em algumas linguagens, o `do/while` faz algo pelo menos uma vez antes de checar a condição. Python não tem `do/while`, mas podemos imitar com `while True` e `break`.

### 📜 Como fazer?

```python
while True:
    # Faça algo
    if not condicao:
        break  # Sai do loop
```

### 💡 Exemplo: Pedir um Número Positivo

```python
while True:
    numero = int(input("Digite um número positivo: "))
    if numero > 0:
        print(f"Ótimo! Você digitou {numero}.")
        break
    print("Por favor, digite um número maior que 0!")
```

**Saída:**

```
Digite um número positivo: -3
Por favor, digite um número maior que 0!
Digite um número positivo: 5
Ótimo! Você digitou 5.
```

### 🛠️ Dicas:

- Use só quando precisar garantir que o código rode pelo menos uma vez
- Sempre coloque um `break` para evitar loops infinitos
- Valide entradas com `try-except` para evitar erros

---

## 🔀 Módulo 6: Seleção Avançada com match-case

O `match-case` é a forma moderna do Python para lidar com várias opções, como um menu de escolhas. Ele substitui o `switch` de outras linguagens e é super fácil de entender.

### 🔵 6.1 Como funciona?

Você dá um valor ao `match`, e ele compara com várias opções (casos). Quando encontra um caso que combina, executa o código daquele caso.

### 📜 Sintaxe:

```python
match valor:
    case opcao1:
        # Faça algo
    case opcao2:
        # Faça outra coisa
    case _:  # Caso padrão
        # Faça se nada combinar
```

### 💡 Exemplo: Escolher um Animal

```python
animal = input("Digite um animal (cachorro, gato, pássaro): ")
match animal.lower():
    case "cachorro":
        print("Au au! Você escolheu um cachorro!")
    case "gato":
        print("Miau! Você escolheu um gato!")
    case "pássaro":
        print("Piu piu! Você escolheu um pássaro!")
    case _:
        print("Animal desconhecido!")
```

**Saída:**

```
Digite um animal (cachorro, gato, pássaro): gato
Miau! Você escolheu um gato!
```

### 💡 Exemplo: Calculadora de Áreas Geométricas

```python
import math

def calcula_area_circulo(raio):
    return math.pi * raio ** 2

def calcula_area_triangulo(base, altura):
    return (base * altura) / 2

def calcula_area_retangulo(largura, comprimento):
    return largura * comprimento

while True:
    print("\n=== Calculadora de Áreas ===")
    print("1. Círculo")
    print("2. Triângulo")
    print("3. Retângulo")
    print("4. Sair")
    opcao = input("Escolha uma opção (1-4): ")

    match opcao:
        case "1":
            raio = float(input("Digite o raio: "))
            if raio >= 0:
                area = calcula_area_circulo(raio)
                print(f"Área do círculo: {area:.2f}")
            else:
                print("Raio não pode ser negativo!")
        case "2":
            base = float(input("Digite a base: "))
            altura = float(input("Digite a altura: "))
            if base >= 0 and altura >= 0:
                area = calcula_area_triangulo(base, altura)
                print(f"Área do triângulo: {area:.2f}")
            else:
                print("Base e altura não podem ser negativos!")
        case "3":
            largura = float(input("Digite a largura: "))
            comprimento = float(input("Digite o comprimento: "))
            if largura >= 0 and comprimento >= 0:
                area = calcula_area_retangulo(largura, comprimento)
                print(f"Área do retângulo: {area:.2f}")
            else:
                print("Largura e comprimento não podem ser negativos!")
        case "4":
            print("Tchau!")
            break
        case _:
            print("Opção inválida! Escolha de 1 a 4.")
```

**Saída:**

```
=== Calculadora de Áreas ===
1. Círculo
2. Triângulo
3. Retângulo
4. Sair
Escolha uma opção (1-4): 1
Digite o raio: 5
Área do círculo: 78.54
...
Escolha uma opção (1-4): 4
Tchau!
```

### 🛠️ Dicas:

- Use `match-case` para menus ou escolhas com muitas opções
- O caso `_` é como o "senão" – use para erros ou opções inválidas
- Combine com validações (como `if`) para entradas seguras

---

## 🛠️ Módulo 7: Funções – Organizando o Código

Funções são como receitas prontas que você pode usar várias vezes. Em vez de repetir o mesmo código, você dá um nome a ele e chama quando precisar.

### 🔧 7.1 Criando Funções

#### 📜 Como fazer?

```python
def nome_da_funcao(parametros):
    # Faça algo
    return resultado  # Opcional
```

#### 💡 Exemplo: Dizer Olá

```python
def dizer_ola():
    print("Olá, mundo!")

dizer_ola()
dizer_ola()
```

**Saída:**

```
Olá, mundo!
Olá, mundo!
```

### 🔧 7.2 Usando Parâmetros

Parâmetros são como "ingredientes" que você passa para a função.

#### 💡 Exemplo: Saudação Personalizada

```python
def saudar(nome):
    print(f"Olá, {nome}!")

saudar("Ana")
saudar("João")
```

**Saída:**

```
Olá, Ana!
Olá, João!
```

#### 💡 Exemplo: Soma de Dois Números

```python
def somar(a, b):
    resultado = a + b
    return resultado

total = somar(3, 5)
print(f"Soma: {total}")
```

**Saída:**

```
Soma: 8
```

### 🔧 7.3 Parâmetros com Valores Padrão

Você pode definir valores padrão para os parâmetros, caso o usuário não passe nada.

#### 💡 Exemplo: Cumprimento com Horário

```python
def cumprimentar(nome, mensagem="Bom dia"):
    print(f"{mensagem}, {nome}!")

cumprimentar("Ana")  # Usa o padrão "Bom dia"
cumprimentar("João", "Boa noite")
```

**Saída:**

```
Bom dia, Ana!
Boa noite, João!
```

### 🔧 7.4 Recursividade: Funções que Chamam a Si Mesmas

Às vezes, uma função pode chamar ela mesma para resolver um problema, como calcular um fatorial (ex.: 5! = 5 × 4 × 3 × 2 × 1).

#### 💡 Exemplo: Fatorial

```python
def fatorial(n):
    if n == 0 or n == 1:  # Condição de parada
        return 1
    return n * fatorial(n - 1)  # Chama a si mesma

print(f"Fatorial de 5 = {fatorial(5)}")
```

**Saída:**

```
Fatorial de 5 = 120
```

### 🛠️ Dicas:

- Use nomes claros, como `calcular_area` em vez de `ca`
- Sempre coloque uma condição de parada em funções recursivas para não travar o programa
- Use `return` para devolver resultados úteis
- Documente com docstrings:

```python
def somar(a, b):
    """Soma dois números e retorna o resultado."""
    return a + b
```

---

## ⚡ Módulo 8: Precedência de Operadores

Quando você mistura várias operações, o Python decide a ordem de execução. É como na matemática: multiplicação vem antes da soma.

### 📜 Ordem de prioridade:

1. **Parênteses `()`** – Sempre primeiro!
2. **Potência `**`\*\*
3. **Multiplicação, Divisão, Módulo `*`, `/`, `//`, `%`**
4. **Soma, Subtração `+`, `-`**
5. **Comparações `<`, `<=`, `>`, `>=`, `==`, `!=`**
6. **Lógico `not`**
7. **Lógico `and`**
8. **Lógico `or`**

### 💡 Exemplo:

```python
resultado = 2 + 3 * 4  # Primeiro 3*4=12, depois 2+12=14
print(resultado)

resultado = (2 + 3) * 4  # Primeiro (2+3)=5, depois 5*4=20
print(resultado)
```

**Saída:**

```
14
20
```

### 💡 Exemplo com Lógica:

```python
idade = 25
tem_carteira = False
pode_dirigir = idade >= 18 and not tem_carteira
print(f"Pode dirigir? {pode_dirigir}")
```

**Saída:**

```
Pode dirigir? True
```

### 🛠️ Dica:

Use parênteses para deixar claro o que você quer calcular primeiro!

---

## 📚 Módulo 9: Exercícios Resolvidos

### 9.1 Estruturas de Repetição

#### Imprimir 4000 Saudações

```python
cont = 1
while cont <= 4000:
    print("Olá!")
    cont += 1
print("FIM")
```

**Saída (parcial):**

```
Olá!
Olá!
...
FIM
```

#### Média de N Números

```python
n = int(input("Quantos números você vai digitar? "))
soma = 0
for i in range(n):
    numero = float(input(f"Digite o {i+1}º número: "))
    soma += numero
media = soma / n
print(f"Média: {media:.2f}")
```

**Saída:**

```
Quantos números você vai digitar? 3
Digite o 1º número: 5
Digite o 2º número: 7
Digite o 3º número: 9
Média: 7.00
```

#### Contar Números Pares

```python
pares = 0
for i in range(5):
    numero = int(input("Digite um número: "))
    if numero % 2 == 0:
        pares += 1
print(f"Você digitou {pares} números pares.")
```

**Saída:**

```
Digite um número: 4
Digite um número: 7
Digite um número: 2
Digite um número: 9
Digite um número: 6
Você digitou 3 números pares.
```

### 9.2 Funções

#### Desenhar Linha

```python
def desenhar_linha(tamanho):
    """Desenha uma linha com '_' do tamanho especificado."""
    print("_" * tamanho)

desenhar_linha(5)
```

**Saída:**

```
_____
```

#### Soma de Lista

```python
def somar_lista(numeros):
    """Soma todos os números de uma lista."""
    soma = 0
    for num in numeros:
        soma += num
    return soma

print(somar_lista([1, 2, 3, 4]))
```

**Saída:**

```
10
```

#### Fatorial Recursivo

```python
def fatorial(n):
    """Calcula o fatorial de n."""
    if n == 0 or n == 1:
        return 1
    return n * fatorial(n - 1)

print(fatorial(4))
```

**Saída:**

```
24
```

> **"Programar é como montar um quebra-cabeça: cada peça que você aprende te deixa mais perto de criar algo incrível!"**
