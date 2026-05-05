# Calculadora Simples em C

Calculadora de terminal desenvolvida em C como projeto de portfólio para praticar lógica de programação.

## Funcionalidades

- Adição
- Subtração
- Multiplicação
- Divisão (com proteção contra divisão por zero)
- Validação de opção inválida

## Como compilar e executar

**Linux / Mac:**
```bash
gcc c1.c -o calculadora
./calculadora
```

**Windows (terminal do VS Code):**
```bash
gcc c1.c -o c1.exe
./c1.exe
```

## Exemplo de uso

```
==============================
|  Calculadora Simples em C  |
==============================
1. Adicao
2. Subtracao
3. Multiplicacao
4. Divisao
0. Sair
Escolha uma operacao (0-4): 1
Voce escolheu Adicao.
Digite o primeiro numero: 10
Digite o segundo numero: 5
O resultado da adicao e: 15.00
```

## Conceitos praticados

- `printf` e `scanf` para entrada e saída de dados
- `if / else` para validação e tratamento de erros
- `switch` para controle do menu de operações
- `while` para revalidação de opção inválida

## Autor

Rafael