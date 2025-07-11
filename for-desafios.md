# 20 Exercícios de For em Python - Iniciantes

## 1. Contador simples (1 até 10)

**Exercício:** Exiba os números de 1 a 10 usando for.

```python
for i in range(1, 11):
    print(i)
```

## 2. Tabuada

**Exercício:** Peça um número ao usuário e exiba sua tabuada de 1 a 10.

```python
numero = int(input("Digite um número para ver a tabuada: "))
for i in range(1, 11):
    print(f"{numero} x {i} = {numero * i}")
```

## 3. Soma de números

**Exercício:** Some todos os números de 1 a 100.

```python
soma = 0
for i in range(1, 101):
    soma += i
print(f"A soma de 1 a 100 é: {soma}")
```

## 4. Números pares

**Exercício:** Exiba todos os números pares de 0 a 20.

```python
for i in range(0, 21, 2):
    print(i)

# Alternativa:
# for i in range(21):
#     if i % 2 == 0:
#         print(i)
```

## 5. Números ímpares

**Exercício:** Exiba todos os números ímpares de 1 a 15.

```python
for i in range(1, 16, 2):
    print(i)

# Alternativa:
# for i in range(1, 16):
#     if i % 2 != 0:
#         print(i)
```

## 6. Contagem regressiva

**Exercício:** Faça uma contagem regressiva de 10 até 1.

```python
for i in range(10, 0, -1):
    print(i)
print("Fim!")
```

## 7. Soma de lista

**Exercício:** Calcule a soma de todos os elementos de uma lista.

```python
numeros = [10, 20, 30, 40, 50]
soma = 0
for numero in numeros:
    soma += numero
print(f"A soma dos números é: {soma}")
```

## 8. Maior número da lista

**Exercício:** Encontre o maior número de uma lista.

```python
numeros = [45, 12, 67, 23, 89, 34]
maior = numeros[0]
for numero in numeros:
    if numero > maior:
        maior = numero
print(f"O maior número é: {maior}")
```

## 9. Contador de caracteres

**Exercício:** Conte quantos caracteres tem uma string.

```python
texto = input("Digite uma frase: ")
contador = 0
for char in texto:
    contador += 1
print(f"A frase tem {contador} caracteres.")

# Alternativa mais simples:
# print(f"A frase tem {len(texto)} caracteres.")
```

## 10. Contar vogais

**Exercício:** Conte quantas vogais existem em uma palavra.

```python
palavra = input("Digite uma palavra: ")
vogais = "aeiouAEIOU"
contador = 0

for letra in palavra:
    if letra in vogais:
        contador += 1

print(f"A palavra '{palavra}' tem {contador} vogais.")
```

## 11. Fatorial

**Exercício:** Calcule o fatorial de um número.

```python
numero = int(input("Digite um número: "))
fatorial = 1

for i in range(1, numero + 1):
    fatorial *= i

print(f"O fatorial de {numero} é: {fatorial}")
```

## 12. Pirâmide de asteriscos

**Exercício:** Crie uma pirâmide de asteriscos com 5 linhas.

```python
for i in range(1, 6):
    print("*" * i)
```

## 13. Pirâmide centralizada

**Exercício:** Crie uma pirâmide centralizada de asteriscos.

```python
linhas = 5
for i in range(1, linhas + 1):
    espacos = " " * (linhas - i)
    asteriscos = "*" * (2 * i - 1)
    print(espacos + asteriscos)
```

## 14. Média de notas

**Exercício:** Calcule a média de uma lista de notas.

```python
notas = [8.5, 7.2, 9.1, 6.8, 8.9]
soma = 0

for nota in notas:
    soma += nota

media = soma / len(notas)
print(f"A média das notas é: {media:.2f}")
```

## 15. Números primos

**Exercício:** Verifique se um número é primo.

```python
numero = int(input("Digite um número: "))
eh_primo = True

if numero < 2:
    eh_primo = False
else:
    for i in range(2, int(numero ** 0.5) + 1):
        if numero % i == 0:
            eh_primo = False
            break

if eh_primo:
    print(f"{numero} é um número primo.")
else:
    print(f"{numero} não é um número primo.")
```

## 16. Inverter string

**Exercício:** Inverta uma string usando for.

```python
texto = input("Digite uma palavra: ")
texto_invertido = ""

for i in range(len(texto) - 1, -1, -1):
    texto_invertido += texto[i]

print(f"Texto original: {texto}")
print(f"Texto invertido: {texto_invertido}")
```

## 17. Tabela de multiplicação

**Exercício:** Crie uma tabela de multiplicação 10x10.

```python
print("   ", end="")
for i in range(1, 11):
    print(f"{i:4}", end="")
print()

for i in range(1, 11):
    print(f"{i:2}:", end="")
    for j in range(1, 11):
        print(f"{i*j:4}", end="")
    print()
```

## 18. Buscar elemento

**Exercício:** Procure um elemento específico em uma lista.

```python
numeros = [12, 45, 67, 23, 89, 34, 56]
procurado = int(input("Digite o número que você quer procurar: "))
encontrado = False

for i, numero in enumerate(numeros):
    if numero == procurado:
        print(f"Número {procurado} encontrado na posição {i}!")
        encontrado = True
        break

if not encontrado:
    print(f"Número {procurado} não encontrado na lista.")
```

## 19. Potências de um número

**Exercício:** Exiba as primeiras 10 potências de um número.

```python
numero = int(input("Digite um número: "))
for i in range(1, 11):
    potencia = numero ** i
    print(f"{numero}^{i} = {potencia}")
```

## 20. Padrão numérico

**Exercício:** Crie um padrão numérico crescente.

```python
linhas = 5
for i in range(1, linhas + 1):
    for j in range(1, i + 1):
        print(j, end=" ")
    print()
```

## 21. Lista de números pares

**Exercício:** Crie uma lista com todos os números pares de 0 a 20.

```python
pares = []
for i in range(0, 21):
    if i % 2 == 0:
        pares.append(i)
print("Números pares:", pares)
```

## 22. Contagem de palavras

**Exercício:** Conte quantas palavras existem em uma frase.

```python
frase = input("Digite uma frase: ")
palavras = frase.split()
contador = 0

for palavra in palavras:
    contador += 1

print(f"A frase tem {contador} palavras.")
```

## 23. Soma de dígitos

**Exercício:** Some todos os dígitos de um número.

```python
numero = input("Digite um número: ")
soma = 0

for digito in numero:
    if digito.isdigit():
        soma += int(digito)

print(f"A soma dos dígitos é: {soma}")
```

## 24. Números divisíveis

**Exercício:** Encontre todos os números de 1 a 50 que são divisíveis por 3.

```python
divisíveis = []
for i in range(1, 51):
    if i % 3 == 0:
        divisíveis.append(i)

print("Números divisíveis por 3:", divisíveis)
```

## 25. Sequência de Fibonacci

**Exercício:** Gere os primeiros 10 números da sequência de Fibonacci.

```python
fibonacci = [0, 1]
for i in range(2, 10):
    proximo = fibonacci[i-1] + fibonacci[i-2]
    fibonacci.append(proximo)

print("Sequência de Fibonacci:", fibonacci)
```

---

**Conceitos importantes do for:**

- `range(start, stop, step)` - para gerar sequências numéricas
- `for item in lista` - para iterar sobre elementos
- `enumerate()` - para obter índice e valor
- `break` - para sair do loop antecipadamente
- `continue` - para pular para a próxima iteração
- Loops aninhados - for dentro de for

**Dicas:**

- Use `range()` para loops numéricos
- Use `for item in lista` para percorrer elementos
- Combine com `if` para filtrar elementos
- Use `enumerate()` quando precisar do índice
