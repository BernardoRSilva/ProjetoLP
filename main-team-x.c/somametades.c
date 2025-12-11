/**
 * @file somametades.c
 * @author Bernardo R. Silva
 */
#include <stdio.h>
#include "funcoes.h"
/**
 * @brief Esta função soma a primeira metade do vetor com a sua segunda criando um vetor com metade do tamanho.
 * @details Esta função recebe os valores do vetor principal com 18 números dados
 * pelo utilizador percorrendo os mesmos e soma cada elemento da primeira metade do vetor com o elemento correspondente da segunda metade, obtendo assim um vetor 
 * com metade do tamanho. De seguida imprime esse mesmo vetor na tela do usuario.
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e o 
 * @param n o seu respetivo tamanho.
 * 
 * @return Um vetor resultado da soma das duas metades, com metade do tamanho do principal respetivamente. 
 */
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