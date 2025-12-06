#include <stdio.h>
#include "ordenarsimetricos.h"

void ordenarsimetricos(int VET[], int n)
{ 
    int i, j, temp;
    // o primeiro comando for define o numero de vezes que o segundo for atua, como há 18 elementos vai atuar 18 vezes, do V[0] ao V[17]  
    for (i = 0; i < n - 1; i++)
    {
        // Compara valores adjacentes  
        // - i porque os últimos i elementos já estão ordenados, exemplo depois do primeiro comando for ser realizado o último elemento definitivamente é o maior elemento, logo não há razão parar comparar
        for (j = 0; j < n - 1 - i; j++)
        { 
            // A troca garante a ordem decrescente do valor, ou seja, crescente do simétrico.
            if (VET[j] < VET[j+1])
            {
                // Troca de valores
                temp = VET[j];
                VET[j] = VET[j+1];
                VET[j+1] = temp;
            }
        }
    }
    // Imprimir o vetor, já ordenado 
    printf("\tVetor ordenado: [");
    for (i = 0; i < n; i++)
    {
        printf("%d%s", VET[i], (i < n - 1) ? ", " : "");
    }
    printf("]\n");
}