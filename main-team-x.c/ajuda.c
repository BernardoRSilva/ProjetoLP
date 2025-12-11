#include <stdio.h>
#include "funcoes.h"

void ajuda(int n){
    
    printf("\t===========Página de ajuda===========\n\n");
    printf("Este programa trabalha com um vetor de %d numeros inteiros\n", n);
    printf("Esses números têm de estar contidos entre 1 e 11 e após\n"
            "estes serem inseridos podem ser realizadas operações sobre\n"
            "esse mesmo vetor\n\n");
    
    printf("Regras de intodução de valores no vetor principal\n"
            "-> São introduzidos obrigatoriamente %d valores inteiros.\n", n);
    printf("-> Cada valor tem de estar entre 1 e 11 e caso nao cumpre esse requesito\n"
            "o numero inserido nao será contabilizado e será pedido que introduza um novo\n"
            "numero válido\n\n");

    printf("Menu de opções/funções\n");
    printf("Função 1 - Prima a tecla 1 seguida de Enter para\n"
            "construir uma matriz 4 por 18 onde cada linha desse vetor\n"
            "é igual ao vetor principal\n\n");
    
    printf("Função 2 - Prima a tecla 2 seguida de Enter para\n"
            "calcular e mostrar o valor do logaritmo de base natural\n"
            "de todos os valores do vetor principal\n\n");

    printf("Função 3 - Prima a tecla 3 seguida de Enter para\n" 
            "calcular a mediana dos elementos do vetor\n\n");       
    
    printf("Função 4 - Prima a tecla 4 seguida de Enter para\n" 
        "devolver o vetor ordenado pela ordem crescente dos seus valores simétricos\n\n");
    
    printf("Função 5 - Prima a tecla 5 seguida de Enter para\n"
            "mostrar todos os valores do vetor que são maiores\n"
            "que 2 e divisiveis por 5.\n\n");

    printf("Funcao 6 - Prima a tecla 6 seguida de Enter para\n"
            "calcular a soma da primeira metade do vetor com a\n"
            "segunda metade do mesmo, criando um vetor com metade do tamanho\n");
    

    printf("NOTAS:\n");
    printf("  - O vetor inicial e lido apenas uma vez, no inicio do programa.\n");
    printf("  - Podera utilizar as opcoes do menu as vezes que quiser ate escolher 0.\n");
    printf("=================================================\n");
    
    
    
}