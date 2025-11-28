

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


 // Desafio de Xadrez - MateCheck
#include <stdio.h>

// Quantidade de passos de cada peça
const int PASSOS_TORRE  = 5;  // 5 passos para a direita
const int PASSOS_BISPO  = 5;  // 5 passos na diagonal cima/direita
const int PASSOS_RAINHA = 8;  // 8 passos para a esquerda
const int PASSOS_CAVALO = 2;  // 2 cima + 1 direita


// TORRE – Move apenas para a direita
void mover_Torre(int casas)
{
    if (casas == 0) {
        printf("Torre terminou o movimento.\n\n");
        return;
    }

    int passo = PASSOS_TORRE - casas + 1;
    printf("Passo %d = Direita\n", passo);

    mover_Torre(casas - 1);   // chama de novo diminuindo 1 casa
}


// RAINHA – Move apenas para a esquerda
void mover_Rainha(int casas)
{
    if (casas == 0) {
        printf("Rainha terminou o movimento.\n\n");
        return;
    }

    int passo = PASSOS_RAINHA - casas + 1;
    printf("Passo %d = Esquerda\n", passo);

    mover_Rainha(casas - 1);
}


// BISPO – Move para cima/direita (diagonal)
void mover_Bispo(int casas)
{
    if (casas == 0) {
        printf("Bispo terminou o movimento.\n\n");
        return;
    }

    int passo = PASSOS_BISPO - casas + 1;
    printf("Passo %d = Cima / Direita\n", passo);

    mover_Bispo(casas - 1);
}


// CAVALO – Movimento em L (2 cima + 1 direita)
void mover_Cavalo()
{
    printf("Cavalo faz movimento em L (2 Cima, 1 Direita)\n");

    int total = PASSOS_CAVALO + 1;  // 2 cima + 1 direita = 3 passos

    for (int i = 1; i <= total; i++) {

        if (i <= PASSOS_CAVALO) {
            printf("Passo %d = Cima\n", i);
            continue;   // vai para o próximo passo
        }

        printf("Passo %d = Direita\n", i);
        break;   // encerra o loop
    }

    printf("Cavalo terminou o movimento.\n\n");
}



// MAIN – Chama todas as funções
int main()
{
    printf("==== TORRE ====\n");
    mover_Torre(PASSOS_TORRE);

    printf("==== BISPO ====\n");
    mover_Bispo(PASSOS_BISPO);

    printf("==== RAINHA ====\n");
    mover_Rainha(PASSOS_RAINHA);

    printf("==== CAVALO ====\n");
    mover_Cavalo();

    return 0;
}
