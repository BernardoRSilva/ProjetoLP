/** 
* @file matriz4por18.c
* @author Francisco F. Caninhas
*/

#include <stdio.h>
#include "funcoes.h"

/* --- Cálculo da mediana dos elementos do vetor --- */

void mediana(int VET[], int n)
{
    float mediana;
    int temp;

    /* Ordenar o vetor (Bubble Sort) */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (VET[j] > VET[j + 1]) {
                temp = VET[j];
                VET[j] = VET[j + 1];
                VET[j + 1] = temp;
            }
        }
    }

    /* Como n = 18 (par), a mediana é a média dos dois valores centrais */
    mediana = (VET[8] + VET[9]) / 2.0f;

    printf("\nMediana dos elementos do vetor: %.2f\n", mediana);
}
