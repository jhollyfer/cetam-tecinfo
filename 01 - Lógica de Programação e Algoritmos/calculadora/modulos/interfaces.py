def menu():
    """Exibe o menu da calculadora e retorna a opção escolhida."""
    print("\nMenu da calculadora:")
    print("1. Somar")
    print("2. Subtrair")
    print("3. Multiplicar")
    print("4. Dividir")
    print("5. Potenciar")
    print("6. Raiz N")
    print("7. Modulo")
    print("8. MDC")
    print("9. MMC")
    print("10. Exibir histórico")
    print("0. Sair")
    
    opcao = int(input("Digite a sua escolha: "))
    return opcao

def obter_numeros():
    """Solicita e retorna dois números do usuário."""
    num1 = float(input("Digite o primeiro número: "))
    num2 = float(input("Digite o segundo número: "))
    return num1, num2

def exibir_resultado(operacao, num1, num2, resultado):
    """Exibe o resultado da operação."""
    if resultado is not None:
        print(f"A {operacao} de {num1} e {num2} é: {resultado}")
    else:
        print("Operação não pôde ser realizada.")