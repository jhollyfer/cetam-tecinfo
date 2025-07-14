# 🗝️ Dicionários em Python

---

## 🎯 1. CONCEITOS

### 💭 O que é um Dicionário?

Um **dicionário** é como um armário organizador onde cada gaveta tem uma **etiqueta única** (chave) e dentro dela você guarda um **objeto** (valor). É a forma mais inteligente de organizar dados em Python!

```
📦 Dicionário = Coleção de pares CHAVE → VALOR
```

### 🌟 Características Principais

| 🔍 **Característica** | 📝 **Descrição**                  | ⚡ **Vantagem**         |
| --------------------- | --------------------------------- | ----------------------- |
| **🎯 Chave única**    | Cada chave aparece apenas uma vez | Identificação precisa   |
| **⚡ Acesso rápido**  | Busca instantânea O(1)            | Performance excepcional |
| **🔄 Mutável**        | Pode ser modificado após criação  | Flexibilidade total     |
| **🎨 Versátil**       | Aceita qualquer tipo de valor     | Máxima adaptabilidade   |

### 🔗 Analogia do Mundo Real

> 🏠 **Pense em um dicionário como:**
>
> - 📞 **Agenda telefônica**: Nome (chave) → Telefone (valor)
> - 🎫 **Bilhete de cinema**: Assento (chave) → Pessoa (valor)
> - 🗂️ **Arquivo de escritório**: Código (chave) → Documento (valor)

### 🆚 Dicionários vs Outras Estruturas

```python
# 📝 LISTA: Acesso por posição
frutas_lista = ["maçã", "banana", "uva"]
print(frutas_lista[0])  # "maçã"

# 🗝️ DICIONÁRIO: Acesso por chave
frutas_dict = {"vermelha": "maçã", "amarela": "banana", "roxa": "uva"}
print(frutas_dict["vermelha"])  # "maçã"
```

---

## 🛠️ 2. EXEMPLOS PRÁTICOS

### 🎨 Criando Dicionários

#### 📋 Forma Básica

```python
# ✨ Criação simples
pessoa = {
    "nome": "Ana",
    "idade": 25,
    "profissao": "Programadora"
}

# 🎯 Dicionário vazio
carrinho = {}

# 🔧 Usando dict()
produto = dict(nome="Notebook", preco=2500, estoque=10)
```

#### 🚀 Formas Avançadas

```python
# 📊 Compreensão de dicionário
quadrados = {x: x**2 for x in range(1, 6)}
# Resultado: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}

# 🎲 Valores diversos
dados_mistos = {
    "texto": "Python é incrível!",
    "numeros": [1, 2, 3, 4, 5],
    "ativo": True,
    "config": {"tema": "escuro", "idioma": "pt-br"}
}
```

### 🔍 Acessando Valores

#### 🎯 Acesso Direto

```python
pessoa = {"nome": "João", "idade": 30, "cidade": "São Paulo"}

# ✅ Acesso por chave
print(f"👤 Nome: {pessoa['nome']}")           # João
print(f"🎂 Idade: {pessoa['idade']}")         # 30
print(f"🏙️ Cidade: {pessoa['cidade']}")       # São Paulo
```

#### 🛡️ Acesso Seguro

```python
# ✅ Método get() - NÃO gera erro
email = pessoa.get("email", "Não informado")
print(f"📧 Email: {email}")  # Não informado

# ❌ Acesso direto - GERA erro se não existir
try:
    telefone = pessoa["telefone"]
except KeyError:
    print("🚨 Chave 'telefone' não encontrada!")
```

### ➕ Adicionando e Modificando

#### 🆕 Adicionando Elementos

```python
pessoa = {"nome": "Maria", "idade": 28}

# 🔥 Adicionar uma chave
pessoa["profissao"] = "Designer"
pessoa["email"] = "maria@email.com"

print(pessoa)
# {'nome': 'Maria', 'idade': 28, 'profissao': 'Designer', 'email': 'maria@email.com'}
```

#### 🔄 Atualizando Valores

```python
# 📝 Modificar valor existente
pessoa["idade"] = 29
pessoa["profissao"] = "UX Designer"

# 🚀 Atualizar múltiplos valores
pessoa.update({
    "cidade": "Rio de Janeiro",
    "telefone": "(21) 99999-9999",
    "ativo": True
})
```

### 🗑️ Removendo Elementos

#### ❌ Método del

```python
pessoa = {"nome": "Pedro", "idade": 35, "email": "pedro@email.com"}

# 🔥 Remover permanentemente
del pessoa["email"]
print(pessoa)  # {'nome': 'Pedro', 'idade': 35}
```

#### 🎯 Método pop()

```python
# 📤 Remover E obter o valor
idade_removida = pessoa.pop("idade", 0)
print(f"🎂 Idade removida: {idade_removida}")  # 35
print(pessoa)  # {'nome': 'Pedro'}
```

#### 🧹 Método clear()

```python
# 🗑️ Limpar tudo
pessoa.clear()
print(pessoa)  # {}
```

### 🔄 Navegando pelo Dicionário

#### 🔑 Trabalhando com Chaves

```python
estudante = {"nome": "Lucas", "curso": "Python", "nota": 9.5}

# 📋 Listar todas as chaves
chaves = list(estudante.keys())
print(f"🔑 Chaves: {chaves}")  # ['nome', 'curso', 'nota']

# 🔍 Verificar se chave existe
if "nome" in estudante:
    print("✅ Chave 'nome' encontrada!")
```

#### 💎 Trabalhando com Valores

```python
# 📦 Listar todos os valores
valores = list(estudante.values())
print(f"💎 Valores: {valores}")  # ['Lucas', 'Python', 9.5]

# 🔍 Verificar se valor existe
if "Python" in estudante.values():
    print("✅ Valor 'Python' encontrado!")
```

#### 📦 Trabalhando com Pares

```python
# 🎯 Listar pares chave-valor
pares = list(estudante.items())
print(f"📦 Pares: {pares}")  # [('nome', 'Lucas'), ('curso', 'Python'), ('nota', 9.5)]

# 🔄 Iterar sobre pares
for chave, valor in estudante.items():
    print(f"🔸 {chave}: {valor}")
```

### 🎮 Casos de Uso Práticos

#### 👤 Sistema de Usuários

```python
# 🏗️ Cadastro completo
usuario = {
    "id": 1001,
    "nome": "Ana Silva",
    "email": "ana@empresa.com",
    "departamento": "TI",
    "salario": 8500.00,
    "ativo": True,
    "permissoes": ["ler", "escrever", "excluir"],
    "endereco": {
        "rua": "Rua das Flores, 123",
        "cidade": "São Paulo",
        "cep": "01234-567"
    }
}

# 🎯 Acessar dados aninhados
print(f"🏠 Mora em: {usuario['endereco']['cidade']}")
print(f"💰 Salário: R$ {usuario['salario']:.2f}")
```

#### 📊 Contador de Palavras

```python
texto = "python é incrível python é poderoso"
contador = {}

# 📈 Contar frequência
for palavra in texto.split():
    contador[palavra] = contador.get(palavra, 0) + 1

print("📊 Frequência das palavras:")
for palavra, freq in contador.items():
    print(f"   {palavra}: {freq}")

# Resultado:
# python: 2
# é: 2
# incrível: 1
# poderoso: 1
```

#### 🏆 Ranking de Jogadores

```python
# 🎮 Pontuação do jogo
pontuacao = {
    "Alice": 1500,
    "Bob": 1200,
    "Carlos": 1800,
    "Diana": 900
}

# 🥇 Encontrar o vencedor
vencedor = max(pontuacao, key=pontuacao.get)
print(f"🏆 Campeão: {vencedor} com {pontuacao[vencedor]} pontos!")

# 📈 Ranking completo
ranking = sorted(pontuacao.items(), key=lambda x: x[1], reverse=True)
print("\n📊 Ranking Final:")
for posicao, (jogador, pontos) in enumerate(ranking, 1):
    print(f"   {posicao}º lugar: {jogador} ({pontos} pontos)")
```

#### 🛒 Carrinho de Compras

```python
# 🛍️ Sistema de e-commerce
carrinho = {}

def adicionar_item(nome, preco, quantidade=1):
    if nome in carrinho:
        carrinho[nome]["quantidade"] += quantidade
    else:
        carrinho[nome] = {"preco": preco, "quantidade": quantidade}

def calcular_total():
    total = 0
    for item in carrinho.values():
        total += item["preco"] * item["quantidade"]
    return total

# 🎯 Adicionando produtos
adicionar_item("Notebook", 2500.00, 1)
adicionar_item("Mouse", 50.00, 2)
adicionar_item("Teclado", 150.00, 1)

print("🛒 Carrinho de Compras:")
for produto, detalhes in carrinho.items():
    subtotal = detalhes["preco"] * detalhes["quantidade"]
    print(f"   {produto}: {detalhes['quantidade']}x R$ {detalhes['preco']:.2f} = R$ {subtotal:.2f}")

print(f"\n💰 Total: R$ {calcular_total():.2f}")
```

### 📚 Resumo dos Métodos Principais

| 🛠️ **Método**        | 📝 **Função**      | 🎯 **Exemplo**                    |
| -------------------- | ------------------ | --------------------------------- |
| `get(chave, padrão)` | Busca segura       | `pessoa.get("idade", 0)`          |
| `keys()`             | Lista chaves       | `list(pessoa.keys())`             |
| `values()`           | Lista valores      | `list(pessoa.values())`           |
| `items()`            | Lista pares        | `list(pessoa.items())`            |
| `pop(chave)`         | Remove e retorna   | `pessoa.pop("idade")`             |
| `update(outro)`      | Atualiza múltiplas | `pessoa.update({"cidade": "SP"})` |
| `clear()`            | Limpa tudo         | `pessoa.clear()`                  |
| `copy()`             | Cria cópia         | `copia = pessoa.copy()`           |

---

## 🎯 CONCLUSÃO

### 🌟 Por que Usar Dicionários?

- **⚡ Performance**: Acesso instantâneo aos dados
- **🎯 Clareza**: Código mais legível e intuitivo
- **🔄 Flexibilidade**: Estrutura adaptável a qualquer necessidade
- **🛠️ Versatilidade**: Base para estruturas de dados complexas

### 🚀 Dica de Ouro

> **Use dicionários sempre que precisar de:**
>
> - 🔍 Busca rápida por identificadores únicos
> - 📊 Mapeamento de relacionamentos
> - 🏗️ Estruturação de dados complexos
> - 📝 Configurações e metadados

---
