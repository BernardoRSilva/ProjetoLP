#include <stdio.h>
#include <math.h>
#define TAM 18
#include "funcaolog.h"
#include "somametades.h"
#include "ordenarsimetricos.h"
#include "MdoisDcinco.h"

int main()
{
    int N, VET[TAM];

    // Insirir 18 numeros entre 1 e 11 para a criação de um vetor 
    printf("Insira 18 números inteiros (entre 1 e 11)\n");
    for (int I = 0; I < TAM; I++){
         do {
            printf("Insira o valor da posição %d: ", I);
            scanf("%d", &N);

            if (N < 1 || N > 11) {
                printf("Erro! Valor inválido. Deve estar entre 1 e 11.\n");
            }

            } while (N < 1 || N > 11);  // repete até ser válido
        
        VET[I] = N; // dá valor a posição respetiva do vetor 
    }
 
    // Menu da calculadora 
    int Opc;
    do{
    printf("\tMenu\t\n");
    printf("\n");
    printf("1:\t Construção de uma matriz 4 por 18.\n");
    printf("2:\t Calculo do logaritmo (base natural) dos elementos do vetor.\n");
    printf("3:\t Calculo da mediana dos elementos do vetor\n");
    printf("4:\t Ordenar vetor por ordem crescente dos seus valores simétricos.\n");
    printf("5:\t Valores do vetor maiores que dois e divisiveis por cinco.\n");
    printf("6:\t Calculo da soma da primeira metade dos elementos do vetor com a segunda metade.\n");
    printf("\n");
    printf("0:\t Fechar programa");
    printf("\n");
    
    //escolha da funcionalidade a utilizar
    printf("Escolha a opção desejada:");
    scanf("%d", &Opc);
    printf("\n");
    
    //Execução da função calculo de logaritmos 
    if(Opc==2){
      funcaolog(VET, TAM);
      printf("\n");  
    }
   
    // Ordenar vetor por ordem crescente dos seus valores simétricos
    if(Opc == 4){
       ordenarsimetricos(VET, TAM);
    }
    
    // Devolução dos valores mais maiores que dois e divisiveis por 5
    if(Opc == 5){
            MdoisDcinco(VET, TAM);
    }
    
    //Execução da função soma das duas metades do vetor
    if(Opc==6){
      somametades(VET, TAM);
      printf("\n");  
    }
    }while(Opc != 0);
}

