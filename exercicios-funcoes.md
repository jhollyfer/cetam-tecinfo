# 20 Exercícios de Funções em Python - Iniciantes

## 1. Função de saudação

**Exercício:** Crie uma função que receba um nome e exiba uma saudação.

```python
def saudar(nome):
    print(f"Olá, {nome}! Seja bem-vindo!")

# Testando a função
saudar("Maria")
saudar("João")
```

## 2. Função para somar dois números

**Exercício:** Crie uma função que receba dois números e retorne a soma.

```python
def somar(a, b):
    return a + b

# Testando a função
resultado = somar(5, 3)
print(f"5 + 3 = {resultado}")

print(f"10 + 7 = {somar(10, 7)}")
```

## 3. Função para calcular área do retângulo

**Exercício:** Crie uma função que calcule a área de um retângulo.

```python
def area_retangulo(largura, altura):
    area = largura * altura
    return area

# Testando a função
largura = float(input("Digite a largura: "))
altura = float(input("Digite a altura: "))
resultado = area_retangulo(largura, altura)
print(f"A área do retângulo é: {resultado}")
```

## 4. Função para verificar se número é par

**Exercício:** Crie uma função que verifique se um número é par ou ímpar.

```python
def eh_par(numero):
    return numero % 2 == 0

# Testando a função
def verificar_paridade(num):
    if eh_par(num):
        print(f"{num} é par")
    else:
        print(f"{num} é ímpar")

verificar_paridade(4)
verificar_paridade(7)
verificar_paridade(10)
```

## 5. Função para encontrar o maior de três números

**Exercício:** Crie uma função que encontre o maior entre três números.

```python
def maior_de_tres(a, b, c):
    if a >= b and a >= c:
        return a
    elif b >= a and b >= c:
        return b
    else:
        return c

# Testando a função
print(f"Maior entre 5, 2, 8: {maior_de_tres(5, 2, 8)}")
print(f"Maior entre 10, 15, 3: {maior_de_tres(10, 15, 3)}")
```

## 6. Função para calcular fatorial

**Exercício:** Crie uma função que calcule o fatorial de um número.

```python
def fatorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        resultado = 1
        for i in range(2, n + 1):
            resultado *= i
        return resultado

# Testando a função
print(f"Fatorial de 5: {fatorial(5)}")
print(f"Fatorial de 0: {fatorial(0)}")
print(f"Fatorial de 7: {fatorial(7)}")
```

## 7. Função para converter temperatura

**Exercício:** Crie funções para converter Celsius para Fahrenheit e vice-versa.

```python
def celsius_para_fahrenheit(celsius):
    fahrenheit = (celsius * 9/5) + 32
    return fahrenheit

def fahrenheit_para_celsius(fahrenheit):
    celsius = (fahrenheit - 32) * 5/9
    return celsius

# Testando as funções
print(f"25°C em Fahrenheit: {celsius_para_fahrenheit(25):.1f}°F")
print(f"77°F em Celsius: {fahrenheit_para_celsius(77):.1f}°C")
```

## 8. Função para contar caracteres

**Exercício:** Crie uma função que conte quantos caracteres tem uma string.

```python
def contar_caracteres(texto):
    return len(texto)

def contar_caracteres_sem_espacos(texto):
    contador = 0
    for char in texto:
        if char != ' ':
            contador += 1
    return contador

# Testando as funções
frase = "Python é incrível"
print(f"Total de caracteres: {contar_caracteres(frase)}")
print(f"Caracteres sem espaços: {contar_caracteres_sem_espacos(frase)}")
```

## 9. Função para verificar se número é primo

**Exercício:** Crie uma função que verifique se um número é primo.

```python
def eh_primo(numero):
    if numero < 2:
        return False
    for i in range(2, int(numero ** 0.5) + 1):
        if numero % i == 0:
            return False
    return True

# Testando a função
numeros = [2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
for num in numeros:
    if eh_primo(num):
        print(f"{num} é primo")
    else:
        print(f"{num} não é primo")
```

## 10. Função para calcular média

**Exercício:** Crie uma função que calcule a média de uma lista de números.

```python
def calcular_media(numeros):
    if len(numeros) == 0:
        return 0
    soma = sum(numeros)
    return soma / len(numeros)

# Testando a função
notas = [8.5, 7.2, 9.1, 6.8, 8.9]
media = calcular_media(notas)
print(f"Média das notas: {media:.2f}")

valores = [10, 20, 30, 40, 50]
print(f"Média dos valores: {calcular_media(valores)}")
```

## 11. Função para inverter string

**Exercício:** Crie uma função que inverta uma string.

```python
def inverter_string(texto):
    return texto[::-1]

def inverter_string_manual(texto):
    texto_invertido = ""
    for i in range(len(texto) - 1, -1, -1):
        texto_invertido += texto[i]
    return texto_invertido

# Testando as funções
palavra = "Python"
print(f"Original: {palavra}")
print(f"Invertido: {inverter_string(palavra)}")
print(f"Invertido manual: {inverter_string_manual(palavra)}")
```

## 12. Função para contar vogais

**Exercício:** Crie uma função que conte quantas vogais existem em uma string.

```python
def contar_vogais(texto):
    vogais = "aeiouAEIOU"
    contador = 0
    for char in texto:
        if char in vogais:
            contador += 1
    return contador

# Testando a função
frase = "Python é uma linguagem incrível"
print(f"A frase '{frase}' tem {contar_vogais(frase)} vogais")
```

## 13. Função para gerar tabuada

**Exercício:** Crie uma função que gere a tabuada de um número.

```python
def gerar_tabuada(numero, ate=10):
    print(f"Tabuada do {numero}:")
    for i in range(1, ate + 1):
        resultado = numero * i
        print(f"{numero} x {i} = {resultado}")

# Testando a função
gerar_tabuada(7)
print("\n" + "="*20 + "\n")
gerar_tabuada(3, 5)  # Tabuada até 5
```

## 14. Função para validar idade

**Exercício:** Crie uma função que valide se uma idade está em um intervalo válido.

```python
def validar_idade(idade):
    return 0 <= idade <= 120

def classificar_idade(idade):
    if not validar_idade(idade):
        return "Idade inválida"
    elif idade < 13:
        return "Criança"
    elif idade < 18:
        return "Adolescente"
    elif idade < 60:
        return "Adulto"
    else:
        return "Idoso"

# Testando as funções
idades = [5, 15, 25, 65, 150, -5]
for idade in idades:
    print(f"Idade {idade}: {classificar_idade(idade)}")
```

## 15. Função para calcular potência

**Exercício:** Crie uma função que calcule a potência de um número.

```python
def potencia(base, expoente):
    return base ** expoente

def potencia_manual(base, expoente):
    if expoente == 0:
        return 1
    resultado = 1
    for i in range(abs(expoente)):
        resultado *= base
    return resultado if expoente > 0 else 1 / resultado

# Testando as funções
print(f"2^3 = {potencia(2, 3)}")
print(f"5^0 = {potencia(5, 0)}")
print(f"3^4 (manual) = {potencia_manual(3, 4)}")
```

## 16. Função para formatar nome

**Exercício:** Crie uma função que formate um nome (primeira letra maiúscula).

```python
def formatar_nome(nome):
    return nome.strip().title()

def formatar_nome_completo(nome_completo):
    nomes = nome_completo.split()
    nomes_formatados = []
    for nome in nomes:
        nomes_formatados.append(nome.capitalize())
    return " ".join(nomes_formatados)

# Testando as funções
print(formatar_nome("  joão silva  "))
print(formatar_nome_completo("MARIA DA SILVA santos"))
```

## 17. Função para calcular desconto

**Exercício:** Crie uma função que calcule o valor final após aplicar um desconto.

```python
def calcular_desconto(valor_original, percentual_desconto):
    desconto = valor_original * (percentual_desconto / 100)
    valor_final = valor_original - desconto
    return valor_final, desconto

def mostrar_desconto(valor, desconto_percent):
    valor_final, desconto = calcular_desconto(valor, desconto_percent)
    print(f"Valor original: R$ {valor:.2f}")
    print(f"Desconto ({desconto_percent}%): R$ {desconto:.2f}")
    print(f"Valor final: R$ {valor_final:.2f}")

# Testando as funções
mostrar_desconto(100, 15)
print("\n" + "="*30 + "\n")
mostrar_desconto(250, 20)
```

## 18. Função para listar números primos

**Exercício:** Crie uma função que liste todos os números primos até um limite.

```python
def eh_primo(numero):
    if numero < 2:
        return False
    for i in range(2, int(numero ** 0.5) + 1):
        if numero % i == 0:
            return False
    return True

def listar_primos(limite):
    primos = []
    for num in range(2, limite + 1):
        if eh_primo(num):
            primos.append(num)
    return primos

# Testando a função
print(f"Números primos até 20: {listar_primos(20)}")
print(f"Números primos até 50: {listar_primos(50)}")
```

## 19. Função para calcular IMC

**Exercício:** Crie uma função que calcule o IMC e classifique o resultado.

```python
def calcular_imc(peso, altura):
    imc = peso / (altura ** 2)
    return imc

def classificar_imc(imc):
    if imc < 18.5:
        return "Abaixo do peso"
    elif imc < 25:
        return "Peso normal"
    elif imc < 30:
        return "Sobrepeso"
    else:
        return "Obesidade"

def avaliar_imc(peso, altura):
    imc = calcular_imc(peso, altura)
    classificacao = classificar_imc(imc)
    return imc, classificacao

# Testando a função
peso = float(input("Digite seu peso (kg): "))
altura = float(input("Digite sua altura (m): "))

imc, classificacao = avaliar_imc(peso, altura)
print(f"Seu IMC é: {imc:.2f}")
print(f"Classificação: {classificacao}")
```

## 20. Função para jogo de adivinhação

**Exercício:** Crie uma função que implemente um jogo de adivinhação.

```python
import random

def gerar_numero_secreto(min_val=1, max_val=100):
    return random.randint(min_val, max_val)

def jogar_adivinhacao():
    numero_secreto = gerar_numero_secreto()
    tentativas = 0
    max_tentativas = 7

    print("=== JOGO DE ADIVINHAÇÃO ===")
    print(f"Adivinhe o número entre 1 e 100!")
    print(f"Você tem {max_tentativas} tentativas.")

    while tentativas < max_tentativas:
        try:
            palpite = int(input(f"\nTentativa {tentativas + 1}: "))
            tentativas += 1

            if palpite == numero_secreto:
                print(f"🎉 Parabéns! Você acertou em {tentativas} tentativas!")
                return True
            elif palpite < numero_secreto:
                print("📈 Muito baixo!")
            else:
                print("📉 Muito alto!")

            if tentativas < max_tentativas:
                print(f"Restam {max_tentativas - tentativas} tentativas.")

        except ValueError:
            print("❌ Digite apenas números!")

    print(f"😞 Você perdeu! O número era {numero_secreto}.")
    return False

def menu_jogo():
    while True:
        print("\n=== MENU ===")
        print("1 - Jogar")
        print("2 - Sair")
        opcao = input("Escolha uma opção: ")

        if opcao == "1":
            jogar_adivinhacao()
        elif opcao == "2":
            print("Obrigado por jogar!")
            break
        else:
            print("Opção inválida!")

# Executar o jogo
# menu_jogo()
```

---

**Conceitos importantes sobre funções:**

1. **Definição:** `def nome_funcao(parametros):`
2. **Parâmetros:** Valores que a função recebe
3. **Return:** Retorna um valor da função
4. **Escopo:** Variáveis locais vs globais
5. **Parâmetros padrão:** `def funcao(param=valor_padrao):`
6. **Docstrings:** Documentação da função

**Exemplo com docstring:**

```python
def calcular_area_circulo(raio):
    """
    Calcula a área de um círculo.

    Args:
        raio (float): O raio do círculo

    Returns:
        float: A área do círculo
    """
    pi = 3.14159
    return pi * raio ** 2
```

**Dicas importantes:**

- Use nomes descritivos para suas funções
- Mantenha suas funções pequenas e focadas
- Use `return` para devolver valores
- Teste suas funções com diferentes valores
- Documente suas funções quando necessário
