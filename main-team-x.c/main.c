#include <stdio.h>
#include <math.h>
#define TAM 18
#include "funcoes.h"

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
    
    printf("\n\t============Menu============\t\n");
    printf("\n");
    printf("1:\t Construção de uma matriz 4 por 18.\n\n");
    printf("2:\t Calculo do logaritmo (base natural) dos elementos do vetor principal.\n\n");
    printf("3:\t Calculo da mediana dos elementos do vetor principal\n\n");
    printf("4:\t Ordenar vetor principal por ordem crescente dos seus valores simétricos.\n\n");
    printf("5:\t Valores do vetor maiores que dois e divisiveis por cinco.\n\n");
    printf("6:\t Calculo da soma da primeira metade dos elementos do vetor principal com a segunda metade.\n\n");
    printf("7:\t Página de ajuda\n\n");
    printf("8:\t Leitura de um novo vetor, e devolução de um vetor que mistura metade do principal com metade do novo vetor\n\n");
    printf("9:\t Decomposição dos elementos impares do vetor principal em números primos\n\n");
    printf("0:\t Fechar programa\n\n");
    
    //escolha da funcionalidade a utilizar
    printf("Escolha a opção desejada:");
    scanf("%d", &Opc);
    printf("\n");
    
    //Devolução de uma matriz 4 por 18, constituida pelo vetor 
    if(Opc==1){
      matriz4por18(VET, TAM);
      printf("\n");  
    }
    
    //Execução da função calculo de logaritmos 
    if(Opc==2){
      funcaolog(VET, TAM);
      printf("\n");  
    }
   
    //Calculo da mediana dos elementos do vetor 
    if(Opc==3){
      mediana(VET, TAM);
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

    if(Opc==7){
      ajuda(TAM);
      printf("\n");
    }
    
    if(Opc==8){
      novomistura(VET, TAM);
      printf("\n");  
    }

    if(Opc==9){
      decomporVetorImpares(VET, TAM);
      printf("\n");  
    }
    }while(Opc != 0);
}

