#include <stdio.h>

int main(){

    double num1, num2, resultado;
    int opcao;

    printf("==============================\n");
    printf("|  Calculadora Simples em C  |\n");
    printf("==============================\n");

    // Exibir o menu de operacoes
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("0. Sair\n");
    printf("Escolha uma operacao (0-4): ");
    scanf("%d", &opcao);

    // Validar a opcao escolhida
    while (opcao < 0 || opcao > 4) {
        printf("Opcao invalida!\n");
        printf("Selecione novamente: ");
        scanf("%d", &opcao);
    }

    // Executar a operacao escolhida
    switch (opcao) {

        case 0: // Sair
            printf("Encerrando... ate logo!\n");
            break;

        case 1: // Adicao
            printf("Voce escolheu Adicao.\n");
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 + num2;
            printf("O resultado da adicao e: %.2lf\n", resultado);
            break;

        case 2: // Subtracao
            printf("Voce escolheu Subtracao.\n");
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 - num2;
            printf("O resultado da subtracao e: %.2lf\n", resultado);
            break;

        case 3: // Multiplicacao
            printf("Voce escolheu Multiplicacao.\n");
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 * num2;
            printf("O resultado da multiplicacao e: %.2lf\n", resultado);
            break;

        case 4: // Divisao
            printf("Voce escolheu Divisao.\n");
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divisao e: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;

        default:
            printf("Opcao invalida. Por favor, escolha uma operacao valida.\n");
            break;
    }

    return 0;
}