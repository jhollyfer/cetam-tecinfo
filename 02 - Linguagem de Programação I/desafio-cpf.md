# Desafio CPF - Validador em Grupo

## 🎯 Objetivo
Implementar um programa em C++ que **valida CPF** aplicando os conceitos estudados.

---

## 📋 Organização
- **Grupos de 3-4 pessoas**
- **Tempo: 2 horas**

---

## 🧮 Regras do CPF Válido

### Como calcular os dígitos verificadores:

**1º Dígito:**
```
CPF: 123.456.789-XX

Multiplicar cada dígito por: 10, 9, 8, 7, 6, 5, 4, 3, 2
1×10 + 2×9 + 3×8 + 4×7 + 5×6 + 6×5 + 7×4 + 8×3 + 9×2 = SOMA

RESTO = SOMA % 11

Se RESTO < 2: 1º dígito = 0
Se RESTO ≥ 2: 1º dígito = 11 - RESTO
```

**2º Dígito:**
```
Agora com o 1º dígito calculado: 123.456.789-[1º]X

Multiplicar por: 11, 10, 9, 8, 7, 6, 5, 4, 3, 2
1×11 + 2×10 + 3×9 + 4×8 + 5×7 + 6×6 + 7×5 + 8×4 + 9×3 + [1º]×2 = SOMA

RESTO = SOMA % 11

Se RESTO < 2: 2º dígito = 0
Se RESTO ≥ 2: 2º dígito = 11 - RESTO
```

**CPF é válido se os dois dígitos calculados conferem com os informados.**

---

## 💻 Requisitos do Programa

### Deve conter:
- ✅ **Entrada de dados** (cin)
- ✅ **Variáveis** para armazenar CPF e cálculos  
- ✅ **Vetores** para os dígitos do CPF
- ✅ **Loops for** para os cálculos
- ✅ **If/else** para as validações
- ✅ **Saída formatada** (cout) com resultado
- ✅ **String** para manipular o CPF de entrada

### Estrutura sugerida:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Declarar variáveis e vetor
    // 2. Ler CPF do usuário (cin)
    // 3. Extrair os 11 dígitos
    // 4. Calcular 1º dígito verificador
    // 5. Calcular 2º dígito verificador
    // 6. Comparar e mostrar resultado (cout)
    
    return 0;
}
```

---

## 🧪 CPFs para Teste

**Válidos:**
- 11144477735
- 12345678909

**Inválidos:**
- 11111111111
- 12345678900
  
**Bom trabalho, pessoal! 💪**
