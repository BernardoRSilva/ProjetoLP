/**
 * @file funcaolog.c
 * @author Bernardo R. Silva
 */

#include <stdio.h>
#include <math.h>
#include "funcoes.h"
/**
 * @brief Esta função calcula o logaritmo de base natural dos elementos do vetor.
 * @details Esta função recebe os valores do vetor principal com 18 números dados
 * pelo utilizador percorrendo os mesmos e, recorrendo ao uso da biblioteca "math.h", 
 * calcula o logaritmo de base natural de cada um dos elementos
 * do vetor.
 * De seguida esses mesmo valores na tela do usuario.
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e o 
 * @param n o seu respetivo tamanho.
 * 
 * @return O valor do logaritmo base de cada elemento do vetor
 * 
 */
void funcaolog(int VET[], int n)
{
   float logaritmo, Vlog[n];
   for (int I = 0; I < n; I++){
       logaritmo = log(VET[I]);
       Vlog[I] = logaritmo;
    }
   for (int I = 0; I < n; I++){
    printf("Logaritmo de base natural de %d: %f\n",VET[I], Vlog[I]);
   }
   
}