#include <stdio.h>
#include "funcoes.h"

// Recebe o vetor já preenchido e monta a matriz 4x18
void matriz4por18(int VET[], int n) {
    int i, j, matriz[4][n];

    printf("\nA matriz terá 4 linhas e 18 colunas.\n");

    // Copia o vetor para todas as linhas
    for(i = 0; i < 4; i++) {
        for(j = 0; j < n; j++) {
            matriz[i][j] = VET[j];
        }
    }

    // Mostra a matriz final
    printf("\nMatriz formada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < n; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}