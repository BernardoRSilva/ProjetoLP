#include <stdio.h>

void somametades(int VET[], int n)
{
    int soma, Met[9];
    soma = 0;
    for (int I = 0; I < n; I++){
        soma = VET[I] + VET[I+9];
        Met[I]=soma;
    }
    for (int I = 0; I < 9; I++){
        printf("%d\t", Met[I]);
    }
}