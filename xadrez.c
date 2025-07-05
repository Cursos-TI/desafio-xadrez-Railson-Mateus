#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para o número de casas que cada peça se move
#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    // Bispo se move na diagonal superior direita: combinação de Cima + Direita
    int i = 0;
    while (i < BISPO_PASSOS) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre:\n");
    // Torre se move 5 casas para a direita
    for (int j = 0; j < TORRE_PASSOS; j++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha:\n");
    // Rainha se move 8 casas para a esquerda
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_PASSOS);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
