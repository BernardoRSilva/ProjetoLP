/**
 * @file ordenarsimetricos.c
 * @author Afonso Guerra
 */

#include <stdio.h>
#include "ordenarsimetricos.h"
/**
 * @brief Esta função recebe o vetor com 18 valores dados pelo utilizador e ordena-os por ordem crescente dos seus valores simétricos.
 * @details Esta função compara valores adjacentes, trocando-os de lugar caso o VET[k] < VET[k+1].
 * Assim, percorre todos os valores do vetor até que o último valor seja o maior, na sua forma simétrica.
 * De seguida, volta a repetir o processo mas desta vez vai até ao penúltimo elemento do vetor, pois o último já está no seu devido lugar.
 * O programa acaba quando deixa todos os valores na ordenação correta, quando k < n - 1 - i.
 * E, no fim, a função imprime o vetor ordenado, ordem crescente dos seus valores simétricos.
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e
 * @param n o seu respetivo tamanho.
 * 
 * @return o vetor ordenado de forma crescente dos seus valores simétricos. 
 */
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