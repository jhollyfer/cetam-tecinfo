# Aula 7 - Laços de repetição: do-while, break e continue
**Data:** 25/07  
**Foco:** Controle de loops e validação de entrada

---

## 🎯 Objetivos da Aula

**Habilidades Técnicas:**
- Utilizar estruturas do-while para controlar loops
- Aplicar break e continue em laços de repetição
- Implementar validação de entrada de dados

**Habilidades Socioemocionais:**
- Desenvolver foco na resolução de problemas
- Trabalhar em equipe na discussão de soluções

---

## 📚 1. Estrutura do-while

### Conceito
O `do-while` executa o bloco de código **pelo menos uma vez**, depois verifica a condição.

### Sintaxe
```cpp
do {
    // código a ser executado
} while (condição);
```

### Exemplo Básico
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    
    do {
        cout << "Digite um número positivo: ";
        cin >> numero;
    } while (numero <= 0);
    
    cout << "Você digitou: " << numero << endl;
    return 0;
}
```

---

## 🔄 2. Diferença entre while e do-while

### while
```cpp
int x = 10;
while (x < 5) {
    cout << "Não executa" << endl;
    x++;
}
// Resultado: nada é impresso
```

### do-while
```cpp
int x = 10;
do {
    cout << "Executa uma vez" << endl;
    x++;
} while (x < 5);
// Resultado: "Executa uma vez" é impresso
```

---

## ⚡ 3. Comando break

### Função
O `break` **interrompe** completamente o loop atual.

### Exemplo
```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    
    do {
        cout << "Número: " << contador << endl;
        
        if (contador == 3) {
            break; // Para o loop quando contador = 3
        }
        
        contador++;
    } while (contador <= 10);
    
    cout << "Loop finalizado!" << endl;
    return 0;
}
```

**Saída:**
```
Número: 1
Número: 2
Número: 3
Loop finalizado!
```

---

## ⏭️ 4. Comando continue

### Função
O `continue` **pula** a iteração atual e vai para a próxima.

### Exemplo
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = 0;
    
    do {
        numero++;
        
        if (numero % 2 == 0) {
            continue; // Pula números pares
        }
        
        cout << "Número ímpar: " << numero << endl;
        
    } while (numero < 6);
    
    return 0;
}
```

**Saída:**
```
Número ímpar: 1
Número ímpar: 3
Número ímpar: 5
```

---

## 💡 5. Casos Práticos

### Menu Interativo
```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao;
    
    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Opção A" << endl;
        cout << "2. Opção B" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cout << "Você escolheu A" << endl;
                break;
            case 2:
                cout << "Você escolheu B" << endl;
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
        
    } while (opcao != 0);
    
    return 0;
}
```

### Validação de Senha
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string senha;
    string senhaCorreta = "123456";
    int tentativas = 0;
    
    do {
        cout << "Digite a senha: ";
        cin >> senha;
        tentativas++;
        
        if (senha != senhaCorreta) {
            cout << "Senha incorreta!" << endl;
            
            if (tentativas >= 3) {
                cout << "Muitas tentativas! Acesso bloqueado." << endl;
                break;
            }
        }
        
    } while (senha != senhaCorreta && tentativas < 3);
    
    if (senha == senhaCorreta) {
        cout << "Acesso liberado!" << endl;
    }
    
    return 0;
}
```

---

## 🔧 6. Atividades Práticas

### Atividade 1: Contador com Break
Crie um programa que conte de 1 a 20, mas pare quando encontrar o número 15.

### Atividade 2: Números Válidos
Faça um programa que peça números ao usuário e só aceite valores entre 1 e 100. Use `continue` para números inválidos.

### Atividade 3: Calculadora Simples
Desenvolva uma calculadora que funcione até o usuário digitar 0 para sair.

---

## 📋 7. Discussão em Grupos

**Temas para discussão:**
1. Quando usar `do-while` ao invés de `while`?
2. Situações onde `break` é necessário
3. Como `continue` pode otimizar código
4. Condições de parada eficientes

---

## 🎯 8. Resumo da Aula

- **do-while:** Executa pelo menos uma vez
- **break:** Sai completamente do loop
- **continue:** Pula para próxima iteração
- **Validação:** Essencial para entrada de dados
- **Condições de parada:** Devem ser bem definidas

---

## 📚 Recursos Utilizados
- Ambiente de desenvolvimento C++
- Exemplos práticos interativos
- Discussão colaborativa
- Exercícios hands-on
