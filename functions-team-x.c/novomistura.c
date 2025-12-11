/**
 * @file novomistura.c
 * @author Bernardo R. Silva
 */

#include <stdio.h>
#include "funcoes.h"

void novomistura(int VET[], int n){
    int A[n], M[n], N;

    printf("Insira 18 números inteiros para o novo vetor (entre 1 e 11)\n");
    for (int i = 0; i < n; i++){
         do {
            printf("Insira o valor da posição %d: ", i);
            scanf("%d", &N);

            if (N < 1 || N > 11) {
                printf("Erro! Valor inválido. Deve estar entre 1 e 11.\n");
            }

            } while (N < 1 || N > 11);
            A[i]=N;}
    
    for (int i = 0; i < n/2; i++)
    {
        M[i]=VET[i];
    }
    
    for (int i = n/2; i < n; i++)
    {
        M[i]=A[i];
    }
    
    printf("\nResultado dos vetores misturados:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", M[i]);
    }
    printf("\n");
}
