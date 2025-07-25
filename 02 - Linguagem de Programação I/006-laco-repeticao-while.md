# Laços de Repetição em C++: for e while
**Data:** 24/07  
**Habilidade Técnica:** Implementar laços for e while  
**Competência Socioemocional:** Determinação

---

## 🎯 Objetivos da Aula
- Compreender o conceito de laços de repetição em C++
- Implementar estruturas **for** e **while**
- Aplicar laços em problemas práticos
- Desenvolver determinação na resolução de problemas

---

## 📚 1. Conceito Fundamental

**Laços de repetição** são estruturas que executam um bloco de código múltiplas vezes, evitando repetição desnecessária de código.

### Quando usar?
- Processar arrays de dados
- Executar cálculos repetitivos
- Validar entradas do usuário

---

## 🔄 2. Laço FOR

### Estrutura Básica
```cpp
for (inicialização; condição; incremento) {
    // código a ser repetido
}
```

### Exemplo Simples
```cpp
#include <iostream>
using namespace std;

int main() {
    // Contar de 1 a 5
    for (int i = 1; i <= 5; i++) {
        cout << "Número: " << i << endl;
    }
    return 0;
}
```

**Saída:**
```
Número: 1
Número: 2
Número: 3
Número: 4
Número: 5
```

### Aplicação Prática: Array de Notas
```cpp
#include <iostream>
using namespace std;

int main() {
    int notas[3] = {85, 90, 78};
    
    for (int i = 0; i < 3; i++) {
        cout << "Nota " << (i+1) << ": " << notas[i] << endl;
    }
    return 0;
}
```

---

## ⭕ 3. Laço WHILE

### Estrutura Básica
```cpp
while (condição) {
    // código a ser repetido
    // atualizar condição
}
```

### Exemplo Simples
```cpp
#include <iostream>
using namespace std;

int main() {
    // Contar de 1 a 5
    int contador = 1;
    while (contador <= 5) {
        cout << "Número: " << contador << endl;
        contador++;
    }
    return 0;
}
```

### Aplicação Prática: Menu Simples
```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao = 0;
    
    while (opcao != 3) {
        cout << "1 - Opção A" << endl;
        cout << "2 - Opção B" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        
        if (opcao != 3) {
            cout << "Opção selecionada: " << opcao << endl;
        }
    }
    return 0;
}
```

---

## 📊 4. Comparação: FOR vs WHILE

| **FOR** | **WHILE** |
|---------|-----------|
| Número conhecido de repetições | Número indefinido de repetições |
| Ideal para arrays e contadores | Ideal para condições |
| Mais conciso | Mais flexível |

---

## 💻 5. Atividade Prática 1: Soma de Números

**Problema:** Somar todos os números de 1 a 10.

### Solução com FOR:
```cpp
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    
    for (int numero = 1; numero <= 10; numero++) {
        soma += numero;
    }
    
    cout << "Soma total: " << soma << endl;
    return 0;
}
```

### Solução com WHILE:
```cpp
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    int numero = 1;
    
    while (numero <= 10) {
        soma += numero;
        numero++;
    }
    
    cout << "Soma total: " << soma << endl;
    return 0;
}
```

**Resultado:** `Soma total: 55`

---

## 🧮 6. Atividade Prática 2: Fatorial

**Problema:** Calcular o fatorial de 5 (5! = 5 × 4 × 3 × 2 × 1).

### Solução:
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = 5;
    int fatorial = 1;
    
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    cout << "Fatorial de " << numero << ": " << fatorial << endl;
    return 0;
}
```

**Resultado:** `Fatorial de 5: 120`

---

## ⚡ 7. Otimização de Laços

### Dicas Importantes:
1. **Evite loops infinitos** - sempre atualize a condição
2. **Use break quando necessário** - para sair do loop
3. **Minimize operações dentro do loop** - calcule fora quando possível
4. **Declare variáveis fora do loop** quando reutilizadas

### Exemplo de Otimização:
```cpp
// ❌ Menos eficiente
for (int i = 0; i < 100; i++) {
    int tamanho = 10 * 2;  // calculado 100 vezes
    cout << tamanho << endl;
}

// ✅ Mais eficiente  
int tamanho = 10 * 2;  // calculado 1 vez
for (int i = 0; i < 100; i++) {
    cout << tamanho << endl;
}
```

### Comando break:
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // sai do loop quando i = 5
        }
        cout << i << " ";
    }
    return 0;
}
```

---

## 🤝 8. Discussão em Grupos

**Questões para debate:**

1. Quando é melhor usar **for** ao invés de **while**?
2. Como evitar loops infinitos em C++?
3. Que estratégias podem otimizar laços de repetição?
4. Por que é importante inicializar variáveis em C++?

### Cenário para Análise:
*"Você precisa processar um array de 1000 elementos. Qual estrutura escolheria e por quê?"*

---

## 📝 9. Exercícios para Casa

### 1. Básico: Números Pares
```cpp
// Imprimir números pares de 2 a 20
// Complete o código abaixo:
for (int i = 2; i <= 20; i += 2) {
    // seu código aqui
}
```

### 2. Intermediário: Média de Notas
```cpp
// Calcular a média de 5 notas inseridas pelo usuário
// Use cin para entrada e cout para saída
```

### 3. Avançado: Maior Número
```cpp
// Encontrar o maior número em um array de 5 elementos
int numeros[5] = {23, 67, 12, 89, 45};
// Complete o algoritmo
```

---

## 🌟 10. Conexão Socioemocional: Determinação

**Reflexão:** Assim como os laços repetem até atingir seu objetivo, a **determinação** nos faz persistir até alcançar nossos goals. 

- Loops nos ensinam que repetição leva ao sucesso
- Cada iteração é um passo em direção ao resultado
- Erros de compilação são oportunidades de ajustar e continuar
- A sintaxe rigorosa do C++ desenvolve precisão e paciência

**Pergunta reflexiva:** *"Como você pode aplicar a persistência dos loops em seus estudos de programação?"*

---

## 🔧 11. Dicas Técnicas C++

### Declarações importantes:
```cpp
#include <iostream>  // Para entrada e saída
using namespace std; // Para usar cout e cin diretamente
```

### Tipos de dados comuns:
- `int` - números inteiros
- `float` - números decimais
- `char` - caracteres
- `string` - texto (precisa #include <string>)

### Operadores úteis:
- `++` - incremento
- `--` - decremento  
- `+=` - soma e atribui
- `*=` - multiplica e atribui

---

## 📋 Resumo da Aula

- **FOR:** Ideal para contadores e arrays conhecidos
- **WHILE:** Ideal para condições dinâmicas  
- **Sintaxe C++:** Rigorosa mas poderosa
- **Otimização:** Minimize cálculos desnecessários
- **Determinação:** Persistir até atingir o objetivo

**Próxima aula:** Arrays e Strings em C++
