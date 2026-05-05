# Jogo da Adivinhacao em C

Jogo de terminal desenvolvido em C como projeto de portfólio para praticar lógica de programação.

## Como jogar

O programa gera um número secreto aleatório entre 1 e 100. O jogador deve tentar adivinhar o número e o programa dá dicas se o chute foi alto ou baixo, até o jogador acertar.

## Como compilar e executar

**Windows (terminal do VS Code):**
```bash
gcc adivinhacao.c -o adivinhacao.exe
./adivinhacao.exe
```

**Linux / Mac:**
```bash
gcc adivinhacao.c -o adivinhacao
./adivinhacao
```

## Exemplo de uso

```
Bem-vindo ao Jogo de Adivinhacao!
Tente adivinhar o numero secreto entre 1 e 100.
Digite seu chute: 50
Muito alto! Tente um numero menor.
Digite seu chute: 25
Muito baixo! Tente um numero maior.
Digite seu chute: 37
Parabens! Voce adivinhou o numero secreto 37
Numero de tentativas: 3
```

## Conceitos praticados

- `printf` e `scanf` para entrada e saída de dados
- `srand` e `rand` para geração de números aleatórios
- `if / else` para dar dicas ao jogador
- `while` para repetir o jogo até o jogador acertar
- Contador de tentativas com variável inteira

## Autor

Rafael
