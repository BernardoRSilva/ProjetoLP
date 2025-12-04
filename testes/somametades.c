#include <stdio.h>

void somametades(int VET[], int n)
{
    int soma, Met[8];
    soma = 0;
    for (int I = 0; I < n/2; I++){
        soma = VET[I] + VET[I + 9/2];
        Met[I]=soma;
    }
    for (int I = 0; I < 8; I++){
        printf("%d\t", Met[I]);
    }
    printf("\n");
}