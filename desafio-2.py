print("=== CAIXA ELETRÔNICO ===")
saldo = float(input("Digite seu saldo atual: "))

print("Escolha a operação:\n1 - Saque\n2 - Depósito\n3 - Consulta de saldo")
opcao = int(input("Digite sua opção: "))

if opcao < 1 or opcao > 3:
    print("Opção inválida!")
else:
    print("Escolha seu tipo de conta:\n1 - Comum (taxa R$ 2,00)\n2 - Especial (taxa R$ 1,00)\n3 - Premium (sem taxa)")
    tipo_conta = int(input("Digite sua opção: "))
    
    if tipo_conta < 1 or tipo_conta > 3:
        print("Opção inválida!")
    else:
        saldo_anterior = saldo
        operacao_realizada = False
        
        if tipo_conta == 1:
          taxa = 2.00
        elif tipo_conta == 2:
          taxa = 1.00
        else:
          taxa = 0.00
        
        if opcao == 1:  
            operacao = "SAQUE"
            valor = float(input("Digite o valor do saque: "))
            
            limite_saque = 0

            if tipo_conta == 1:
              limite_saque = 500.00
            elif tipo_conta == 2:
              limite_saque = 1000.00
            else:
              limite_saque = 2000.00
            
            if valor > limite_saque:
                print("Limite de saque excedido para essa conta!")
            elif saldo < (valor + taxa):
                print("Saldo insuficiente!")
            else:
                saldo -= valor
                saldo -= taxa
                operacao_realizada = True
                
        elif opcao == 2: 
            operacao = "DEPÓSITO"
            valor = float(input("Digite o valor do depósito: "))
            
            if valor < 10:
                print("Valor mínimo para depósito: R$ 10,00")
            elif (saldo + valor) < taxa:
                print("Saldo insuficiente para pagar a taxa!")
            else:
                saldo += valor - taxa
                operacao_realizada = True
                
        elif opcao == 3: 
            operacao = "CONSULTA"
            
            if saldo < taxa:
                print("Saldo insuficiente para pagar a taxa!")
            else:
                saldo -= taxa
                operacao_realizada = True
        
        if operacao_realizada:
          print("\n=== RESULTADO ===")
          print(f"Operação: {operacao}")
          if opcao != 3: 
              print(f"Valor: R$ {valor:.2f}")
          print(f"Taxa: R$ {taxa:.2f}")
          print(f"Saldo anterior: R$ {saldo_anterior:.2f}")
          print(f"Saldo atual: R$ {saldo:.2f}")
          print("\n✅ Operação realizada com sucesso!")