idade = int(input("Sua idade: "))

match idade:
    case x if x < 12:
        print("Criança")
    case x if 12 <= x < 18:
        print("Adolescente")
    case x if 18 <= x < 60:
        print("Adulto")
    case x if x >= 60:
        print("Idoso")