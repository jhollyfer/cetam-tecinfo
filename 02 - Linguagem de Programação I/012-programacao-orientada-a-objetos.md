# 🏗️ Programação Orientada a Objetos em C++
*Construindo o futuro com Classes e Objetos*

---

## 🎯 **Objetivos de Aprendizagem**

### **Habilidades Técnicas**
- Definir classes e objetos com precisão
- Implementar atributos e métodos eficientemente
- Estruturar código orientado a objetos

### **Competências Socioemocionais**
- **Organização**: Estruturação lógica e clara do código
- **Pensamento Sistemático**: Modelagem de problemas reais
- **Colaboração**: Trabalho em equipe para design de classes

---

## 🌟 **O que é Programação Orientada a Objetos?**

### **Conceito Fundamental**
POO é uma forma de programar que **organiza o código** como o mundo real funciona:
- 🏠 **Objetos** são "coisas" que existem (casa, pessoa, carro)
- 📋 **Classes** são "plantas" ou "moldes" para criar objetos
- 🔧 **Métodos** são "ações" que os objetos podem fazer
- 📊 **Atributos** são "características" dos objetos

### **Por que usar POO?**
- 🧩 **Organização**: Código mais limpo e estruturado
- 🔄 **Reutilização**: Criar vários objetos do mesmo tipo
- 🛡️ **Proteção**: Controlar acesso aos dados
- 🎯 **Manutenção**: Facilita correções e melhorias

---

## 🏗️ **Anatomia de uma Classe**

### **Estrutura Básica**
```cpp
class NomeDaClasse {
private:    // Dados protegidos
    // atributos privados
    
public:     // Interface pública
    // métodos públicos
    // construtores
};
```

### **Primeira Classe - Pessoa**
```cpp
class Pessoa {
private:
    string nome;
    int idade;
    
public:
    // Construtor
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }
    
    // Métodos
    void apresentar() {
        cout << "👋 Olá! Eu sou " << nome 
             << " e tenho " << idade << " anos." << endl;
    }
    
    void fazerAniversario() {
        idade++;
        cout << "🎂 Parabéns! Agora tenho " << idade << " anos!" << endl;
    }
};
```

---

## 🎨 **Exemplos Práticos Elegantes**

### **🚗 Classe Carro**
```cpp
class Carro {
private:
    string marca;
    string modelo;
    int velocidade;
    bool ligado;
    
public:
    // Construtor
    Carro(string m, string mod) {
        marca = m;
        modelo = mod;
        velocidade = 0;
        ligado = false;
    }
    
    void ligar() {
        if (!ligado) {
            ligado = true;
            cout << "🔑 " << marca << " " << modelo << " ligado!" << endl;
        } else {
            cout << "⚠️ Carro já está ligado!" << endl;
        }
    }
    
    void acelerar(int incremento) {
        if (ligado) {
            velocidade += incremento;
            cout << "🏎️ Acelerando! Velocidade: " << velocidade << " km/h" << endl;
        } else {
            cout << "❌ Ligue o carro primeiro!" << endl;
        }
    }
    
    void mostrarStatus() {
        cout << "\n📊 STATUS DO VEÍCULO" << endl;
        cout << "=====================" << endl;
        cout << "🚗 Modelo: " << marca << " " << modelo << endl;
        cout << "⚡ Estado: " << (ligado ? "Ligado" : "Desligado") << endl;
        cout << "🏁 Velocidade: " << velocidade << " km/h" << endl;
    }
};
```

### **💰 Classe ContaBancaria**
```cpp
class ContaBancaria {
private:
    string titular;
    double saldo;
    int numeroConta;
    
public:
    ContaBancaria(string nome, int numero) {
        titular = nome;
        numeroConta = numero;
        saldo = 0.0;
    }
    
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "💵 Depósito realizado! Novo saldo: R$ " 
                 << saldo << endl;
        } else {
            cout << "❌ Valor inválido para depósito!" << endl;
        }
    }
    
    bool sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "💸 Saque realizado! Saldo restante: R$ " 
                 << saldo << endl;
            return true;
        } else {
            cout << "❌ Saldo insuficiente ou valor inválido!" << endl;
            return false;
        }
    }
    
    void consultarSaldo() {
        cout << "💰 Saldo atual: R$ " << saldo << endl;
    }
    
    void mostrarDados() {
        cout << "\n🏦 DADOS DA CONTA" << endl;
        cout << "=================" << endl;
        cout << "👤 Titular: " << titular << endl;
        cout << "🔢 Conta: " << numeroConta << endl;
        cout << "💰 Saldo: R$ " << saldo << endl;
    }
};
```

---

## 🚀 **Usando as Classes**

### **Criando e Usando Objetos**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Criando objetos
    Pessoa joao("João", 25);
    Carro fusca("Volkswagen", "Fusca");
    ContaBancaria conta("Maria Silva", 12345);
    
    // Usando os objetos
    joao.apresentar();
    joao.fazerAniversario();
    
    fusca.ligar();
    fusca.acelerar(50);
    fusca.mostrarStatus();
    
    conta.depositar(1000);
    conta.sacar(200);
    conta.mostrarDados();
    
    return 0;
}
```

---

## 🎓 **Conceitos Importantes**

### **🔒 Encapsulamento**
```cpp
class Produto {
private:
    double preco;  // Protegido - não pode ser alterado diretamente
    
public:
    void setPreco(double novoPreco) {
        if (novoPreco >= 0) {  // Validação
            preco = novoPreco;
        } else {
            cout << "❌ Preço não pode ser negativo!" << endl;
        }
    }
    
    double getPreco() {
        return preco;  // Acesso controlado
    }
};
```

### **🏗️ Construtores Avançados**
```cpp
class Retangulo {
private:
    double largura, altura;
    
public:
    // Construtor padrão
    Retangulo() {
        largura = altura = 1.0;
    }
    
    // Construtor com parâmetros
    Retangulo(double l, double a) {
        largura = l;
        altura = a;
    }
    
    double calcularArea() {
        return largura * altura;
    }
    
    void mostrarDimensoes() {
        cout << "📐 Largura: " << largura 
             << "m, Altura: " << altura << "m" << endl;
        cout << "📊 Área: " << calcularArea() << "m²" << endl;
    }
};
```

---

## 🎯 **Exercícios Práticos**

### **🌟 Nível Iniciante**
1. **Classe Animal**: Crie uma classe com nome, espécie e métodos para comer e dormir
2. **Classe Livro**: Implemente título, autor, páginas e método para ler

### **⭐ Nível Intermediário**
3. **Classe Estudante**: Nome, notas e métodos para calcular média
4. **Classe Funcionario**: Dados pessoais, salário e métodos para promoção

### **🌟 Nível Avançado**
5. **Sistema de Loja**: Classes Produto, Cliente e Venda interagindo
6. **Jogo Simples**: Classe Personagem com atributos e habilidades

---

## 🔧 **Boas Práticas e Dicas**

### **✅ Faça Sempre**
- Use nomes descritivos para classes e métodos
- Mantenha atributos privados
- Crie construtores apropriados
- Organize métodos por funcionalidade

### **❌ Evite**
- Classes muito grandes (muitas responsabilidades)
- Atributos públicos sem controle
- Métodos que fazem muitas coisas diferentes
- Nomes genéricos como "Classe1"

### **💡 Dicas de Ouro**
```cpp
// Bom: Nome claro e específico
class ContadorDeVisitas {
    // Implementação
};

// Bom: Método faz uma coisa específica
void calcularSalarioComBonus() {
    // Cálculo específico
}

// Bom: Validação nos métodos
void setIdade(int novaIdade) {
    if (novaIdade >= 0 && novaIdade <= 150) {
        idade = novaIdade;
    }
}
```

---

## 🏆 **Projeto Prático: Sistema de Biblioteca**

### **Classe Completa**
```cpp
class Livro {
private:
    string titulo;
    string autor;
    bool disponivel;
    int codigo;
    
public:
    Livro(string t, string a, int c) {
        titulo = t;
        autor = a;
        codigo = c;
        disponivel = true;
    }
    
    bool emprestar() {
        if (disponivel) {
            disponivel = false;
            cout << "📚 Livro '" << titulo << "' emprestado!" << endl;
            return true;
        } else {
            cout << "❌ Livro não disponível!" << endl;
            return false;
        }
    }
    
    void devolver() {
        disponivel = true;
        cout << "📥 Livro '" << titulo << "' devolvido!" << endl;
    }
    
    void mostrarInfo() {
        cout << "\n📖 INFORMAÇÕES DO LIVRO" << endl;
        cout << "========================" << endl;
        cout << "📝 Título: " << titulo << endl;
        cout << "✍️  Autor: " << autor << endl;
        cout << "🔢 Código: " << codigo << endl;
        cout << "📍 Status: " << (disponivel ? "Disponível" : "Emprestado") << endl;
    }
};
```

---

## 🎓 **Resumo Final**

A Programação Orientada a Objetos em C++ oferece:

- 🏗️ **Estruturação** clara e organizada do código
- 🔄 **Reutilização** eficiente através de classes
- 🛡️ **Proteção** de dados com encapsulamento
- 🎯 **Modelagem** natural de problemas reais

**Conceitos Essenciais:**
- **Classes**: Moldes para criar objetos
- **Objetos**: Instâncias das classes
- **Atributos**: Características dos objetos  
- **Métodos**: Ações que os objetos podem realizar

---

*"Uma classe bem projetada é a base de um software extraordinário!"* 💻✨
