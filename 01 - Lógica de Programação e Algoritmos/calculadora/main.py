from modulos.interfaces import *
from modulos.operacoes import *
from modulos.memoria import *

opcao_de_parada = 0

opcao = menu()

while opcao != opcao_de_parada:
    match opcao:
        case 1:
            num1, num2 = obter_numeros()
            resultado = somar(num1, num2)
            exibir_resultado("soma", num1, num2, resultado)
            salvar_resultado("soma", num1, num2, resultado)
        case 2:
            num1, num2 = obter_numeros()
            resultado = subtrair(num1, num2)
            exibir_resultado("subtração", num1, num2, resultado)
            salvar_resultado("subtração", num1, num2, resultado)
        case 3:
            num1, num2 = obter_numeros()
            resultado = multiplicar(num1, num2)
            exibir_resultado("multiplicação", num1, num2, resultado)
            salvar_resultado("multiplicação", num1, num2, resultado)
        case 4:
            num1, num2 = obter_numeros()
            resultado = dividir(num1, num2)
            exibir_resultado("divisão", num1, num2, resultado)
            salvar_resultado("divisão", num1, num2, resultado)
        case 5:
            num1, num2 = obter_numeros()
            resultado = potenciar(num1, num2)
            exibir_resultado("potência", num1, num2, resultado)
            salvar_resultado("potência", num1, num2, resultado)
        case 6:
            num1, num2 = obter_numeros()
            resultado = raiz_n(num1, num2)
            exibir_resultado("raiz", num1, num2, resultado)
            salvar_resultado("raiz", num1, num2, resultado)
        case 7:
            num1, num2 = obter_numeros()
            resultado = modulo(num1, num2)
            exibir_resultado("resto da divisão", num1, num2, resultado)
            salvar_resultado("resto da divisão", num1, num2, resultado)
        case 8: 
            num1, num2 = obter_numeros()
            resultado = mdc(num1, num2)
            exibir_resultado("MDC", num1, num2, resultado)
            salvar_resultado("MDC", num1, num2, resultado)
        case 9:
            num1, num2 = obter_numeros()
            resultado = mmc(num1, num2)
            exibir_resultado("MMC", num1, num2, resultado)
            salvar_resultado("MMC", num1, num2, resultado)
        case 10:
            exibir_resultados()
        case _:
            print("⚠️ Opção inválida!")
    
    opcao = menu()

print("Programa finalizado")