#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para o número de casas que cada peça se move
#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8
#define CAVALO_MOVIMENTOS 1  // Quantas vezes o cavalo se moverá em L

// -----------------------------
// Função Recursiva: Movimento do Bispo
// Move o bispo 5 vezes na diagonal superior direita (Cima + Direita)
// -----------------------------
void mover_bispo_diagonal_cima_direita(int passos_restantes) {
    if (passos_restantes == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    // Chamada recursiva
    mover_bispo_diagonal_cima_direita(passos_restantes - 1);
}

// -----------------------------
// Função Recursiva: Movimento da Torre
// Move a torre 5 vezes para a direita
// -----------------------------
void mover_torre_direita(int passos_restantes) {
    if (passos_restantes == 0) return;

    printf("Direita\n");

    // Chamada recursiva
    mover_torre_direita(passos_restantes - 1);
}

// -----------------------------
// Função Recursiva: Movimento da Rainha
// Move a rainha 8 vezes para a esquerda
// -----------------------------
void mover_rainha_esquerda(int passos_restantes) {
    if (passos_restantes == 0) return;

    printf("Esquerda\n");

    // Chamada recursiva
    mover_rainha_esquerda(passos_restantes - 1);
}

// -----------------------------
// Função com Loops Aninhados: Movimento do Cavalo
// Move o cavalo em L: 2 para cima e 1 para a direita
// Utiliza for com múltiplas variáveis e comandos break/continue
// -----------------------------
void mover_cavalo_em_L(int movimentos_em_L) {
    printf("Movimentação do Cavalo em L:\n");

    for (int movimento = 1; movimento <= movimentos_em_L; movimento++) {
        printf("Movimento L #%d:\n", movimento);

        // Loop para movimento vertical (2 vezes para cima)
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }

        // Loop para movimento horizontal (1 vez para a direita)
        int j = 0;
        while (j < 1) {
            printf("Direita\n");

            j++;
        }
    }
}

int main() {
    // Chamada modular para cada peça
    printf("Movimentação do Bispo:\n");
    mover_bispo_diagonal_cima_direita(BISPO_PASSOS);
    printf("\n");

    printf("Movimentação da Torre:\n");
    mover_torre_direita(TORRE_PASSOS);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    mover_rainha_esquerda(RAINHA_PASSOS);
    printf("\n");

    mover_cavalo_em_L(CAVALO_MOVIMENTOS);

    return 0;
}
