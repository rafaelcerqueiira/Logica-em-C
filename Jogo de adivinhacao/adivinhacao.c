#include <stdio.h>//biblioteca para usar a função printf() e scanf()
#include <stdlib.h>//biblioteca para usar a função rand() e srand()
#include <time.h>//biblioteca para gerar números aleatórios

int main(){


    //variáveis
    int numerosecreto;//variável para armazenar o número secreto gerado aleatoriamente
    int chute;//variável para armazenar o chute do jogador
    int tentativas;//variável para armazenar o número de tentativas do jogador

    //gerar número secreto aleatório entre 1 e 100
    //srand() é usada para definir a semente para a geração de números aleatórios,
    //usando o tempo atual como semente
    srand(time(NULL));

    //rand gera um numero aleatorio 
    // % 100 gera um numero entre 0 e 99, e somando 1 para obter um número entre 1 e 100
    numerosecreto = rand() % 100 + 1;

    tentativas = 0;//inicializa o número de tentativas

    //exibir cabeçalho do jogo
    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");
    
    //pedir o primeiro chute do jogador antes do loop
    printf("Digite seu chute: ");
    scanf("%d", &chute);

    //contar a primeira tentativa
    tentativas = tentativas + 1;
    // Repetir enquanto o jogador nao acertar o numero
    while (chute != numerosecreto) {
 
        // Dar uma dica se o chute foi muito baixo ou muito alto
        if (chute < numerosecreto) {
            printf("Muito baixo! Tente um numero maior.\n");
        } else {
            printf("Muito alto! Tente um numero menor.\n");
        }
         // Pedir um novo chute
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        // Contar a tentativas
        tentativas = tentativas + 1;
}
    //loop fecha quando o jogador adivinha o número secreto
    printf("Parabéns! Você adivinhou o número secreto %d \n", numerosecreto);
    printf("Número de tentativas: %d\n", tentativas);

    return 0;
}