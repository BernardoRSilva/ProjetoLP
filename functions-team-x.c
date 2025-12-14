/**
 * @file functions-team-x.c
 * @brief Ficheiro que contem a implementação de todas as funções do projeto.
 *
 * @authors
 * - Bernardo Silva
 * - Afonso Guerra
 * - Francisco Caninhas
 */


#include <stdio.h>
#include "functions-team-x.h"

// Recebe o vetor já preenchido e monta a matriz 4x18
void matriz4por18(int VET[], int n) {
    int i, j, matriz[4][n];

    printf("\nA matriz terá 4 linhas e 18 colunas.\n");

    // Copia o vetor para todas as linhas
    for(i = 0; i < 4; i++) {
        for(j = 0; j < n; j++) {
            matriz[i][j] = VET[j];
        }
    }

    // Mostra a matriz final
    printf("\nMatriz formada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < n; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}



#include <stdio.h>
#include <math.h>
#include "functions-team-x.h"

// calcula o logaritmo de base natural dos elementos do vetor
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




#include <stdio.h>
#include "functions-team-x.h"

// Cálculo da mediana dos elementos do vetor

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




#include <stdio.h>
#include "functions-team-x.h"

// ordena o vetor por ordem crescente dos seus valores simetricos
void ordenarsimetricos (int VET[], int n)
{ 
    printf("\n");
    int i, k, temporaria;
    // o primeiro comando for define o numero de vezes que o segundo for atua
    for (i = 0; i < n - 1; i++) {
        // Compara valores adjacentes  
        // - i porque os últimos i elementos já estão ordenados
        for (k = 0; k < n - 1 - i; k++) { 
            // A troca garante a ordem decrescente do valor, ou seja, crescente do simétrico.
            if (VET[k] < VET[k+1]) {
                temporaria = VET[k];
                VET[k] = VET[k+1];
                VET[k+1] = temporaria;
            }
        }
    }

    // Imprimir o vetor, já ordenado 
    printf("\tVetor ordenado: [");
    for (i = 0; i < n; i++) {
        printf("%d%s", VET[i], (i < n - 1) ? ", " : "");
    }
    printf("]\n\n");
}




#include <stdio.h>
#include "functions-team-x.h"

// devolve os valores maiores que 2 e divisiveis por 5
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




#include <stdio.h>
#include "functions-team-x.h"
// soma primeira metade do vetor com a segunda
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



#include <stdio.h>
#include "functions-team-x.h"

// pagina de ajuda
void ajuda(int n){
    
    printf("\t===========Página de ajuda===========\n\n");
    printf("Este programa trabalha com um vetor de %d numeros inteiros\n", n);
    printf("Esses números têm de estar contidos entre 1 e 11 e após"
            "estes serem inseridos podem ser realizadas operações sobre"
            "esse mesmo vetor\n\n");
    
    printf("Regras de intodução de valores no vetor principal\n"
            "-> São introduzidos obrigatoriamente %d valores inteiros.\n", n);
    printf("-> Cada valor tem de estar entre 1 e 11 e caso nao cumpre esse requesito"
            "o numero inserido nao será contabilizado e será pedido que introduza um novo"
            "numero válido\n\n");

    printf("Menu de opções/funções\n\n");
    printf("Função 1 - Prima a tecla 1 seguida de Enter para"
            "construir uma matriz 4 por 18 onde cada linha desse vetor"
            "é igual ao vetor principal\n\n");
    
    printf("Função 2 - Prima a tecla 2 seguida de Enter para"
            "calcular e mostrar o valor do logaritmo de base natural"
            "de todos os valores do vetor principal\n\n");

    printf("Função 3 - Prima a tecla 3 seguida de Enter para" 
            "calcular a mediana dos elementos do vetor\n\n");       
    
    printf("Função 4 - Prima a tecla 4 seguida de Enter para" 
        "devolver o vetor ordenado pela ordem crescente dos seus valores simétricos\n\n");
    
    printf("Função 5 - Prima a tecla 5 seguida de Enter para"
            "mostrar todos os valores do vetor que são maiores"
            "que 2 e divisiveis por 5.\n\n");

    printf("Função 6 - Prima a tecla 6 seguida de Enter para"
            "calcular a soma da primeira metade do vetor com a"
            "segunda metade do mesmo, criando um vetor com metade do tamanho\n\n");

    printf("Função 8 - Prima a tecla 8 seguida de Enter para"
          "construir um novo vetor com 18 elementos (entre 1 e 11) e misturar"
        "metade do vetor principal com metade desse novo vetor\n\n");

    printf("Função 9 - Prima a tecla 9 seguida de Enter para"
           "apresentar e decompor os elementos impáres do vetor principal"
            "em números primos\n\n");    
    

    printf("NOTAS:\n");
    printf("  - O vetor inicial e lido apenas uma vez, no inicio do programa.\n");
    printf("  - Podera utilizar as opcoes do menu as vezes que quiser ate escolher 0.\n");
    printf("=================================================\n");
    
    
    
}




#include <stdio.h>
#include "functions-team-x.h"

// mistura metade do vetor principal com metade do novo
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



#include <stdio.h>
#include "functions-team-x.h"

// Decomposição de um único número ímpar
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


void decomporVetorImpares(int V[], int n)
{
    printf("\n\t ============Decomposição dos elementos ímpares============\n\n");

    for (int i = 0; i < n; i++) {
        if (V[i] % 2 != 0) {       // verifica se é ímpar (1,3,5,7,9,11)
            decomporprimos(V[i]); // decomposição
        }
    }
}


