#include <stdio.h>

int main() {

    // ==================== VARIÁVEIS CARTA 1 ====================
    char estado1[30];
    char codigo1[10];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidadep1;
    float pibpercapita1;
    float superpoder1;

    // ==================== VARIÁVEIS CARTA 2 ====================
    char estado2[30];
    char codigo2[10];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidadep2;
    float pibpercapita2;
    float superpoder2;

    // ==================== CARTA 1 ====================
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("CARTA 1 INICIADA COM SUCESSO!\n\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Estado digitado: %s\n", estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("O codigo digitado foi: %s\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("O nome da cidade digitada foi: %s\n", nome1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("A populacao digitada foi: %lu\n", populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("A area digitada foi: %.2f\n", area1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib1);
    printf("O valor do PIB digitado foi: %.2f\n", pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    printf("O numero de pontos digitado foi: %d\n\n", pontos1);
    printf("CARTA 1 FINALIZADA COM SUCESSO!\n\n");

    densidadep1    = (float) populacao1 / area1;
    pibpercapita1  = (float) pib1 / populacao1;

    // ==================== CARTA 2 ====================
    char iniciar2[10];
    printf("Digite OK para iniciar a CARTA 2: ");
    scanf("%s", iniciar2);
    printf("\nCARTA 2 INICIADA COM SUCESSO!\n\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Estado digitado: %s\n", estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("O codigo digitado foi: %s\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("O nome da cidade digitada foi: %s\n", nome2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("A populacao digitada foi: %lu\n", populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("A area digitada foi: %.2f\n", area2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib2);
    printf("O valor do PIB digitado foi: %.2f\n", pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("O numero de pontos digitado foi: %d\n\n", pontos2);
    printf("CARTA 2 FINALIZADA COM SUCESSO!\n\n");

    densidadep2    = (float) populacao2 / area2;
    pibpercapita2  = (float) pib2 / populacao2;

    // ==================== RESULTADO ====================
    char resultado[10];
    printf("Digite OK para obter o resultado das cartas: ");
    scanf("%s", resultado);

    // --- Exibição Carta 1 ---
    printf("\n\nCARTA 1!\n");
    printf("Estado: %s\n",                  estado1);
    printf("Codigo: %s\n",                  codigo1);
    printf("Nome da cidade: %s\n",           nome1);
    printf("Populacao: %lu\n",              populacao1);
    printf("Area: %.2f\n",                  area1);
    printf("Valor do PIB: %.2f\n",          pib1);
    printf("Numero de pontos: %d\n",        pontos1);
    printf("Densidade populacional: %.2f\n", densidadep1);
    printf("PIB per capita: %.2f\n",        pibpercapita1);

    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1 / densidadep1);
    printf("Superpoder: %.2f\n\n",          superpoder1);

    // --- Exibição Carta 2 ---
    printf("CARTA 2!\n");
    printf("Estado: %s\n",                  estado2);
    printf("Codigo: %s\n",                  codigo2);
    printf("Nome da cidade: %s\n",           nome2);
    printf("Populacao: %lu\n",              populacao2);
    printf("Area: %.2f\n",                  area2);
    printf("Valor do PIB: %.2f\n",          pib2);
    printf("Numero de pontos: %d\n",        pontos2);
    printf("Densidade populacional: %.2f\n", densidadep2);
    printf("PIB per capita: %.2f\n",        pibpercapita2);

    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidadep2);
    printf("Superpoder: %.2f\n\n",          superpoder2);

    // ==================== COMPARAÇÃO ====================
    int comparacao;
    int comparacao2;

    printf("Finalizado! Selecione dois atributos para comparação:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Digite a primeira opção: ");
    scanf("%d", &comparacao);

    while (comparacao < 1 || comparacao > 5){
        printf("Opção inválida! Escolha uma opção de 1 a 5.\n");
        printf("Digite novamente a primeira opção: ");
        scanf("%d", &comparacao);
    }

            printf("Digite a segunda opção: ");
            scanf("%d", &comparacao2);

   while (comparacao2 <1 || comparacao2 > 5 ){
        printf("Opção inválida! Escolha uma opção de 1 a 5.\n");
        printf("Digite novamente a segunda opção: ");
        scanf("%d", &comparacao2);
    }
        
    while (comparacao == comparacao2)
    {
        printf("Opção inválida! As opções de comparação devem ser diferentes.\n");
        printf("Digite novamente a segunda opção: ");
        scanf("%d", &comparacao2);
        while(comparacao2 <1 || comparacao2 > 5){
        printf("Opção inválida! Escolha uma opção de 1 a 5.\n");
        printf("Digite novamente a segunda opção: ");
        scanf("%d", &comparacao2);
    }
    }
        // --- Comparação: Atributo 1 --
        switch (comparacao) {
            case 1:
                printf("Atributo escolhido: População\n");
                printf("Carta 1 = %s | Populacao: %lu\n", nome1, populacao1);
                printf("Carta 2 = %s | Populacao: %lu\n", nome2, populacao2);
                if (populacao1 > populacao2)      printf("== Carta 1 venceu! ==\n\n");
                else if (populacao2 > populacao1) printf("== Carta 2 venceu! ==\n\n");
                else                              printf("== Empate! ==\n\n");
                break;

            case 2:
                printf("Atributo escolhido: Área\n");
                printf("Carta 1 %s | Area: %.2f\n", nome1, area1);
                printf("Carta 2 %s | Area: %.2f\n", nome2, area2);
                if (area1 > area2)      printf("== Carta 1 venceu! ==\n\n");
                else if (area2 > area1) printf("== Carta 2 venceu! ==\n\n");
                else                   printf("== Empate! ==\n\n");
                break;

            case 3:
                printf("Atributo escolhido: PIB\n");
                printf("Carta 1 %s | PIB: %.2f\n", nome1, pib1);
                printf("Carta 2 %s | PIB: %.2f\n", nome2, pib2);
                if (pib1 > pib2)      printf("== Carta 1 venceu! ==\n\n");
                else if (pib2 > pib1) printf("== Carta 2 venceu! ==\n\n");
                else                  printf("== Empate! ==\n\n");
                break;

            case 4:
                printf("Atributo escolhido: Número de pontos turísticos\n");
                printf("Carta 1 %s | Pontos turisticos: %d\n", nome1, pontos1);
                printf("Carta 2 %s | Pontos turisticos: %d\n", nome2, pontos2);
                if (pontos1 > pontos2)      printf("== Carta 1 venceu! ==\n\n");
                else if (pontos2 > pontos1) printf("== Carta 2 venceu! ==\n\n");
                else                        printf("== Empate! ==\n\n");
                break;

            case 5:
                printf("Atributo escolhido: Densidade demográfica\n");
                printf("Carta 1 %s | Densidade: %.2f\n", nome1, densidadep1);
                printf("Carta 2 %s | Densidade: %.2f\n", nome2, densidadep2);
                if (densidadep1 < densidadep2)      printf("== Carta 1 venceu! ==\n\n");
                else if (densidadep2 < densidadep1) printf("== Carta 2 venceu! ==\n\n");
                else                                printf("== Empate! ==\n\n");
                break;

            default:
                printf("Opção inválida! Escolha uma opção de 1 a 5.\n");
                break;
        }

        // --- Comparação: Atributo 2 ---
        switch (comparacao2) {
            case 1:
                printf("Atributo escolhido: População\n");
                printf("Carta 1 = %s | Populacao: %lu\n", nome1, populacao1);
                printf("Carta 2 = %s | Populacao: %lu\n", nome2, populacao2);
                if (populacao1 > populacao2)      printf("== Carta 1 venceu! ==\n\n");
                else if (populacao2 > populacao1) printf("== Carta 2 venceu! ==\n\n");
                else                              printf("== Empate! ==\n\n");
                break;

            case 2:
                printf("Atributo escolhido: Área\n");
                printf("Carta 1 %s | Area: %.2f\n", nome1, area1);
                printf("Carta 2 %s | Area: %.2f\n", nome2, area2);
                if (area1 > area2)      printf("== Carta 1 venceu! ==\n\n");
                else if (area2 > area1) printf("== Carta 2 venceu! ==\n\n");
                else                   printf("== Empate! ==\n\n");
                break;

            case 3:
                printf("Atributo escolhido: PIB\n");
                printf("Carta 1 %s | PIB: %.2f\n", nome1, pib1);
                printf("Carta 2 %s | PIB: %.2f\n", nome2, pib2);
                if (pib1 > pib2)      printf("== Carta 1 venceu! ==\n\n");
                else if (pib2 > pib1) printf("== Carta 2 venceu! ==\n\n");
                else                  printf("== Empate! ==\n\n");
                break;

            case 4:
                printf("Atributo escolhido: Número de pontos turísticos\n");
                printf("Carta 1 %s | Pontos turisticos: %d\n", nome1, pontos1);
                printf("Carta 2 %s | Pontos turisticos: %d\n", nome2, pontos2);
                if (pontos1 > pontos2)      printf("== Carta 1 venceu! ==\n\n");
                else if (pontos2 > pontos1) printf("== Carta 2 venceu! ==\n\n");
                else                        printf("== Empate! ==\n\n");
                break;

            case 5:
                printf("Atributo escolhido: Densidade demográfica\n");
                printf("Carta 1 %s | Densidade: %.2f\n", nome1, densidadep1);
                printf("Carta 2 %s | Densidade: %.2f\n", nome2, densidadep2);
                if (densidadep1 < densidadep2)      printf("== Carta 1 venceu! ==\n\n");
                else if (densidadep2 < densidadep1) printf("== Carta 2 venceu! ==\n\n");
                else                                printf("== Empate! ==\n\n");
                break;

            default:
                printf("Opção inválida! Escolha uma opção de 1 a 5.\n");
                break;
        }
    

    return 0;
}