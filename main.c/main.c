#include <stdio.h>
#define TAM 18

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
    printf("\tMenu\t\n");
    printf("1:\t Construção de uma matriz 4 por 18.\n");
    printf("2:\t Calculo do logaritmo (base natural) dos elementos do vetor.\n");
    printf("3:\t Calculo da mediana dos elementos do vetor\n");
    printf("4:\t Ordenar vetor por ordem crescente dos seus valores simétricos.\n");
    printf("5:\t Valores do vetor maiores que dois e divisiveis por cinco.\n");
    printf("6:\t Calculo da soma da primeira metade dos elementos do vetor com a segunda metade.\n");


}

