/**
 * @file somametades.c
 * @author Bernardo R. Silva
 */
#include <stdio.h>
#include "funcoes.h"

void somametades(int VET[], int n)
{
    printf("\n");
    int soma, Met[8];
    soma = 0;
    for (int I = 0; I < n/2; I++){
        soma = VET[I] + VET[I + 9/2];
        Met[I]=soma;
    }
    printf("Vetor formado após a soma:\n\n");
    for (int I = 0; I < 8; I++){
        printf("%d\t", Met[I]);
    }
    printf("\n");
}