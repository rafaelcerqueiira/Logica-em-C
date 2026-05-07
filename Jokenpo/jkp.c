#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaplayer, escolhacomputer;
    srand(time(NULL));

    printf("=== Jogo de Jokenpô ===\n");
    printf("Escolha uma opção:\n");
    printf("1 = pedra\n");
    printf("2 = papel\n");
    printf("3 = tesoura\n");
    printf("Opção selecionada: ");
    scanf("%d", &escolhaplayer);

    escolhacomputer = rand() % 3 + 1;

    switch (escolhaplayer) {
        case 1:
            printf("Jogador: pedra\n");
            break;
        case 2:
            printf("Jogador: papel\n");
            break;
        case 3:
            printf("Jogador: tesoura\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    switch (escolhacomputer) {
        case 1:
            printf("Computador: pedra\n");
            break;
        case 2:
            printf("Computador: papel\n");
            break;
        case 3:
            printf("Computador: tesoura\n");
            break;

        default:
            break;
    }

    if (escolhacomputer == escolhaplayer) {
        printf("== Empate!! ==\n");
    } else if ((escolhaplayer == 1) && (escolhacomputer == 3) ||
               (escolhaplayer == 2) && (escolhacomputer == 1) ||
               (escolhaplayer == 3) && (escolhacomputer == 2)) {
        printf("Parabéns, você ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    }

    return 0;
}