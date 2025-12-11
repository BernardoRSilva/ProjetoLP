/**
 * @file novomistura.c
 * @author Bernardo R. Silva
 */

#include <stdio.h>
#include "funcoes.h"

/**
 * @brief Esta função pede que seja introduzidos 18 novos valores para um novo vetor, e de seguida mistura metade do vetor principal com metade desse novo vetor.
 * @details Esta função recebe os valores do vetor principal com 18 números dados
 * pelo utilizador e seguidamente pede que sejam introduzidos 18 novos valores seguindo os principios do vetor principal (entre 1 e 11), criando assim um novo vetor.
 * Com os dois vetores procede à mistura de metade do vetor principal com metade do novo vetor introduzido.
 * De seguida imprime esse novo vetor na tela do usuario.
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e o 
 * @param n o seu respetivo tamanho.
 * 
 * @return Um vetor resultado da soma das duas metades, com metade do tamanho do principal respetivamente. 
 */

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
