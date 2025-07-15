
def somar(a, b):
  """Retorna a soma de dois números."""
  resultado = a + b
  return resultado

def subtrair(a, b):
  """Retorna a subtração de dois números."""
  resultado = a - b
  return resultado

def multiplicar(a, b):
  """Retorna a multiplicação de dois números."""
  resultado = a * b
  return resultado

def dividir(a, b):
  """Retorna a divisão de dois números."""
  if b == 0:
      print("⚠️ Erro: Divisão por zero!")
      return None
  
  resultado = a / b
  return resultado

def potenciar(a, b):
  """Retorna a potenciação de dois números."""
  resultado = a ** b
  return resultado

def raiz_n(a, n):
  """Retorna a raiz de um número."""
  if n == 0:
    print("⚠️ Erro: Raiz de zero!")
    return None

  if a < 0 and n % 2 == 0:
    print("⚠️ Erro: Raiz de número negativo!")
    return None

  resultado = a ** (1 / n)

  return resultado

def modulo(a, b):
  """Retorna o resto da divisão de dois números."""
  if b == 0:
    print("⚠️ Erro: Divisão por zero!")
    return None
  
  resultado = a % b

  return resultado

def mdc(a, b):
  """Encontra o maior número que divide os dois números"""
  while b != 0:
      resto = a % b  
      a = b          
      b = resto   

  return a


def mmc(a, b):
  """Encontra o menor número que é múltiplo dos dois números"""
  # Fórmula: MMC = (a × b) ÷ MDC
  produto = a * b
  if produto < 0:
      produto = -produto  
  
  divisor_comum = mdc(a, b)  
  resultado = produto // divisor_comum
  return resultado
