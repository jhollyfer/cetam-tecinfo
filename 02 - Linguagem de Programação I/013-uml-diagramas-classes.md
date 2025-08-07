# 📊 UML e Diagramas de Classes em C++
*Transformando ideias visuais em código elegante*

---

## 🎯 **Objetivos de Aprendizagem**

### **Habilidades Técnicas**
- Criar diagramas UML precisos e detalhados
- Traduzir diagramas em código C++ funcional
- Representar classes visualmente com clareza

### **Competências Socioemocionais**
- **Determinação**: Persistência na modelagem de sistemas
- **Atenção aos Detalhes**: Precisão na representação visual
- **Comunicação Visual**: Expressar ideias através de diagramas

---

## 🌟 **O que é UML?**

### **Conceito Fundamental**
**UML** (Unified Modeling Language) é uma linguagem visual para:
- 🎨 **Modelar** sistemas de software
- 📋 **Documentar** estruturas de classes
- 🗺️ **Planejar** antes de programar
- 🤝 **Comunicar** ideias entre desenvolvedores

### **Por que usar UML?**
- 👁️ **Visualização**: Ver a estrutura antes de codificar
- 📐 **Planejamento**: Organizar ideias com clareza
- 🔍 **Detalhamento**: Capturar todos os aspectos importantes
- 👥 **Colaboração**: Linguagem comum para equipes

---

## 📐 **Anatomia de um Diagrama UML**

### **Estrutura Básica de uma Classe**
```
┌─────────────────────┐
│     NomeDaClasse    │ ← Nome da classe
├─────────────────────┤
│ - atributo1: tipo   │ ← Atributos privados (-)
│ + atributo2: tipo   │ ← Atributos públicos (+)
│ # atributo3: tipo   │ ← Atributos protegidos (#)
├─────────────────────┤
│ + método1(): tipo   │ ← Métodos públicos
│ - método2(): void   │ ← Métodos privados
│ + construtor()      │ ← Construtores
└─────────────────────┘
```

### **Símbolos e Convenções**
- **➕ `+`** = Público (acessível de qualquer lugar)
- **➖ `-`** = Privado (apenas dentro da classe)
- **🔒 `#`** = Protegido (herança - veremos depois)
- **📝 Nome:** sempre em **negrito** ou primeira letra maiúscula
- **🔧 Métodos:** incluem parâmetros e tipo de retorno

---

## 🎨 **Exemplos Práticos: Do Diagrama ao Código**

### **🚗 Exemplo 1: Classe Carro**

#### **📊 Diagrama UML**
```
┌─────────────────────┐
│        Carro        │
├─────────────────────┤
│ - marca: string     │
│ - modelo: string    │
│ - velocidade: int   │
│ - ligado: bool      │
├─────────────────────┤
│ + Carro(m:string,   │
│         mod:string) │
│ + ligar(): void     │
│ + acelerar(v:int)   │
│ + frear(): void     │
│ + getVelocidade()   │
│   : int             │
└─────────────────────┘
```

#### **💻 Código C++ Correspondente**
```cpp
class Carro {
private:
    string marca;      // - marca: string
    string modelo;     // - modelo: string
    int velocidade;    // - velocidade: int
    bool ligado;       // - ligado: bool
    
public:
    // + Carro(m:string, mod:string)
    Carro(string m, string mod) {
        marca = m;
        modelo = mod;
        velocidade = 0;
        ligado = false;
    }
    
    // + ligar(): void
    void ligar() {
        ligado = true;
        cout << "🔑 Carro ligado!" << endl;
    }
    
    // + acelerar(v:int): void
    void acelerar(int incremento) {
        if (ligado) {
            velocidade += incremento;
        }
    }
    
    // + frear(): void
    void frear() {
        velocidade = max(0, velocidade - 10);
    }
    
    // + getVelocidade(): int
    int getVelocidade() {
        return velocidade;
    }
};
```

---

### **💰 Exemplo 2: Conta Bancária**

#### **📊 Diagrama UML**
```
┌─────────────────────┐
│   ContaBancaria     │
├─────────────────────┤
│ - titular: string   │
│ - saldo: double     │
│ - numero: int       │
│ - ativa: bool       │
├─────────────────────┤
│ + ContaBancaria(    │
│     tit:string,     │
│     num:int)        │
│ + depositar(        │
│     valor:double)   │
│   : bool            │
│ + sacar(valor:      │
│     double): bool   │
│ + getSaldo():double │
│ + extrato(): void   │
│ - validarValor(     │
│     v:double): bool │
└─────────────────────┘
```

#### **💻 Código C++ Correspondente**
```cpp
class ContaBancaria {
private:
    string titular;    // - titular: string
    double saldo;      // - saldo: double
    int numero;        // - numero: int
    bool ativa;        // - ativa: bool
    
    // - validarValor(v:double): bool
    bool validarValor(double valor) {
        return valor > 0;
    }
    
public:
    // + ContaBancaria(tit:string, num:int)
    ContaBancaria(string tit, int num) {
        titular = tit;
        numero = num;
        saldo = 0.0;
        ativa = true;
    }
    
    // + depositar(valor:double): bool
    bool depositar(double valor) {
        if (validarValor(valor) && ativa) {
            saldo += valor;
            return true;
        }
        return false;
    }
    
    // + sacar(valor:double): bool
    bool sacar(double valor) {
        if (validarValor(valor) && valor <= saldo && ativa) {
            saldo -= valor;
            return true;
        }
        return false;
    }
    
    // + getSaldo(): double
    double getSaldo() {
        return saldo;
    }
    
    // + extrato(): void
    void extrato() {
        cout << "💰 Saldo atual: R$ " << saldo << endl;
    }
};
```

---

## 🚀 **Diagramas Mais Complexos**

### **🎓 Sistema Escolar**

#### **📊 Diagrama UML Completo**
```
┌─────────────────────┐
│      Estudante      │
├─────────────────────┤
│ - nome: string      │
│ - matricula: int    │
│ - notas: vector<    │
│          double>    │
│ - aprovado: bool    │
├─────────────────────┤
│ + Estudante(nome:   │
│     string, mat:int)│
│ + adicionarNota(    │
│     nota:double)    │
│ + calcularMedia():  │
│     double          │
│ + verificarStatus() │
│   : string          │
│ + mostrarBoletim()  │
│   : void            │
│ - atualizarStatus() │
│   : void            │
└─────────────────────┘
```

#### **💻 Implementação em C++**
```cpp
#include <vector>
#include <numeric>

class Estudante {
private:
    string nome;
    int matricula;
    vector<double> notas;
    bool aprovado;
    
    // - atualizarStatus(): void
    void atualizarStatus() {
        double media = calcularMedia();
        aprovado = (media >= 7.0);
    }
    
public:
    // + Estudante(nome:string, mat:int)
    Estudante(string n, int mat) {
        nome = n;
        matricula = mat;
        aprovado = false;
    }
    
    // + adicionarNota(nota:double): void
    void adicionarNota(double nota) {
        if (nota >= 0 && nota <= 10) {
            notas.push_back(nota);
            atualizarStatus();
        }
    }
    
    // + calcularMedia(): double
    double calcularMedia() {
        if (notas.empty()) return 0.0;
        
        double soma = accumulate(notas.begin(), notas.end(), 0.0);
        return soma / notas.size();
    }
    
    // + verificarStatus(): string
    string verificarStatus() {
        return aprovado ? "✅ Aprovado" : "❌ Reprovado";
    }
    
    // + mostrarBoletim(): void
    void mostrarBoletim() {
        cout << "\n📋 BOLETIM ESCOLAR" << endl;
        cout << "==================" << endl;
        cout << "👤 Nome: " << nome << endl;
        cout << "🔢 Matrícula: " << matricula << endl;
        cout << "📊 Média: " << calcularMedia() << endl;
        cout << "📈 Status: " << verificarStatus() << endl;
    }
};
```

---

## 🎯 **Exercícios Práticos**

### **🌟 Nível Iniciante**
1. **Classe Produto**: Desenhe o diagrama UML e implemente
   - Atributos: nome, preço, estoque
   - Métodos: vender, repor, mostrarInfo

2. **Classe Retângulo**: 
   - Atributos: largura, altura
   - Métodos: calcularArea, calcularPerimetro

### **⭐ Nível Intermediário**
3. **Sistema de Biblioteca**:
   - Classe Livro com empréstimo/devolução
   - Métodos privados para validação

4. **Conta Poupança**:
   - Herda de ContaBancaria
   - Adiciona rendimento mensal

### **🌟 Nível Avançado**
5. **Sistema de E-commerce**:
   - Classes: Cliente, Produto, Pedido
   - Relacionamentos entre classes

6. **Jogo RPG**:
   - Classe Personagem com atributos e habilidades
   - Sistema de batalha

---

## 🔧 **Ferramentas e Boas Práticas**

### **🛠️ Ferramentas para UML**
- **💻 Gratuitas**: Draw.io, Lucidchart (versão free)
- **📝 Simples**: Até mesmo papel e caneta!
- **🎨 Profissionais**: Visual Paradigm, Enterprise Architect

### **✅ Boas Práticas**
- **Nomes claros** e descritivos
- **Organização visual** limpa
- **Detalhamento adequado** ao objetivo
- **Consistência** na nomenclatura

### **💡 Dicas de Ouro**
```cpp
// ✅ Bom: Corresponde exatamente ao diagrama
class Produto {
private:
    string nome;        // Exatamente como no UML
    double preco;       // Tipos consistentes
    int estoque;        // Nomes idênticos
    
public:
    bool vender(int qtd);    // Assinatura igual ao UML
    void repor(int qtd);     // Parâmetros conforme diagrama
};

// ❌ Evite: Divergir do diagrama sem motivo
class Produto {
    string nomeProduto;      // Nome diferente do UML
    float valor;             // Tipo diferente
    // Métodos com nomes diferentes...
};
```

---

## 🎨 **Projeto Completo: Sistema de Pets**

### **📊 Diagrama UML**
```
┌─────────────────────┐
│        Pet          │
├─────────────────────┤
│ - nome: string      │
│ - especie: string   │
│ - idade: int        │
│ - fome: int         │
│ - felicidade: int   │
├─────────────────────┤
│ + Pet(nome:string,  │
│      esp:string)    │
│ + alimentar(): void │
│ + brincar(): void   │
│ + dormir(): void    │
│ + getStatus():      │
│     string          │
│ + mostrarInfo():    │
│     void            │
│ - atualizarEstado() │
│   : void            │
└─────────────────────┘
```

### **💻 Implementação Completa**
```cpp
class Pet {
private:
    string nome;
    string especie;
    int idade;
    int fome;        // 0-100 (0 = sem fome)
    int felicidade;  // 0-100 (100 = muito feliz)
    
    void atualizarEstado() {
        // Logica para simular passagem do tempo
        if (fome < 100) fome += 5;
        if (felicidade > 0) felicidade -= 3;
    }
    
public:
    Pet(string n, string esp) {
        nome = n;
        especie = esp;
        idade = 0;
        fome = 50;
        felicidade = 80;
    }
    
    void alimentar() {
        fome = max(0, fome - 30);
        felicidade = min(100, felicidade + 10);
        cout << "🍖 " << nome << " foi alimentado!" << endl;
    }
    
    void brincar() {
        felicidade = min(100, felicidade + 25);
        fome = min(100, fome + 10);
        cout << "🎾 " << nome << " está brincando!" << endl;
    }
    
    void dormir() {
        felicidade = min(100, felicidade + 15);
        cout << "😴 " << nome << " dormiu bem!" << endl;
    }
    
    string getStatus() {
        if (fome > 80) return "🥺 Com muita fome";
        if (felicidade < 20) return "😢 Muito triste";
        if (felicidade > 80) return "😊 Muito feliz";
        return "😐 Normal";
    }
    
    void mostrarInfo() {
        cout << "\n🐾 INFORMAÇÕES DO PET" << endl;
        cout << "=====================" << endl;
        cout << "📛 Nome: " << nome << endl;
        cout << "🦴 Espécie: " << especie << endl;
        cout << "🎂 Idade: " << idade << " anos" << endl;
        cout << "🍽️ Fome: " << fome << "/100" << endl;
        cout << "😊 Felicidade: " << felicidade << "/100" << endl;
        cout << "📊 Status: " << getStatus() << endl;
    }
};
```

---

## 🎓 **Resumo Final**

### **🏆 Principais Aprendizados**
UML e Diagramas de Classes oferecem:

- 🎨 **Visualização** clara da estrutura de classes
- 📋 **Documentação** profissional do sistema
- 🗺️ **Planejamento** antes da implementação
- 🤝 **Comunicação** eficaz entre desenvolvedores

### **📐 Elementos Essenciais**
- **Nome da Classe**: Identifica o que será modelado
- **Atributos**: Características (dados) da classe
- **Métodos**: Comportamentos (ações) da classe
- **Visibilidade**: Controle de acesso (+, -, #)

### **🔄 Processo de Trabalho**
1. **📊 Análise**: Identificar o que modelar
2. **🎨 Diagrama**: Criar representação visual
3. **💻 Código**: Implementar fielmente o diagrama
4. **🔍 Revisão**: Verificar correspondência

---

*"Um bom diagrama UML vale mais que mil linhas de documentação!"* 📊✨
