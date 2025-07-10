print("=== CAIXA ELETRÔNICO ===")
saldo = float(input("Digite seu saldo atual: "))
print("Escolha a operação:\n1 - Saque\n2 - Depósito\n3 - Consulta de saldo")
opcao = int(input("Digite sua opção: "))

# Verificar se a opção é válida
match opcao:
    case 1 | 2 | 3:
        # Opção válida, continua
        pass
    case _:
        print("Opção inválida!")
        exit()

# Escolher tipo de conta
print("Escolha seu tipo de conta:\n1 - Comum (taxa R$ 2,00)\n2 - Especial (taxa R$ 1,00)\n3 - Premium (sem taxa)")
tipo_conta = int(input("Digite sua opção: "))

# Verificar se o tipo de conta é válido
match tipo_conta:
    case 1 | 2 | 3:
        # Tipo válido, continua
        pass
    case _:
        print("Opção inválida!")
        exit()

# Definir taxa baseada no tipo de conta
match tipo_conta:
    case 1:
        taxa = 2.00
    case 2:
        taxa = 1.00
    case 3:
        taxa = 0.00

# Definir limite de saque baseado no tipo de conta
match tipo_conta:
    case 1:
        limite_saque = 500.00
    case 2:
        limite_saque = 1000.00
    case 3:
        limite_saque = 2000.00

# Guardar saldo anterior
saldo_anterior = saldo
operacao_realizada = False

# Processar cada operação
match opcao:
    case 1:  # SAQUE
        operacao = "SAQUE"
        valor = float(input("Digite o valor do saque: "))
        
        if valor > limite_saque:
            print("Limite de saque excedido para essa conta!")
        elif saldo < (valor + taxa):
            print("Saldo insuficiente!")
        else:
            saldo = saldo - valor - taxa
            operacao_realizada = True
            
    case 2:  # DEPÓSITO
        operacao = "DEPÓSITO"
        valor = float(input("Digite o valor do depósito: "))
        
        if valor < 10:
            print("Valor mínimo para depósito: R$ 10,00")
        elif (saldo + valor) < taxa:
            print("Saldo insuficiente para pagar a taxa!")
        else:
            saldo = saldo + valor - taxa
            operacao_realizada = True
            
    case 3:  # CONSULTA
        operacao = "CONSULTA"
        
        if saldo < taxa:
            print("Saldo insuficiente para pagar a taxa!")
        else:
            saldo = saldo - taxa
            operacao_realizada = True

# Mostrar resultado se a operação foi realizada
if operacao_realizada:
    print("\n=== RESULTADO ===")
    print(f"Operação: {operacao}")
    if opcao != 3: 
        print(f"Valor: R$ {valor:.2f}")
    print(f"Taxa: R$ {taxa:.2f}")
    print(f"Saldo anterior: R$ {saldo_anterior:.2f}")
    print(f"Saldo atual: R$ {saldo:.2f}")
    print("\n✅ Operação realizada com sucesso!")