# 🃏 Super Trunfo - Cidades do Brasil

Jogo de cartas desenvolvido em C que compara atributos de cidades brasileiras. Projeto desenvolvido como exercício de lógica de programação.

## 📋 Funcionalidades

- Cadastro de 2 cartas com dados reais de cidades brasileiras
- Cálculo automático de densidade populacional e PIB per capita
- Cálculo do superpoder de cada carta
- Comparação de dois atributos escolhidos pelo jogador
- Validação de entradas com mensagens de erro

## 🎮 Atributos disponíveis para comparação

| # | Atributo | Critério de vitória |
|---|----------|-------------------|
| 1 | População | Maior vence |
| 2 | Área | Maior vence |
| 3 | PIB | Maior vence |
| 4 | Pontos turísticos | Maior vence |
| 5 | Densidade demográfica | Menor vence |

## 🚀 Como compilar e executar

### Pré-requisitos
- Compilador GCC instalado

### Compilar
```bash
gcc -o supertrunfo main.c
```

### Executar
```bash
./supertrunfo
```

## 🗂️ Estrutura do projeto

```
super-trunfo/
├── main.c       # Código fonte principal
└── README.md    # Este arquivo
```

## 📚 Conceitos utilizados

- Variáveis e tipos de dados (`int`, `float`, `unsigned long int`, `char`)
- Entrada e saída com `scanf` e `printf`
- Estruturas de repetição (`while`)
- Estruturas de seleção (`if/else`, `switch`)
- Operações aritméticas para cálculos derivados
