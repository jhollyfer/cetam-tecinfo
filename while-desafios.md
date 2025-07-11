# 20 Exercícios de While em Python - Iniciantes

## 1. Contador simples (1 até 10)

**Exercício:** Crie um programa que conte de 1 até 10 usando while.

```python
contador = 1
while contador <= 10:
    print(contador)
    contador += 1
```

## 2. Contador regressivo

**Exercício:** Faça um programa que conte de 10 até 1 e depois exiba "Fim!".

```python
contador = 10
while contador >= 1:
    print(contador)
    contador -= 1
print("Fim!")
```

## 3. Soma de números

**Exercício:** Peça ao usuário para digitar números e some todos eles. O programa deve parar quando o usuário digitar 0.

```python
soma = 0
numero = int(input("Digite um número (0 para parar): "))
while numero != 0:
    soma += numero
    numero = int(input("Digite um número (0 para parar): "))
print(f"A soma total é: {soma}")
```

## 4. Adivinhe o número

**Exercício:** Crie um jogo onde o computador "pensa" em um número de 1 a 10 e o usuário deve adivinhar.

```python
import random

numero_secreto = random.randint(1, 10)
tentativa = 0

while tentativa != numero_secreto:
    tentativa = int(input("Adivinhe o número (1-10): "))
    if tentativa < numero_secreto:
        print("Muito baixo!")
    elif tentativa > numero_secreto:
        print("Muito alto!")
    else:
        print("Parabéns! Você acertou!")
```

## 5. Tabuada

**Exercício:** Peça um número ao usuário e mostre a tabuada completa (de 1 a 10) desse número.

```python
numero = int(input("Digite um número para ver a tabuada: "))
multiplicador = 1

while multiplicador <= 10:
    resultado = numero * multiplicador
    print(f"{numero} x {multiplicador} = {resultado}")
    multiplicador += 1
```

## 6. Validação de entrada

**Exercício:** Peça ao usuário para digitar um número entre 1 e 5. Continue perguntando até que ele digite um número válido.

```python
numero = 0
while numero < 1 or numero > 5:
    numero = int(input("Digite um número entre 1 e 5: "))
    if numero < 1 or numero > 5:
        print("Número inválido! Tente novamente.")
print(f"Você digitou: {numero}")
```

## 7. Contador de pares

**Exercício:** Conte e exiba todos os números pares de 0 até 20.

```python
numero = 0
while numero <= 20:
    if numero % 2 == 0:
        print(numero)
    numero += 1
```

## 8. Senha simples

**Exercício:** Crie um programa que peça uma senha. Continue perguntando até o usuário digitar a senha correta.

```python
senha_correta = "123"
senha = ""

while senha != senha_correta:
    senha = input("Digite a senha: ")
    if senha != senha_correta:
        print("Senha incorreta! Tente novamente.")
print("Acesso liberado!")
```

## 9. Média de notas

**Exercício:** Peça ao usuário para digitar notas (0 a 10) e calcule a média. Pare quando digitar -1.

```python
soma = 0
contador = 0
nota = 0

while nota != -1:
    nota = float(input("Digite uma nota (0-10) ou -1 para parar: "))
    if nota != -1:
        soma += nota
        contador += 1

if contador > 0:
    media = soma / contador
    print(f"Média das notas: {media:.2f}")
else:
    print("Nenhuma nota foi digitada.")
```

## 10. Potências de 2

**Exercício:** Exiba as primeiras 8 potências de 2 (2¹, 2², 2³, etc.).

```python
expoente = 1
while expoente <= 8:
    potencia = 2 ** expoente
    print(f"2^{expoente} = {potencia}")
    expoente += 1
```

## 11. Fatorial

**Exercício:** Calcule o fatorial de um número usando while.

```python
numero = int(input("Digite um número para calcular o fatorial: "))
fatorial = 1
contador = 1

while contador <= numero:
    fatorial *= contador
    contador += 1

print(f"O fatorial de {numero} é: {fatorial}")
```

## 12. Números ímpares

**Exercício:** Exiba todos os números ímpares de 1 até 15.

```python
numero = 1
while numero <= 15:
    if numero % 2 != 0:
        print(numero)
    numero += 1
```

## 13. Soma de números pares

**Exercício:** Some todos os números pares de 2 até 20.

```python
numero = 2
soma = 0

while numero <= 20:
    if numero % 2 == 0:
        soma += numero
    numero += 1

print(f"A soma dos números pares de 2 a 20 é: {soma}")
```

## 14. Contador de dígitos

**Exercício:** Conte quantos dígitos tem um número.

```python
numero = int(input("Digite um número: "))
contador = 0
temp = abs(numero)  # Valor absoluto para números negativos

if temp == 0:
    contador = 1
else:
    while temp > 0:
        temp //= 10
        contador += 1

print(f"O número {numero} tem {contador} dígitos.")
```

## 15. Maior número

**Exercício:** Peça números ao usuário e encontre o maior. Pare quando digitar 0.

```python
maior = None
numero = int(input("Digite um número (0 para parar): "))

while numero != 0:
    if maior is None or numero > maior:
        maior = numero
    numero = int(input("Digite um número (0 para parar): "))

if maior is not None:
    print(f"O maior número digitado foi: {maior}")
else:
    print("Nenhum número foi digitado.")
```

## 16. Sequência de Fibonacci

**Exercício:** Exiba os primeiros 10 números da sequência de Fibonacci.

```python
a, b = 0, 1
contador = 0

while contador < 10:
    print(a)
    a, b = b, a + b
    contador += 1
```

## 17. Contagem de letras

**Exercício:** Conte quantas vezes uma letra específica aparece em uma palavra.

```python
palavra = input("Digite uma palavra: ")
letra = input("Digite a letra a ser contada: ")
contador = 0
indice = 0

while indice < len(palavra):
    if palavra[indice].lower() == letra.lower():
        contador += 1
    indice += 1

print(f"A letra '{letra}' aparece {contador} vez(es) na palavra '{palavra}'.")
```

## 18. Menu simples

**Exercício:** Crie um menu que só para quando o usuário digitar 0.

```python
opcao = -1
while opcao != 0:
    print("\n=== MENU ===")
    print("1 - Opção 1")
    print("2 - Opção 2")
    print("3 - Opção 3")
    print("0 - Sair")
    opcao = int(input("Escolha uma opção: "))

    if opcao == 1:
        print("Você escolheu a opção 1!")
    elif opcao == 2:
        print("Você escolheu a opção 2!")
    elif opcao == 3:
        print("Você escolheu a opção 3!")
    elif opcao == 0:
        print("Saindo do programa...")
    else:
        print("Opção inválida!")
```

## 19. Inverter número

**Exercício:** Inverta os dígitos de um número.

```python
numero = int(input("Digite um número: "))
invertido = 0
temp = abs(numero)

while temp > 0:
    digito = temp % 10
    invertido = invertido * 10 + digito
    temp //= 10

if numero < 0:
    invertido = -invertido

print(f"O número {numero} invertido é: {invertido}")
```

## 20. Jogo da adivinhação com tentativas

**Exercício:** Jogo de adivinhação com limite de 5 tentativas.

```python
import random

numero_secreto = random.randint(1, 50)
tentativas = 0
max_tentativas = 5
acertou = False

print("Adivinhe o número entre 1 e 50!")
print(f"Você tem {max_tentativas} tentativas.")

while tentativas < max_tentativas and not acertou:
    tentativa = int(input(f"Tentativa {tentativas + 1}: "))
    tentativas += 1

    if tentativa == numero_secreto:
        print(f"Parabéns! Você acertou em {tentativas} tentativa(s)!")
        acertou = True
    elif tentativa < numero_secreto:
        print("Muito baixo!")
    else:
        print("Muito alto!")

    if not acertou and tentativas < max_tentativas:
        print(f"Restam {max_tentativas - tentativas} tentativa(s).")

if not acertou:
    print(f"Você perdeu! O número era {numero_secreto}.")
```

---

**Dicas importantes:**

- Sempre certifique-se de que a condição do while eventualmente se torne falsa
- Use `contador += 1` ou `contador -= 1` para modificar a variável de controle
- Cuidado com loops infinitos - sempre teste seus programas
- Use `break` quando necessário para sair do loop antecipadamente
