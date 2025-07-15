memoria = []

def salvar_resultado(operacao, num1, num2, resultado):
  if resultado is not None:
    memoria.append({
      "operacao": operacao,
      "num1": num1,
      "num2": num2,
      "resultado": resultado
    })
  else:
      print("Operação não pôde ser realizada.")

def exibir_resultados():
   for registro in memoria:
      print("\n")
      print("=" * 30)
      print(f"\n{str(registro['operacao'].upper())}\n{registro['num1']} e {registro['num2']}\nResultado: {registro['resultado']}\n")