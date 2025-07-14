# 🔒 Tuplas

As tuplas são como **cofres digitais** - uma vez criadas, seus elementos ficam protegidos contra alterações. São perfeitas para dados que precisam permanecer constantes, oferecendo segurança e eficiência em seus programas Python!

---

## 🎯 CONCEITOS FUNDAMENTAIS

### 💡 O que é uma Tupla?

Uma tupla é uma **coleção ordenada e imutável** de elementos. Imagine um **comboio de vagões** onde:

- 🚂 Cada vagão tem uma posição fixa (ordenada)
- 🔒 Os vagões não podem ser alterados ou removidos (imutável)
- 📦 Cada vagão pode carregar qualquer tipo de "carga" (elemento)

### 🛡️ Características Principais

| 🔥 **Característica** | 📝 **Descrição**                         | 🎯 **Benefício**                  |
| --------------------- | ---------------------------------------- | --------------------------------- |
| **📋 Ordenada**       | Mantém a ordem de inserção dos elementos | Acesso previsível por índices     |
| **🔒 Imutável**       | Elementos não podem ser alterados        | Segurança e integridade dos dados |
| **🔢 Indexada**       | Acesso por posição (0, 1, 2...)          | Recuperação rápida de elementos   |
| **🎭 Heterogênea**    | Aceita diferentes tipos de dados         | Flexibilidade na estruturação     |
| **⚡ Eficiente**      | Menor uso de memória que listas          | Melhor performance                |

### 🏗️ Anatomia da Tupla

```python
# Estrutura básica
tupla = (elemento1, elemento2, elemento3, ...)
         ↑        ↑        ↑
      índice 0  índice 1  índice 2
```

### 📊 Sintaxe e Criação

```python
# 🎯 Formas de criar tuplas
tupla_basica = (1, 2, 3, 4, 5)
tupla_mista = (1, "Python", True, 3.14)
tupla_vazia = ()
tupla_unitaria = (42,)  # ⚠️ Vírgula obrigatória!
```

### 🎭 Tipos de Tuplas

| 🎨 **Tipo**     | 🔧 **Sintaxe**   | 🎯 **Uso**              |
| --------------- | ---------------- | ----------------------- |
| **Vazia**       | `()`             | Placeholder inicial     |
| **Unitária**    | `(item,)`        | Um único elemento       |
| **Homogênea**   | `(1, 2, 3)`      | Mesmo tipo de dados     |
| **Heterogênea** | `(1, "a", True)` | Tipos mistos            |
| **Aninhada**    | `((1,2), (3,4))` | Tuplas dentro de tuplas |

### 🔍 Sistema de Índices

```python
# Tupla exemplo: (10, 20, 30, 40, 50)
#                 ↑   ↑   ↑   ↑   ↑
# Índice positivo: 0   1   2   3   4
# Índice negativo: -5  -4  -3  -2  -1
```

### 🧮 Operações Básicas

| 🔧 **Operação**  | 📝 **Sintaxe**      | 🎯 **Resultado**        |
| ---------------- | ------------------- | ----------------------- |
| **Acesso**       | `tupla[índice]`     | Elemento na posição     |
| **Fatiamento**   | `tupla[início:fim]` | Subtupla                |
| **Comprimento**  | `len(tupla)`        | Quantidade de elementos |
| **Verificação**  | `item in tupla`     | True/False              |
| **Concatenação** | `tupla1 + tupla2`   | Nova tupla combinada    |
| **Repetição**    | `tupla * n`         | Tupla repetida n vezes  |

### 🎯 Tuplas vs Listas: A Batalha Final

| 🏆 **Aspecto**   | 🔒 **Tuplas**           | 📝 **Listas**               |
| ---------------- | ----------------------- | --------------------------- |
| **Sintaxe**      | `(1, 2, 3)`             | `[1, 2, 3]`                 |
| **Mutabilidade** | 🔒 Imutável             | 🔄 Mutável                  |
| **Performance**  | ⚡ Mais rápida          | 🐌 Mais lenta               |
| **Memória**      | 💾 Menor uso            | 📊 Maior uso                |
| **Métodos**      | 2 (`count`, `index`)    | 11+ (`append`, `pop`, etc.) |
| **Hashable**     | ✅ Sim (pode ser chave) | ❌ Não                      |
| **Uso típico**   | Dados constantes        | Dados dinâmicos             |

### 🎯 Quando Usar Cada Uma?

#### ✅ Use Tuplas Para:

- 🗝️ **Chaves de dicionário** (são hashable)
- 📍 **Coordenadas** (x, y, z)
- 🎨 **Cores RGB** (255, 128, 0)
- 📊 **Dados constantes** (configurações, constantes)
- 🔢 **Múltiplos retornos** de funções
- 🛡️ **Dados que não devem mudar**

#### ❌ Use Listas Para:

- 📝 **Dados que mudam** frequentemente
- ➕ **Adição/remoção** de elementos
- 🔄 **Ordenação** dinâmica
- 🎯 **Manipulação** constante de dados

---

## 🚀 EXEMPLOS PRÁTICOS

### 🎯 Criação e Acesso Básico

```python
# 🎬 Criando tuplas de diferentes formas
print("🎯 CRIAÇÃO DE TUPLAS")
print("=" * 30)

# Tupla básica
frutas = ("maçã", "banana", "laranja", "uva")
print(f"🍎 Frutas: {frutas}")

# Tupla com tipos mistos
pessoa = ("João", 25, True, 1.75)
print(f"👤 Pessoa: {pessoa}")

# Tupla vazia e unitária
vazia = ()
unitaria = (42,)  # ⚠️ Vírgula é obrigatória!
print(f"📭 Vazia: {vazia}")
print(f"1️⃣ Unitária: {unitaria}")

# Acessando elementos
print(f"\n🎯 ACESSANDO ELEMENTOS:")
print(f"🥇 Primeira fruta: {frutas[0]}")
print(f"🏁 Última fruta: {frutas[-1]}")
print(f"👤 Nome da pessoa: {pessoa[0]}")
print(f"🎂 Idade da pessoa: {pessoa[1]}")

# 🖥️ Saída:
# 🎯 CRIAÇÃO DE TUPLAS
# ==============================
# 🍎 Frutas: ('maçã', 'banana', 'laranja', 'uva')
# 👤 Pessoa: ('João', 25, True, 1.75)
# 📭 Vazia: ()
# 1️⃣ Unitária: (42,)
#
# 🎯 ACESSANDO ELEMENTOS:
# 🥇 Primeira fruta: maçã
# 🏁 Última fruta: uva
# 👤 Nome da pessoa: João
# 🎂 Idade da pessoa: 25
```

### 🎨 Fatiamento (Slicing)

```python
# 🎬 Explorando o fatiamento de tuplas
print("✂️ FATIAMENTO DE TUPLAS")
print("=" * 30)

numeros = (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
print(f"📊 Tupla original: {numeros}")

# Diferentes tipos de fatiamento
print(f"\n🎯 EXEMPLOS DE FATIAMENTO:")
print(f"🔸 Primeiros 3: {numeros[:3]}")
print(f"🔸 Últimos 3: {numeros[-3:]}")
print(f"🔸 Do meio: {numeros[3:7]}")
print(f"🔸 Pares (step=2): {numeros[::2]}")
print(f"🔸 Ímpares: {numeros[1::2]}")
print(f"🔸 Reverso: {numeros[::-1]}")

# Fatiamento prático
cores = ("vermelho", "azul", "verde", "amarelo", "roxo", "rosa")
print(f"\n🎨 Cores: {cores}")
print(f"🌈 Cores primárias: {cores[:3]}")
print(f"🎭 Cores secundárias: {cores[3:]}")

# 🖥️ Saída:
# ✂️ FATIAMENTO DE TUPLAS
# ==============================
# 📊 Tupla original: (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
#
# 🎯 EXEMPLOS DE FATIAMENTO:
# 🔸 Primeiros 3: (0, 1, 2)
# 🔸 Últimos 3: (7, 8, 9)
# 🔸 Do meio: (3, 4, 5, 6)
# 🔸 Pares (step=2): (0, 2, 4, 6, 8)
# 🔸 Ímpares: (1, 3, 5, 7, 9)
# 🔸 Reverso: (9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
```

### 🛠️ Métodos count() e index()

```python
# 🎬 Explorando os métodos das tuplas
print("🔧 MÉTODOS DAS TUPLAS")
print("=" * 30)

# Tupla com elementos repetidos
notas = (8, 7, 9, 8, 6, 8, 9, 7, 10, 8)
print(f"📊 Notas: {notas}")

# Método count() - conta ocorrências
print(f"\n🔢 CONTANDO OCORRÊNCIAS:")
print(f"📊 Quantas vezes aparece 8: {notas.count(8)}")
print(f"📊 Quantas vezes aparece 9: {notas.count(9)}")
print(f"📊 Quantas vezes aparece 10: {notas.count(10)}")
print(f"📊 Quantas vezes aparece 5: {notas.count(5)}")

# Método index() - encontra primeira ocorrência
print(f"\n🔍 ENCONTRANDO POSIÇÕES:")
print(f"📍 Primeira ocorrência de 8: índice {notas.index(8)}")
print(f"📍 Primeira ocorrência de 9: índice {notas.index(9)}")
print(f"📍 Primeira ocorrência de 10: índice {notas.index(10)}")

# Tratando erros com index()
try:
    posicao = notas.index(5)
    print(f"📍 Primeira ocorrência de 5: índice {posicao}")
except ValueError:
    print("❌ Nota 5 não encontrada!")

# Estatísticas das notas
print(f"\n📈 ESTATÍSTICAS:")
print(f"📊 Total de notas: {len(notas)}")
print(f"📊 Nota máxima: {max(notas)}")
print(f"📊 Nota mínima: {min(notas)}")
print(f"📊 Soma das notas: {sum(notas)}")
print(f"📊 Média: {sum(notas)/len(notas):.2f}")
```

---

## 🎓 RESUMO E CHEAT SHEET

### 📋 Criação de Tuplas

```python
# Diferentes formas de criar
tupla_basica = (1, 2, 3, 4, 5)
tupla_mista = (1, "texto", True, 3.14)
tupla_vazia = ()
tupla_unitaria = (42,)  # Vírgula obrigatória!

# Criação implícita
coordenadas = 10, 20  # Válido, mas use parênteses!
```

### 🎯 Operações Fundamentais

```python
# Acesso a elementos
primeiro = tupla[0]      # Primeiro elemento
ultimo = tupla[-1]       # Último elemento
meio = tupla[len(tupla)//2]  # Elemento do meio

# Fatiamento
inicio = tupla[:3]       # Primeiros 3 elementos
fim = tupla[-3:]         # Últimos 3 elementos
meio = tupla[2:5]        # Elementos 2, 3, 4
reverso = tupla[::-1]    # Tupla invertida

# Verificações
tamanho = len(tupla)     # Quantidade de elementos
existe = item in tupla   # Verifica se item existe
```

### 🛠️ Métodos Disponíveis

```python
# Apenas 2 métodos nativos
quantidade = tupla.count(elemento)    # Conta ocorrências
posicao = tupla.index(elemento)       # Primeira posição

# Funções úteis
maximo = max(tupla)      # Maior elemento
minimo = min(tupla)      # Menor elemento
soma = sum(tupla)        # Soma (apenas números)
```

### 🔄 Conversões

```python
# Tupla ↔ Lista
lista = list(tupla)      # Tupla → Lista (mutável)
tupla = tuple(lista)     # Lista → Tupla (imutável)

# Tupla ↔ String
string = str(tupla)      # Tupla → String
# String → Tupla (via lista)
tupla = tuple(string.split(','))
```

### ⚠️ Cuidados Importantes

- **Tupla unitária**: `(item,)` - Não esqueça da vírgula!
- **Imutabilidade**: Não tente modificar elementos
- **Aninhamento**: Tuplas podem conter outras tuplas
- **Performance**: Mais rápidas que listas para leitura
- **Hashable**: Podem ser chaves de dicionário

---
