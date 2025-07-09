# 🐍 Desvendando a Lógica de Programação

## Seu Guia Completo para Algoritmos e Python!

> _"Aprender a programar não é apenas sobre escrever código, mas sim sobre desenvolver um raciocínio lógico para resolver problemas."_

Bem-vindo(a) ao mundo da programação! Prepare-se para pensar como um computador e transformar ideias em soluções práticas.

---

## 📚 Módulo 1: Primeiros Passos na Lógica e nos Algoritmos

### 🧠 1.1 Introdução à Lógica de Programação

Imagine a lógica de programação como a **"receita"** para o seu computador executar tarefas. É a forma de organizar o pensamento para que uma máquina, que não tem inteligência própria, consiga entender e seguir instruções passo a passo.

#### 🎯 O que é?

É a capacidade de organizar pensamentos e instruções de forma **sequencial, clara e precisa** para resolver um problema.

#### 🔍 Por que é importante?

Sem lógica, seu programa seria como um carro sem volante. É ela que nos permite criar soluções eficientes e sem erros, evitando que o computador se "perca".

#### 🌟 Aplicações

A lógica de programação está em tudo!

- 🗺️ GPS calculando a melhor rota
- 💳 Aplicativo de banco processando transações
- 🎮 Jogos funcionando perfeitamente

### ⚙️ 1.2 O que são Algoritmos?

Um algoritmo é o **coração da lógica de programação**. É uma sequência finita de passos bem definidos e não ambíguos que resolvem um problema específico.

> 🍰 **Pense em qualquer receita de bolo: é um algoritmo para fazer um bolo!**

#### ✅ Características de um bom algoritmo:

| Característica          | Descrição                            |
| ----------------------- | ------------------------------------ |
| **Finito**              | Sempre tem um começo e um fim        |
| **Claro e Não Ambíguo** | Instruções super específicas         |
| **Preciso**             | Cada passo bem definido              |
| **Eficaz**              | Resolve o problema em tempo razoável |

#### 📝 Como representamos algoritmos?

**Pseudocódigo**: Uma linguagem que se parece com programação, mas é mais próxima da linguagem humana.

**Fluxogramas**: Diagramas gráficos com símbolos padronizados.

#### 💡 Exemplo de Algoritmo - Somar dois números:

```
INÍCIO
  LER numero1          // Peça o primeiro número ao usuário
  LER numero2          // Peça o segundo número ao usuário
  CALCULAR soma = numero1 + numero2 // Some os dois números
  ESCREVER soma        // Mostre o resultado da soma
FIM
```

---

## 🔧 Módulo 2: Fundamentos da Programação com Python

### 💬 2.1 Comunicação Literal (Entrada e Saída de Dados)

#### 📥 Entrada de Dados - `input()`

A função `input()` é como uma "caixa de diálogo" que aparece para o usuário preencher.

> ⚠️ **Detalhe Crucial**: `input()` sempre retorna texto (string), mesmo que você digite um número!

```python
# Exemplo prático: Pedindo informações ao usuário
nome = input("Qual é o seu nome? ")
print("Olá, " + nome + "!")

idade_digitada = input("Quantos anos você tem? ") # É sempre texto!
```

#### 📤 Saída de Dados - `print()`

A função `print()` é a "voz" do seu programa.

```python
# Exemplos práticos
print("Bem-vindo ao curso de Python!")

numero_sorte = 7
print(numero_sorte)

# Combinando com f-strings (forma moderna!)
preco_unitario = 15.99
quantidade = 3
print(f"Você comprou {quantidade} itens no valor de R${preco_unitario} cada.")
```

### 📦 2.2 Variáveis: Guardando Informações

Imagine variáveis como **"caixinhas"** na memória do computador. Cada caixinha tem um nome e guarda um valor.

```python
# Criando e usando variáveis
nome_aluno = "Mariana Silva"
nota1 = 8.5
alunos_presentes = 25
temperatura_alta = True

print(f"A aluna {nome_aluno} tirou a primeira nota: {nota1}")
```

#### 📋 Regras para nomes de variáveis:

- ✅ Devem começar com letra ou sublinhado `_`
- ✅ Podem conter letras, números e sublinhados
- ❌ Não podem começar com números
- ❌ Não podem ser palavras reservadas (if, for, print, etc.)
- ⚠️ Python é Case-sensitive: `nome` ≠ `Nome`

#### 🎯 Boas práticas:

- Use nomes descritivos: `preco_produto` > `pp`
- Use snake_case: `minha_variavel_legal`

### 🏷️ 2.3 Tipos de Dados: A Natureza da Informação

| Tipo      | Descrição        | Exemplos                   |
| --------- | ---------------- | -------------------------- |
| **int**   | Números inteiros | `5`, `-10`, `0`, `1000`    |
| **float** | Números decimais | `3.14`, `99.9`, `-0.5`     |
| **str**   | Textos (strings) | `"Olá mundo"`, `'Python!'` |
| **bool**  | Verdadeiro/Falso | `True`, `False`            |

#### 🔍 Verificando o tipo com `type()`:

```python
valor_inteiro = 100
print(type(valor_inteiro))  # <class 'int'>

nome_completo = "Alice Wonderland"
print(type(nome_completo))  # <class 'str'>

preco = 49.99
print(type(preco))  # <class 'float'>

fez_sol = True
print(type(fez_sol))  # <class 'bool'>
```

### 🔄 2.4 Conversão de Tipos (Type Casting)

Como `input()` sempre retorna string, precisamos converter para fazer cálculos!

#### 🛠️ Funções de conversão:

- `int(valor)` → Converte para inteiro
- `float(valor)` → Converte para decimal
- `str(valor)` → Converte para texto
- `bool(valor)` → Converte para booleano

```python
# Exemplo prático
quantidade_str = input("Quantos produtos você quer? ")  # "5"
quantidade_int = int(quantidade_str)  # 5

preco_str = input("Qual o preço unitário? ")  # "12.50"
preco_float = float(preco_str)  # 12.50

total = quantidade_int * preco_float
print(f"O total da sua compra é: R${total:.2f}")
```

---

## 🔢 Módulo 3: Operadores – As Ações do Seu Código

### ➕ 3.1 Operadores Matemáticos (Aritméticos)

| Operador | Descrição        | Exemplo   | Resultado | Comportamento com Strings           |
| -------- | ---------------- | --------- | --------- | ----------------------------------- |
| `+`      | Adição           | `5 + 3`   | `8`       | Concatena: `"Olá" + " mundo"`       |
| `-`      | Subtração        | `7 - 2`   | `5`       | -                                   |
| `*`      | Multiplicação    | `2 * 4`   | `8`       | Repete: `3 * "ABC"` → `"ABCABCABC"` |
| `/`      | Divisão          | `10 / 2`  | `5.0`     | -                                   |
| `//`     | Divisão inteira  | `10 // 3` | `3`       | -                                   |
| `%`      | Resto da divisão | `10 % 3`  | `1`       | -                                   |
| `**`     | Potenciação      | `4 ** 2`  | `16`      | -                                   |

```python
# Exemplo: Verificando se um número é par
numero = 7
eh_par = (numero % 2 == 0)  # False, pois 7 % 2 = 1
print(f"O número {numero} é par? {eh_par}")
```

### ⚖️ 3.2 Operadores de Comparação (Relacionais)

| Operador | Descrição      | Exemplo   | Resultado |
| -------- | -------------- | --------- | --------- |
| `==`     | Igual a        | `5 == 5`  | `True`    |
| `!=`     | Diferente de   | `5 != 12` | `True`    |
| `<`      | Menor que      | `5 < 10`  | `True`    |
| `<=`     | Menor ou igual | `10 <= 5` | `False`   |
| `>`      | Maior que      | `10 > 5`  | `True`    |
| `>=`     | Maior ou igual | `10 >= 8` | `True`    |

> ⚠️ **Atenção**: Não confunda `=` (atribuição) com `==` (comparação)!

### 🧩 3.3 Operadores Lógicos

| Operador | Descrição | Regra                                                |
| -------- | --------- | ---------------------------------------------------- |
| `not`    | Negação   | Inverte o valor booleano                             |
| `and`    | Conjunção | Verdadeiro se TODAS as condições forem verdadeiras   |
| `or`     | Disjunção | Verdadeiro se PELO MENOS UMA condição for verdadeira |

```python
# Exemplo: Condições para entrar em um clube
idade_pessoa = 20
tem_convite = True
pode_entrar = (idade_pessoa >= 18) and tem_convite  # True
```

### 📝 3.4 Operadores de Atribuição

| Operador | Descrição                    | Exemplo  | Equivale a  |
| -------- | ---------------------------- | -------- | ----------- |
| `=`      | Atribuição simples           | `x = 10` | `x = 10`    |
| `+=`     | Atribuição com adição        | `x += 5` | `x = x + 5` |
| `-=`     | Atribuição com subtração     | `x -= 3` | `x = x - 3` |
| `*=`     | Atribuição com multiplicação | `x *= 2` | `x = x * 2` |
| `/=`     | Atribuição com divisão       | `x /= 4` | `x = x / 4` |

```python
# Exemplo: Contador de pontos
pontuacao = 0
pontuacao += 50  # Ganhou 50 pontos
pontuacao *= 2   # Bônus duplo
pontuacao -= 10  # Penalidade
print(f"Pontuação final: {pontuacao}")  # 90
```

---

## 🔀 Módulo 4: Controle de Fluxo – Tomada de Decisão

### 🤔 4.1 O que são Estruturas de Seleção?

Estruturas de seleção permitem que seu programa execute diferentes blocos de código baseado em condições. São como cruzamentos em um mapa!

#### 🎯 Funções principais:

- **Tomada de decisão**: O programa escolhe qual ação realizar
- **Controle de fluxo**: Caminhos ramificados baseados em condições
- **Aplicações**: Validação, menus, lógica de jogos

### 🔵 4.2.1 Seleção Simples (`if`)

**"Se isso for verdade, faça aquilo!"**

```python
if condicao:
    # Código executado SOMENTE se condição for True
    # Indentação é obrigatória!
```

```python
# Exemplo prático
numero = float(input("Digite um número: "))

if numero > 0:
    print("O número é positivo!")

print("Fim da verificação.")  # Sempre executado
```

### 🟡 4.2.2 Seleção Composta (`if-else`)

**"Se isso, faça aquilo; Senão, faça esta outra coisa!"**

```python
if condicao:
    # Código se condição for True
else:
    # Código se condição for False
```

```python
# Exemplo: Verificação de maioridade
idade = int(input("Insira sua idade: "))

if idade >= 18:
    print("Você é maior de idade.")
else:
    print("Você é menor de idade.")
```

### 🟢 4.2.3 Seleção Aninhada (`if-elif-else`)

**Para múltiplas condições!**

```python
if primeira_condicao:
    # Código para primeira condição
elif segunda_condicao:
    # Código para segunda condição
elif terceira_condicao:
    # Código para terceira condição
else:
    # Código padrão
```

```python
# Exemplo: Classificação de notas
nota = float(input("Digite a nota (0-100): "))

if nota >= 90:
    print("Excelente! Você tirou um A.")
elif nota >= 70:
    print("Muito bom! Você tirou um B.")
elif nota >= 50:
    print("Ok. Você tirou um C.")
else:
    print("Precisa melhorar. Você tirou um F.")
```

---

## ⚡ Precedência de Operadores

A ordem das operações importa! Python segue uma hierarquia:

1. **Parênteses** `()` - Sempre primeiro!
2. **Potenciação** `**`
3. **Multiplicação, Divisão, Módulo** `*`, `/`, `//`, `%`
4. **Adição, Subtração** `+`, `-`
5. **Comparação** `<`, `<=`, `>`, `>=`, `==`, `!=`
6. **Lógico** `not`
7. **Lógico** `and`
8. **Lógico** `or`

```python
# Exemplo de precedência
resultado = 10 + 5 * 2  # Primeiro 5*2=10, depois 10+10=20
resultado_com_parenteses = (10 + 5) * 2  # Primeiro (10+5)=15, depois 15*2=30

# Condição complexa
idade = 25
salario = 3000
tem_filhos = True
criterio = (idade > 20 and salario > 2500) or tem_filhos  # True
```

---

## 🎯 Desafio Final: Calculadora de Frete

Agora é sua vez de brilhar! Crie um programa que simule uma calculadora de frete:

### 📋 Requisitos:

1. Perguntar o peso do pacote (kg)
2. Perguntar a distância de entrega (km)
3. Calcular o frete usando as regras:
   - **Até 5 kg**: R$ 10,00 + R$ 0,50 por km
   - **5.01 a 10 kg**: R$ 20,00 + R$ 1,00 por km
   - **Acima de 10 kg**: R$ 30,00 + R$ 1,50 por km
4. Exibir o valor formatado com 2 casas decimais

### 💡 Dicas:

- Lembre-se da conversão de tipos!
- Use estruturas condicionais para as faixas de peso
- Aplique os operadores matemáticos corretamente

---

## 🎉 Parabéns!

Você completou o guia completo de lógica de programação e Python! Com essa base sólida, você está pronto para construir seus próprios programas e resolver problemas do dia a dia com lógica e criatividade.

> 🚀 **Próximos passos**: Continue praticando, construa projetos pessoais e nunca pare de aprender!

---

_"A programação é uma arte que combina lógica, criatividade e perseverança. Cada linha de código é um passo em direção à solução."_
