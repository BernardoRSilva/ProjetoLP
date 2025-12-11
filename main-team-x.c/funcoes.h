/**
 * @file funcoes.h
 * @author Todos
 * @brief Este ficheiro contém todas as declarações de funções utilizadas no projeto.
 * 
 */
/* 1º função */
/**
 * 
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
 * 
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
 * 
 */
void ajuda(int n);

/* 8º função */
/**
 * 
 */
void novomistura(int VET[], int n);

void decomporprimos(int n);
void decomporVetorImpares(int V[], int n);
