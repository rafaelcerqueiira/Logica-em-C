# ✂️ Jogo de Jokenpô em C

Um jogo clássico de **Pedra, Papel e Tesoura** no terminal, onde o jogador enfrenta o computador em uma rodada aleatória.

---

## 📋 Índice

- [Sobre o Projeto](#-sobre-o-projeto)
- [Funcionalidades](#-funcionalidades)
- [Como Compilar e Executar](#-como-compilar-e-executar)
- [Fluxo Principal](#️-fluxo-principal)
- [Detalhes das Funcionalidades](#-detalhes-das-funcionalidades)
- [Armazenamento de Dados](#-armazenamento-de-dados)
- [Limitações e Observações](#️-limitações-e-observações)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)

---

## 📖 Sobre o Projeto

Este projeto é uma implementação simples do clássico jogo **Jokenpô (Pedra, Papel e Tesoura)** em linguagem C, executado diretamente no terminal. O jogador escolhe sua jogada e o computador sorteia a sua aleatoriamente — o resultado é exibido na tela imediatamente.

Desenvolvido para fins **educacionais**, ideal para praticar conceitos como entrada de dados, estruturas de decisão (`switch`, `if/else`) e geração de números aleatórios em C.

---

## ✅ Funcionalidades

| Funcionalidade            | Descrição                                                   |
|---------------------------|-------------------------------------------------------------|
| 🖐️ Escolha do jogador     | O jogador seleciona pedra, papel ou tesoura via teclado     |
| 🤖 Jogada do computador   | O computador sorteia uma jogada aleatória a cada rodada     |
| 🏆 Verificação de resultado | O sistema determina se houve vitória, derrota ou empate   |
| 🎲 Aleatoriedade real     | Semente baseada no tempo (`srand(time(NULL))`) para variação |

---

## ⚙️ Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado
- Terminal / Prompt de Comando

### Compilação

```bash
gcc jokenpo.c -o jokenpo
```

### Execução

```bash
./jokenpo
```

> 💡 No Windows, use `jokenpo.exe` após compilar com o GCC (via MinGW ou similar).

---

## 🗂️ Fluxo Principal

```
Início
  │
  ▼
Exibe menu de opções (1=pedra, 2=papel, 3=tesoura)
  │
  ▼
Jogador digita sua escolha
  │
  ▼
Computador sorteia escolha aleatória (rand() % 3 + 1)
  │
  ▼
Exibe escolha do jogador e do computador
  │
  ▼
Compara as escolhas
  ├── Iguais         → Empate
  ├── Jogador vence  → "Parabéns, você ganhou!"
  └── Computador vence → "Você perdeu!"
  │
  ▼
Fim
```

---

## 🔍 Detalhes das Funcionalidades

### ✋ Escolha do Jogador

- O jogador informa um número inteiro via `scanf`:
  - `1` → Pedra
  - `2` → Papel
  - `3` → Tesoura
- Qualquer outro valor cai no `default` do `switch`, exibindo **"Opção inválida."**
- Não há reentrada — o programa encerra após a rodada.

### 🤖 Jogada do Computador

- Gerada com `rand() % 3 + 1`, produzindo um valor entre 1 e 3.
- A semente é inicializada com `srand(time(NULL))`, garantindo resultados diferentes a cada execução.

### 🏆 Verificação do Resultado

🔄 A lógica de decisão compara os dois valores inteiros com `if/else if/else`:

| Jogador | Computador | Resultado        |
|---------|------------|------------------|
| Pedra   | Tesoura    | Jogador vence    |
| Papel   | Pedra      | Jogador vence    |
| Tesoura | Papel      | Jogador vence    |
| Qualquer | Igual     | Empate           |
| Demais  | —          | Computador vence |

---

## 💾 Armazenamento de Dados

Este projeto **não utiliza arquivos ou banco de dados**. Todas as informações (escolha do jogador, escolha do computador e resultado) são processadas em memória durante a execução e descartadas ao encerrar o programa.

> ⚠️ **Atenção:** Nenhum histórico de partidas é salvo. Cada execução é uma rodada independente.

---

## ⚠️ Limitações e Observações

- O jogo executa **apenas uma rodada por execução** — não há loop para jogar novamente sem reabrir o programa.
- **Entradas inválidas** (letras, símbolos, números fora de 1–3) não são tratadas com reentrada — o programa exibe "Opção inválida." e encerra.
- A condição de vitória usa `&&` e `||` sem parênteses de agrupamento explícitos entre os pares, o que pode gerar ambiguidade de precedência — recomenda-se adicionar parênteses para maior clareza e segurança.
- Não há modo multiplayer nem placar acumulado entre partidas.

---

## 🧱 Tecnologias Utilizadas

| Biblioteca   | Uso                                               |
|--------------|---------------------------------------------------|
| `<stdio.h>`  | Entrada e saída padrão (`printf`, `scanf`)        |
| `<stdlib.h>` | Geração de números aleatórios (`rand`, `srand`)   |
| `<time.h>`   | Semente aleatória baseada no tempo (`time`)       |

---

## 👨‍💻 Autor

Desenvolvido como projeto educacional em linguagem C. Sinta-se à vontade para expandir — que tal adicionar um placar, múltiplas rodadas ou o modo melhor de 3? 🚀