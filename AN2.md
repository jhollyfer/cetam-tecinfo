# 🌱 Avaliação - Nível Iniciante

## 📝 Instruções Gerais

- Cada Questão foca em um conceito específico
- Leia o enunciado com atenção
- Teste seu código com diferentes valores
- Pratique bastante cada conceito antes de avançar

---

## ➕ PARTE 1: OPERADORES ARITMÉTICOS

### 📊 Questão 1.1: Calculadora Básica

**Objetivo:** Praticar todos os operadores aritméticos

```python
# Complete o código:
numero1 = float(input("Digite o primeiro número: "))
numero2 = float(input("Digite o segundo número: "))

# Calcule e mostre:
soma =
subtracao =
multiplicacao =
divisao =
divisao_inteira =
resto =
potencia =

print(f"Soma: {soma}")
print(f"Subtração: {subtracao}")
print(f"Multiplicação: {multiplicacao}")
print(f"Divisão: {divisao}")
print(f"Divisão inteira: {divisao_inteira}")
print(f"Resto: {resto}")
print(f"Potência: {potencia}")
```

### 🍕 Questão 1.2: Dividindo a Pizza

**Objetivo:** Usar divisão e resto (módulo)

**Situação:** Você tem uma pizza com 8 fatias para dividir entre amigos.

```python
# Complete o programa:
fatias_pizza = 8
numero_amigos = int(input("Quantos amigos vão comer? "))

# Calcule:
fatias_por_pessoa = # quantas fatias cada um ganha
fatias_sobrando = # quantas fatias sobram

print(f"Cada pessoa ganha {fatias_por_pessoa} fatias")
print(f"Sobram {fatias_sobrando} fatias")
```

### 💰 Questão 1.3: Calculando Troco

**Objetivo:** Operações aritméticas básicas

```python
# Complete o código:
preco_produto = float(input("Preço do produto: R$ "))
valor_pago = float(input("Valor pago: R$ "))

# Calcule o troco:
troco = # sua resposta aqui

print(f"Seu troco é: R$ {troco:.2f}")
```

### 🎯 Questão 1.4: Média de Notas

**Objetivo:** Divisão e formatação

```python
# Complete o programa:
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
nota3 = float(input("Digite a terceira nota: "))

# Calcule a média:
media = # sua resposta aqui

print(f"Sua média é: {media:.1f}")
```

---

## ⚖️ PARTE 2: OPERADORES DE COMPARAÇÃO

### 🔍 Questão 2.1: Testando Comparações

**Objetivo:** Entender cada operador de comparação

```python
# Complete com True ou False:
a = 10
b = 20
c = 10

resultado1 = a == c  # resultado: _______
resultado2 = a != b  # resultado: _______
resultado3 = a < b   # resultado: _______
resultado4 = b > a   # resultado: _______
resultado5 = a <= c  # resultado: _______
resultado6 = b >= a  # resultado: _______

print(f"a == c: {resultado1}")
print(f"a != b: {resultado2}")
print(f"a < b: {resultado3}")
print(f"b > a: {resultado4}")
print(f"a <= c: {resultado5}")
print(f"b >= a: {resultado6}")
```

### 📏 Questão 2.2: Comparando Alturas

**Objetivo:** Usar comparação com entrada do usuário

```python
# Complete o programa:
altura1 = float(input("Digite a primeira altura (em metros): "))
altura2 = float(input("Digite a segunda altura (em metros): "))

# Faça as comparações:
sao_iguais = # sua resposta aqui
primeira_maior = # sua resposta aqui
segunda_maior = # sua resposta aqui

print(f"As alturas são iguais? {sao_iguais}")
print(f"A primeira é maior? {primeira_maior}")
print(f"A segunda é maior? {segunda_maior}")
```

### 🏃 Questão 2.3: Verificando Idade

**Objetivo:** Comparação com números

```python
# Complete o código:
idade = int(input("Digite sua idade: "))

# Faça as verificações:
eh_crianca = # idade menor que 12
eh_adolescente = # idade entre 12 e 17 (use duas comparações)
eh_adulto = # idade maior ou igual a 18

print(f"É criança? {eh_crianca}")
print(f"É adolescente? {eh_adolescente}")
print(f"É adulto? {eh_adulto}")
```

---

## 🧩 PARTE 3: OPERADORES LÓGICOS

### 🔗 Questão 3.1: Entendendo AND, OR, NOT

**Objetivo:** Praticar operadores lógicos básicos

```python
# Complete com True ou False:
tem_dinheiro = True
tem_tempo = False
dia_util = True

# Usando AND:
pode_comprar = tem_dinheiro and tem_tempo  # resultado: _______

# Usando OR:
pode_sair = tem_dinheiro or tem_tempo      # resultado: _______

# Usando NOT:
fim_de_semana = not dia_util               # resultado: _______

print(f"Pode comprar? {pode_comprar}")
print(f"Pode sair? {pode_sair}")
print(f"É fim de semana? {fim_de_semana}")
```

### 🌦️ Questão 3.2: Decisão do Passeio

**Objetivo:** Combinar operadores lógicos

```python
# Complete o programa:
tem_sol = input("Está fazendo sol? (s/n): ") == "s"
tem_dinheiro = input("Você tem dinheiro? (s/n): ") == "s"
tem_companhia = input("Tem companhia? (s/n): ") == "s"

# Complete as condições:
pode_ir_praia = # precisa de sol E dinheiro
pode_ir_cinema = # precisa de dinheiro E companhia
pode_ficar_casa = # NÃO tem sol OU NÃO tem dinheiro

print(f"Pode ir à praia? {pode_ir_praia}")
print(f"Pode ir ao cinema? {pode_ir_cinema}")
print(f"Melhor ficar em casa? {pode_ficar_casa}")
```

### 🎮 Questão 3.3: Acesso ao Jogo

**Objetivo:** Lógica mais complexa

```python
# Complete o código:
idade = int(input("Sua idade: "))
tem_permissao = input("Tem permissão dos pais? (s/n): ") == "s"
tem_conta = input("Tem conta no jogo? (s/n): ") == "s"

# Complete as condições:
pode_jogar = # (se a idade for maior ou igual a 18 OU tem_permissao) E tem_conta
precisa_permissao = # se a idade for menor que  18 E não tem_permissao
pode_criar_conta = # se a idade for maior ou igual a 13

print(f"Pode jogar? {pode_jogar}")
print(f"Precisa de permissão? {precisa_permissao}")
print(f"Pode criar conta? {pode_criar_conta}")
```

---

## 📝 PARTE 4: OPERADORES DE ATRIBUIÇÃO

### 🏪 Questão 4.1: Contador de Vendas

**Objetivo:** Usar +=, -=, \*=, /=

```python
# Complete o programa:
vendas = 0
print(f"Vendas iniciais: {vendas}")

# Primeira venda: adicione 100
vendas
print(f"Após primeira venda: {vendas}")

# Segunda venda: adicione 50
vendas
print(f"Após segunda venda: {vendas}")

# Desconto aplicado: desconte 20
vendas
print(f"Após desconto: {vendas}")

# Bônus dobrado: duplique o valor
vendas *= 2
print(f"Após bônus: {vendas}")

# Dividindo por 2 sócios:
vendas
print(f"Para cada sócio: {vendas}")
```

### 🎯 Questão 4.2: Pontuação do Jogo

**Objetivo:** Praticar diferentes operadores de atribuição

```python
# Complete o código:
pontos = 0
print(f"Pontos iniciais: {pontos}")

# Ganhou pontos:
pontos # adicione 50 pontos
print(f"Primeira fase: {pontos}")

# Ganhou mais pontos:
pontos # adicione 75 pontos
print(f"Segunda fase: {pontos}")

# Perdeu pontos:
pontos # retire 25 pontos
print(f"Penalidade: {pontos}")

# Bônus multiplicativo:
pontos # multiplique por 3
print(f"Bônus triplo: {pontos}")

# Resultado final:
pontos # divida por 2
print(f"Pontos finais: {pontos}")
```

### 💳 Questão 4.3: Saldo Bancário

**Objetivo:** Simular operações bancárias

```python
# Complete o programa:
saldo = 1000.0
print(f"Saldo inicial: R$ {saldo:.2f}")

# Depósito:
deposito = float(input("Valor do depósito: R$ "))
saldo # realize o depósito
print(f"Após depósito: R$ {saldo:.2f}")

# Saque:
saque = float(input("Valor do saque: R$ "))
saldo # realize o saque
print(f"Após saque: R$ {saldo:.2f}")

# Rendimento de 2%:
saldo # multiplique por 0.02
print(f"Após rendimento: R$ {saldo:.2f}")
```

---

## 🔵 PARTE 5: CONDICIONAL SIMPLES (if)

### 🎂 Questão 5.1: Verificação de Idade

**Objetivo:** Usar if simples

```python
# Complete o código:
idade = int(input("Digite sua idade: "))

# Se é maior de idade: se a idade for maior ou igual a 18
if # sua condição aqui:
    print("Você é maior de idade!")

# Se pode dirigir: se a idade for maior ou igual a 16 anos
if # sua condição aqui:
    print("Você pode dirigir!")

# Se é idoso: se a idade for maior ou igual que 60 anos
if # sua condição aqui:
    print("Você tem direito ao desconto de idoso!")

print("Verificação concluída!")
```

### 🌡️ Questão 5.2: Alerta de Temperatura

**Objetivo:** Múltiplas condições if

```python
# Complete o programa:
temperatura = float(input("Digite a temperatura: "))

# Alertas:
if # temperatura muito baixa (< 0):
    print("ALERTA: Risco de congelamento!")

if # temperatura baixa (< 15):
    print("Está frio! Vista um casaco.")

if # temperatura alta (> 30):
    print("Está quente! Beba bastante água.")

if # temperatura muito alta (> 40):
    print("ALERTA: Calor extremo!")

print("Verificação de temperatura concluída.")
```

### 🏆 Questão 5.3: Classificação de Nota

**Objetivo:** Verificações independentes

```python
# Complete o código:
nota = float(input("Digite sua nota (0-10): "))

# Classificações:
if # nota excelente (>= 9):
    print("Excelente! Parabéns!")

if # nota boa (>= 7):
    print("Boa nota! Continue assim!")

if # nota regular (>= 5):
    print("Nota regular. Pode melhorar!")

if # nota baixa (< 5):
    print("Nota baixa. Precisa estudar mais!")

print("Análise da nota concluída.")
```

---

## 🟡 PARTE 6: CONDICIONAL COMPOSTA (if-else)

### 🚦 Questão 6.1: Par ou Ímpar

**Objetivo:** Usar if-else básico

```python
# Complete o código:
numero = int(input("Digite um número: "))

if # número é par: se o resto da divisao por 2 é igual a zero
    print(f"O número {numero} é PAR!")
else:
    print(f"O número {numero} é ÍMPAR!")
```

### 🌡️ Questão 6.2: Roupa do Dia

**Objetivo:** Decisão simples

```python
# Complete o programa:
temperatura = float(input("Qual a temperatura hoje? "))

if # se a temperatura é maior ou igual a 25:
    print("Vista roupas leves!")
else:
    print("Vista roupas mais quentes!")
```

### 🎯 Questão 6.3: Aprovação Escolar

**Objetivo:** Condição de aprovação

```python
# Complete o código:
nota = float(input("Digite sua nota: "))

if # se a nota é maior ou igual a 7:
    print("APROVADO! Parabéns!")
else:
    print("REPROVADO! Precisa estudar mais.")
```

### 💰 Questão 6.4: Desconto na Compra

**Objetivo:** Aplicar ou não desconto

```python
# Complete o programa:
valor_compra = float(input("Valor da compra: R$ "))

if # se o valor é maior ou igual a 100:
    desconto = valor_compra * 0.10
    valor_final = valor_compra - desconto
    print(f"Desconto aplicado: R$ {desconto:.2f}")
    print(f"Valor final: R$ {valor_final:.2f}")
else:
    print(f"Valor final: R$ {valor_compra:.2f}")
    print("Compre mais R$ para ganhar desconto!")
```

### 🔐 Questão 6.5: Verificação de Senha

**Objetivo:** Validação simples

```python
# Complete o código:
senha_correta = "123456"
senha_digitada = input("Digite a senha: ")

if # senha está correta:
    print("✅ Acesso liberado!")
else:
    print("❌ Senha incorreta!")
```
