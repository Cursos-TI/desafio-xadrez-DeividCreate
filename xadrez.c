

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


    #include <stdio.h>


                   // Declaração das variaveis 

const int PASSOS_BISPO  = 5;   // Bispo: 5 casas na diagonal superior direita
const int PASSOS_TORRE  = 5;   // Torre: 5 casas para a direita
const int PASSOS_RAINHA = 8;   // Rainha: 8 casas para a esquerda

int main() {

    
    //  BISPO - Diagonal superior direita = Cima + Direita ao mesmo tempo
   
    printf("=== Movimento do Bispo ===\n");

    for (int i = 1; i <= PASSOS_BISPO; i++) {
        printf("Passo %d: Cima / Direita (Diagonal)\n", i);
    }

    printf("\n");

    
    // TORRE - Direita (somente horizontal)
   
    printf("=== Movimento da Torre ===\n");

    int contador = 1;
    while (contador <= PASSOS_TORRE) {
        printf("Passo %d: Direita\n", contador);
        contador++;
    }

    printf("\n");

   
    // RAINHA - Esquerda (horizontal)
   
    printf("=== Movimento da Rainha ===\n");

    int passo = 1;
    do {
        printf("Passo %d: Esquerda\n", passo);
        passo++;
    } while (passo <= PASSOS_RAINHA);

    printf("\n=== Fim da Execução ===\n");

    return 0;
}


