https://preview--group-shuffle-generator.lovable.app/

## 🚀 **DESAFIO 1: Calculadora de Notas da Escola**

### O que você vai fazer?

Criar um programa que calcula a média de um aluno e diz se ele foi aprovado, em recuperação ou reprovado.

### 📝 Informações que o programa deve pedir:

1. Nome do aluno
2. Nota da primeira prova (0 a 10)
3. Nota da segunda prova (0 a 10)
4. Nota dos trabalhos (0 a 10)
5. Quantas faltas o aluno teve
6. Total de aulas no semestre (exemplo: 80 aulas)

### 🧮 Cálculos que o programa deve fazer:

- **Média:** (nota1 + nota2 + trabalhos) ÷ 3
- **Porcentagem de faltas:** (faltas ÷ total_aulas) × 100

### 📊 Regras de aprovação:

- **APROVADO:** média ≥ 7 E faltas < 25%
- **RECUPERAÇÃO:** média entre 4 e 6.9 E faltas < 25%
- **REPROVADO:** média < 4 OU faltas ≥ 25%

### 💡 Exemplo de como deve funcionar:

```
=== CALCULADORA DE NOTAS ===

Digite o nome do aluno: João Silva
Digite a nota da primeira prova: 8.5
Digite a nota da segunda prova: 7.0
Digite a nota dos trabalhos: 9.0
Digite o número de faltas: 10
Digite o total de aulas: 80

=== RESULTADO ===
Aluno: João Silva
Média: 8.17
Faltas: 10 (12.5% das aulas)
Situação: APROVADO! 🎉

João parabéns! Você foi aprovado com média 8.17!
```

### ✅ Conceitos que você vai usar:

- input() para perguntar dados
- int() e float() para converter números
- Operadores: +, -, \*, /, %
- Comparações: >, <, >=, <=, ==
- Lógica: and, or
- if, elif, else
- print() formatado

---

## 🏆 **DESAFIO 2: Caixa Eletrônico Simples**

### O que você vai fazer?

Criar um programa que simula um caixa eletrônico básico com saque, depósito e consulta de saldo.

### 📝 Informações que o programa deve pedir:

1. Saldo inicial da conta
2. Tipo de operação (1-Saque, 2-Depósito, 3-Consulta)
3. Valor da operação (se for saque ou depósito)
4. Tipo de conta (1-Comum, 2-Especial, 3-Premium)

### 🧮 Regras do sistema:

**Taxas por operação:**

- Conta Comum: R$ 2,00 por operação
- Conta Especial: R$ 1,00 por operação
- Conta Premium: R$ 0,00 (sem taxa)

**Limites de saque:**

- Conta Comum: máximo R$ 500,00
- Conta Especial: máximo R$ 1.000,00
- Conta Premium: máximo R$ 2.000,00

**Regras especiais:**

- Saque só é permitido se houver saldo suficiente (valor + taxa)
- Depósito mínimo: R$ 10,00
- Mostrar saldo final após qualquer operação

### 💡 Exemplo de como deve funcionar:

```
=== CAIXA ELETRÔNICO ===

Digite seu saldo atual: 1000.00
Escolha a operação:
1 - Saque
2 - Depósito
3 - Consulta de saldo
Digite sua opção: 1

Digite o valor do saque: 200.00
Escolha seu tipo de conta:
1 - Comum (taxa R$ 2,00)
2 - Especial (taxa R$ 1,00)
3 - Premium (sem taxa)
Digite sua opção: 2

=== RESULTADO ===
Operação: SAQUE
Valor: R$ 200,00
Taxa: R$ 1,00
Saldo anterior: R$ 1.000,00
Saldo atual: R$ 799,00

✅ Operação realizada com sucesso!
```

### ✅ Conceitos que você vai usar:

- input() e conversões
- Variáveis para guardar dados
- Operadores matemáticos
- Comparações múltiplas
- Estruturas if/elif/else aninhadas
- Formatação de dinheiro
- Validação de limites

---

## 🏅 **Dicas Importantes**

### Para o Desafio 1:

```python
# Exemplo de estrutura:
nome = input("Nome do aluno: ")
nota1 = float(input("Primeira nota: "))
# ... continue com as outras perguntas

media = (nota1 + nota2 + trabalhos) / 3
percentual_faltas = (faltas / total_aulas) * 100

if media >= 7 and percentual_faltas < 25:
    print("APROVADO!")
elif media >= 4 and percentual_faltas < 25:
    print("RECUPERAÇÃO!")
else:
    print("REPROVADO!")
```

### Para o Desafio 2:

```python
# Exemplo de estrutura:
saldo = float(input("Saldo atual: "))
operacao = int(input("Operação (1,2,3): "))

if operacao == 1:  # Saque
    valor = float(input("Valor do saque: "))
    tipo_conta = int(input("Tipo de conta: "))
    # ... continue com a lógica do saque
elif operacao == 2:  # Depósito
    # ... lógica do depósito
else:  # Consulta
    # ... mostrar saldo
```
