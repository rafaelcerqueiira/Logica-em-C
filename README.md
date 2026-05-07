# 🧠 Logica-em-C

Uma coleção de projetos desenvolvidos em linguagem **C**, focados em lógica de programação, estruturas de controle e boas práticas para iniciantes.

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue?style=flat-square&logo=c)
![Status](https://img.shields.io/badge/Status-Em%20desenvolvimento-yellow?style=flat-square)
![Licença](https://img.shields.io/badge/Licença-MIT-green?style=flat-square)

---

## 📋 Índice

- [Sobre o Repositório](#-sobre-o-repositório)
- [Projetos](#️-projetos)
- [Como Compilar e Executar](#️-como-compilar-e-executar)
- [Detalhes dos Projetos](#-detalhes-dos-projetos)
  - [🧮 Calculadora no Terminal](#-calculadora-no-terminal)
  - [🎲 Jogo de Adivinhação](#-jogo-de-adivinhação)
  - [✂️ Jokenpo](#️-jokenpo)
  - [🃏 Super Trunfo](#-super-trunfo)
- [Estrutura do Repositório](#-estrutura-do-repositório)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)
- [Limitações Gerais](#️-limitações-gerais)
- [Autor](#️-autor)

---

## 📖 Sobre o Repositório

Este repositório reúne projetos práticos escritos em **C puro**, desenvolvidos com foco em **lógica de programação**. Cada projeto aborda conceitos fundamentais como entrada e saída de dados, estruturas de decisão, laços de repetição e geração de números aleatórios.

O repositório é de natureza **educacional** e serve como portfólio de evolução em C, sendo ideal para iniciantes que queiram ver exemplos reais e funcionais de programas em terminal.

---

## 🗂️ Projetos

| Projeto                    | Descrição                                                        | Conceitos Abordados                          |
|----------------------------|------------------------------------------------------------------|----------------------------------------------|
| 🧮 Calculadora no Terminal  | Realiza as 4 operações matemáticas básicas via terminal          | `switch`, validação de entrada, `double`     |
| 🎲 Jogo de Adivinhação      | Adivinhe o número secreto com dicas e contador de tentativas     | `while`, `rand`, `srand`, lógica condicional |
| ✂️ Jokenpo                 | Pedra, Papel e Tesoura contra o computador                       | `switch`, `rand`, `srand`, `if/else`         |
| 🃏 Super Trunfo             | Batalha entre duas cartas de cidades com atributos reais         | variáveis compostas, cálculos, comparações   |

---

## ⚙️ Como Compilar e Executar

### Pré-requisitos

- Compilador **GCC** instalado
- Terminal / Prompt de Comando

### Compilação (padrão para todos os projetos)

Acesse a pasta do projeto desejado e compile:

```bash
cd "nome-da-pasta"
gcc main.c -o programa
```

### Execução

```bash
./programa
```

> 💡 No **Windows**, o executável gerado será `programa.exe`. Execute com `programa.exe` no terminal (via MinGW, MSYS2 ou WSL).

---

## 🔍 Detalhes dos Projetos

---

### 🧮 Calculadora no Terminal

**Pasta:** `Calculadora no Terminal/`

Uma calculadora simples que executa as quatro operações matemáticas básicas com números reais.

| Opção | Operação      | Observação                               |
|-------|---------------|------------------------------------------|
| 1     | Adição        | Suporta números decimais (`double`)      |
| 2     | Subtração     | Suporta números decimais (`double`)      |
| 3     | Multiplicação | Suporta números decimais (`double`)      |
| 4     | Divisão       | Valida divisão por zero antes de operar  |
| 0     | Sair          | Encerra o programa                       |

**Fluxo:**
```
Menu de operações (0–4)
  └── Validação da opção (while)
        └── Entrada dos dois números
              └── Cálculo e exibição do resultado (%.2lf)
```

> ⚠️ **Atenção:** O programa executa apenas uma operação por execução — não há loop para calcular novamente sem reiniciar.

---

### 🎲 Jogo de Adivinhação

**Pasta:** `Jogo de adivinhacao/`

O computador sorteia um número entre **1 e 100** e o jogador tenta adivinhar com dicas a cada tentativa.

| Funcionalidade        | Descrição                                                     |
|-----------------------|---------------------------------------------------------------|
| 🎯 Número aleatório   | Gerado com `rand() % 100 + 1` e semente `srand(time(NULL))`  |
| 💬 Dicas              | Informa se o chute foi muito alto ou muito baixo              |
| 🔢 Contador           | Registra e exibe o total de tentativas ao acertar             |

**Fluxo:**
```
Gera número secreto (1–100)
  └── Jogador chuta
        └── [while chute != secreto]
              ├── "Muito baixo!" → novo chute
              └── "Muito alto!"  → novo chute
  └── Acertou! Exibe parabéns + número de tentativas
```

> ⚠️ **Atenção:** Não há limite de tentativas — o jogo continua até o jogador acertar.

---

### ✂️ Jokenpo

**Pasta:** `Jokenpo/`

Jogo clássico de Pedra, Papel e Tesoura: o jogador escolhe sua jogada e o computador sorteia a dele.

| Funcionalidade          | Descrição                                                      |
|-------------------------|----------------------------------------------------------------|
| 🖐️ Escolha do jogador   | Entrada numérica: 1=Pedra, 2=Papel, 3=Tesoura                  |
| 🤖 Jogada do computador | Sorteio aleatório com `rand() % 3 + 1`                         |
| 🏆 Resultado            | Detecta vitória, derrota ou empate e exibe a mensagem correta  |

**Tabela de resultados:**

| Jogador | Computador | Resultado        |
|---------|------------|------------------|
| Pedra   | Tesoura    | Jogador vence    |
| Papel   | Pedra      | Jogador vence    |
| Tesoura | Papel      | Jogador vence    |
| Igual   | Igual      | Empate           |
| Demais  | —          | Computador vence |

> ⚠️ **Atenção:** Apenas uma rodada por execução. Entradas inválidas exibem "Opção inválida." e encerram o programa.

---

### 🃏 Super Trunfo

**Pasta:** `Super Trunfo/`

Simulação do clássico jogo de cartas **Super Trunfo** com dados de cidades. Os dois jogadores cadastram suas cartas manualmente e escolhem atributos para disputar.

**Atributos de cada carta:**

| Atributo              | Tipo          | Calculado automaticamente? |
|-----------------------|---------------|----------------------------|
| Estado                | Texto         | ❌                          |
| Código                | Texto         | ❌                          |
| Nome da cidade        | Texto         | ❌                          |
| População             | Inteiro longo | ❌                          |
| Área (km²)            | Real          | ❌                          |
| PIB                   | Real          | ❌                          |
| Pontos turísticos     | Inteiro       | ❌                          |
| Densidade demográfica | Real          | ✅                          |
| PIB per capita        | Real          | ✅                          |
| Superpoder            | Real          | ✅                          |

**Fórmulas calculadas automaticamente:**
```
Densidade demográfica = Populacao / Area
PIB per capita        = PIB / Populacao
Superpoder            = Populacao + Area + PIB + Pontos + PIB_per_capita + (1 / Densidade)
```

**Fluxo:**
```
Cadastro Carta 1
  └── Cadastro Carta 2
        └── Exibição completa das duas cartas
              └── Jogador escolhe 2 atributos para comparar (obrigatoriamente diferentes)
                    └── Resultado de cada comparação exibido separadamente
```

🔄 A **densidade demográfica** é o único atributo em que o **menor valor vence** — menor densidade indica território mais vasto por habitante.

> ⚠️ **Atenção:** As duas comparações são independentes — não há sistema de pontuação acumulada entre elas.

---

## 💾 Estrutura do Repositório

```
Logica-em-C/
│
├── Calculadora no Terminal/
│   └── main.c
│
├── Jogo de adivinhacao/
│   └── main.c
│
├── Jokenpo/
│   └── main.c
│
├── Super Trunfo/
│   └── main.c
│
└── .gitignore
```

> ⚠️ **Atenção:** Nenhum projeto gera arquivos externos. Todos os dados são processados em memória e descartados ao encerrar o programa.

---

## 🧱 Tecnologias Utilizadas

| Biblioteca   | Uso                                                 | Projetos que utilizam                |
|--------------|-----------------------------------------------------|--------------------------------------|
| `<stdio.h>`  | Entrada e saída padrão (`printf`, `scanf`)          | Todos                                |
| `<stdlib.h>` | Geração de números aleatórios (`rand`, `srand`)     | Jokenpo, Jogo de Adivinhação         |
| `<time.h>`   | Semente aleatória baseada no tempo (`time(NULL)`)   | Jokenpo, Jogo de Adivinhação         |

---

## ⚠️ Limitações Gerais

- Todos os projetos executam **uma sessão por execução** — sem loop de retorno ao menu principal após concluir uma ação.
- Nenhum projeto salva dados entre execuções — sem histórico, placar ou persistência.
- Entradas do tipo errado (ex: letras onde se espera número) podem causar comportamento inesperado no `scanf`.
- Campos de texto com espaços funcionam no Super Trunfo via `%[^\n]`, mas os demais projetos não suportam espaços em campos de texto.

---

## 👨‍💻 Autor

Desenvolvido por **rafaelcerqueiira** como portfólio de estudos em lógica de programação com C.
Fique à vontade para explorar, estudar e sugerir melhorias! 🚀

[![GitHub](https://img.shields.io/badge/GitHub-rafaelcerqueiira-181717?style=flat-square&logo=github)](https://github.com/rafaelcerqueiira)