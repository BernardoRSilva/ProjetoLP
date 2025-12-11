/**
 * @file ajuda.c
 * @author Bernardo Silva
 */

#include <stdio.h>
#include "funcoes.h"

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