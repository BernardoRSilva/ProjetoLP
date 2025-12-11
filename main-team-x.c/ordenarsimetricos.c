/**
 * @file ordenarsimetricos.c
 * @author Afonso Guerra
 */

#include <stdio.h>
#include "funcoes.h"

void ordenarsimetricos (int VET[], int n)
{ 
    printf("\n");
    int i, k, temporaria;
    // o primeiro comando for define o numero de vezes que o segundo for atua
    for (i = 0; i < n - 1; i++) {
        // Compara valores adjacentes  
        // - i porque os últimos i elementos já estão ordenados
        for (k = 0; k < n - 1 - i; k++) { 
            // A troca garante a ordem decrescente do valor, ou seja, crescente do simétrico.
            if (VET[k] < VET[k+1]) {
                temporaria = VET[k];
                VET[k] = VET[k+1];
                VET[k+1] = temporaria;
            }
        }
    }

    // Imprimir o vetor, já ordenado 
    printf("\tVetor ordenado: [");
    for (i = 0; i < n; i++) {
        printf("%d%s", VET[i], (i < n - 1) ? ", " : "");
    }
    printf("]\n\n");
}
