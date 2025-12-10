#include <stdio.h>
<<<<<<< HEAD:main-team-x.c/ordenarsimetricos.c
#include "funcoes.h"

void ordenarsimetricos (int VET[], int n)
{ 
    int i, k, temporaria;
    // o primeiro comando for define o numero de vezes que o segundo for atua, como há 18 elementos vai atuar 18 vezes, do V[0] ao V[17]  
    for (i = 0; i < n - 1; i++)
    {
        // Compara valores adjacentes  
        // - i porque os últimos i elementos já estão ordenados, exemplo depois do primeiro comando for ser realizado o último elemento definitivamente é o maior elemento, logo não há razão parar comparar
        for (k = 0; k < n - 1 - i; k++)
        { 
            // A troca garante a ordem decrescente do valor, ou seja, crescente do simétrico.
            if (VET[k] < VET[k+1])
            {
                // Troca de valores
                temporaria = VET[k];
                VET[k] = VET[k+1];
                VET[k+1] = temporaria;
=======
#include "ordenarsimetricos.h"

void ordenarsimetricos (int VET[], int n)
{ 
    int i, j, temp;
    // o primeiro comando for define o numero de vezes que o segundo for atua, como há 18 elementos vai atuar 18 vezes, do V[0] ao V[17]  
    for (i = 0; i < n - 1; i++) {
        // Compara valores adjacentes  
        // - i porque os últimos i elementos já estão ordenados, exemplo depois do primeiro comando for ser realizado o último elemento definitivamente é o maior elemento, logo não há razão parar comparar
        for (j = 0; j < n - 1 - i; j++) { 
            // A troca garante a ordem decrescente do valor, ou seja, crescente do simétrico.
            if (VET[j] < VET[j+1]) {
                // Troca de valores
                temp = VET[j];
                VET[j] = VET[j+1];
                VET[j+1] = temp;
>>>>>>> 01393d49a409e615440367e05da2a04594221c50:main.c/ordenarsimetricos.c
            }
        }
    }
    // Imprimir o vetor, já ordenado 
    printf("\tVetor ordenado: [");
<<<<<<< HEAD:main-team-x.c/ordenarsimetricos.c
    for (i = 0; i < n; i++)
    {
=======
    for (i = 0; i < n; i++) {
>>>>>>> 01393d49a409e615440367e05da2a04594221c50:main.c/ordenarsimetricos.c
        printf("%d%s", VET[i], (i < n - 1) ? ", " : "");
    }
    printf("]\n");
}