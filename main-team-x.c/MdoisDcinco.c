/**
 * @file MdoisDcinco.c
 * @author Afonso Guerra
 */
#include <stdio.h>
#include "funcoes.h"

void MdoisDcinco (int VET[], int n){
    int algumvalor = 0;
    printf("Valores maiores que dois e divisiveis por cinco:\n\n");
    for(int i = 0; i < n - 1; i++){
        if(VET[i] > 2 && VET[i] % 5 == 0){
            printf("%d\t", VET[i]);
            algumvalor = 1;
        }
    }
    if(algumvalor == 0)
        printf("Nenhum valor encontrado\n");

    printf("\n");
}

