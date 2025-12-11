/**
 * @file decompor.c
 * @author Bernardo R. Silva
 */
#include <stdio.h>
#include "funcoes.h"
// ---------------------------------------
// Decomposição de um único número ímpar
// ---------------------------------------
void decomporprimos(int n)
{
    if (n == 1) {  // caso especial
        printf("1 = (sem decomposicao)\n");
        return;
    }

    int divisor = 3;

    printf("%d = ", n);

    while (n > 1) {
        if (n % divisor == 0) {
            printf("%d", divisor);
            n /= divisor;
            if (n > 1) printf(" x ");
        } else {
            divisor += 2; // próximo ímpar: 3,5,7,9...
        }
    }

    printf("\n");
}

// ---------------------------------------
// Subprograma que percorre o vetor
// e decompõe apenas os elementos ímpares
// ---------------------------------------
void decomporVetorImpares(int V[], int n)
{
    printf("\n\t ============Decomposição dos elementos ímpares============\n\n");

    for (int i = 0; i < n; i++) {
        if (V[i] % 2 != 0) {       // verifica se é ímpar (1,3,5,7,9,11)
            decomporprimos(V[i]); // decomposição
        }
    }
}
