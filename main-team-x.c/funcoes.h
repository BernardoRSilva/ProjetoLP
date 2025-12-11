/**
 * @file funcoes.h
 * @authors
 *  - Bernardo Silva
 *  - Afonso Guerra
 *  - Francisco Caninhas
 * @brief Este ficheiro contém todas as declarações de funções utilizadas no projeto.
 * 
 */

/* 1º função */
/** 
* @brief Esta função constrói uma matriz do tipo quatro por dezoito, em que cada linha é composta pelo vetor lido.
* @details A função solicita ao utilizador do tipo quatro por dezoito, a introdução de um único vetor de dezoito inteiros, que será armazenado
* na primeira linha da matriz. As três linhas restantes não são lidas, em vez disso, são preenchidas
* automaticamente com cópias exatas do primeiro vetor. No final, a matriz resultante contém quatro linhas idênticas.
*
* @param VET[] Trata-se do vetor recebido pela função (vetor principal) e o 
* @param n o seu respetivo tamanho.

* @return Devolve a matriz já elaborada com os números inteiros posterirmente introduzidos.
*/

void matriz4por18(int VET[], int n);

/* 2º função */
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
 * @return O valor do logaritmo base de cada elemento do vetor.
 */
void funcaolog(int VET[], int n);

/* 3º função */
/**
* @brief Calculo da mediana dos elementos no vetor.
* @details Esta função recebe um vetor de números e determina a sua mediana. Para isso, os elementos são
* primeiro organizados por ordem crescente. Se o número de elementos for ímpar, a mediana corresponde ao
* valor que ocupa a posição central do vetor ordenado. Se for par, a mediana é calculada como a média
* aritmética dos dois valores centrais.
* 
* @param VET[] Trata-se do vetor recebido pela função (vetor principal) e o 
* @param n o seu respetivo tamanho.
*
* @return Devolve o valor da mediana.
*/
void mediana(int VET[], int n);

/* 4º função */
/**
 * @brief Esta função recebe o vetor com 18 valores dados pelo utilizador e ordena-os por ordem crescente dos seus valores simétricos.
 * @details Esta função compara valores adjacentes, trocando-os de lugar caso o VET[k] < VET[k+1].
 * Assim, percorre todos os valores do vetor até que o último valor seja o maior, na sua forma simétrica.
 * De seguida, volta a repetir o processo mas desta vez vai até ao penúltimo elemento do vetor, pois o último já está no seu devido lugar.
 * O programa acaba quando deixa todos os valores na ordenação correta, quando k < n - 1 - i.
 * E, no fim, a função imprime o vetor ordenado, ordem crescente dos seus valores simétricos.
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e
 * @param n o seu respetivo tamanho.
 * 
 * @return o vetor ordenado de forma crescente dos seus valores simétricos.
 */
void ordenarsimetricos (int VET[], int n);

/* 5º função */
/**
 * @brief Esta função devolve os valores que são maiores que dois e divisíveis por cinco.
 * @details Esta função recebe o vetor com 18 valores dados pelo utilizador e
 * verifica quais deles são maiores que dois e divisíveis por cinco. 
 * De seguida, apresenta esses valores ao utilizador, caso não haja nenhum valor
 * aparece uma mensagem para demonstrar essa situação, "Nenhum valor encontrado".
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e o 
 * @param n o seu respetivo tamanho.
 * 
 * @return os elementos do vetor que são maiores que dois e divisíveis por cinco, caso existam.
 */
void MdoisDcinco (int VET[], int n);

/* 6º função */
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
void somametades(int VET[], int n);

/* 7º função */
/**
 * @brief Esta paginá contém as regras de utilização do programa e também instruções para o
 * utilizar de forma correta. 
 * @details Explica o funcionamento do programa, as regras de colocação de valores para os vetores pedidos
 * e também como aceder e executar de forma correta as funções que o mesmo disponibiliza.
 * 
 * @param n é o tamanho do vetor.
 */
void ajuda(int n);

/* 8º função */
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
void novomistura(int VET[], int n);

/* 9º função */
/**
 * @brief Esta função decompõe um número inteiro positivo nos seus fatores primos.
 * @details Esta função ignora o fator primo 2.
 * Ela começa a testar a divisibilidade por 3. Portanto, só funcionará
 * corretamente para números ímpares ou números pares que são também
 * múltiplos de 3 ou de primos ímpares maiores.
 * O caso especial para n=1 é tratado.
 * 
 * @param n O número inteiro positivo em análise.
 * 
 * @return número inteiro positivo decomposto em fatores primos.
 */
void decomporprimos(int n);
/**
 * @details Esta função percorre o vetor principal e seleciona apenas os números ímpares. Depois utiliza 
 * a função "decomporprimos" para decompor esses números ímpares em números primos.
 * 
 * @param VET[] trata-se do vetor recebido pela função (vetor principal) e o 
 * @param n o seu respetivo tamanho.
 * 
 * @return Os números ímpares do vetor decompostos em números primos.
 */
void decomporVetorImpares(int V[], int n);
