/*
Achar a somatória de cada uma das linhas de uma matriz A (7x5). Para praticar utilize somente a estrutura de repetição while
*/

#include <stdio.h>

#define NUMERO_DE_LINHAS_DA_MATRIZ 7
#define NUMERO_DE_COLUNAS_DA_MATRIZ 5

int main() {

    // Inserindo valores em uma matriz
    int matriz_A[NUMERO_DE_LINHAS_DA_MATRIZ][NUMERO_DE_COLUNAS_DA_MATRIZ] = {0}, contador = 1;

    printf("\nMatriz:");

    int contador_linha_de_matriz = 0, contador_coluna_de_matriz = 0;

    while (contador_linha_de_matriz < NUMERO_DE_LINHAS_DA_MATRIZ) {
        printf("\n");

        contador_coluna_de_matriz = 0;
        
        while (contador_coluna_de_matriz < NUMERO_DE_COLUNAS_DA_MATRIZ) {
            matriz_A[contador_linha_de_matriz][contador_coluna_de_matriz] = contador;
            
            printf("%d ", contador);
            contador++;
            
            contador_coluna_de_matriz++;
        }
        
        contador_linha_de_matriz++;
    }

    // Somatória da matriz

    contador_linha_de_matriz = 0;
    int somatorio_da_matriz = 0;

    while (contador_linha_de_matriz < NUMERO_DE_LINHAS_DA_MATRIZ) {

        contador_coluna_de_matriz = 0;
        
        while (contador_coluna_de_matriz < NUMERO_DE_COLUNAS_DA_MATRIZ) {
            somatorio_da_matriz += matriz_A[contador_linha_de_matriz][contador_coluna_de_matriz];
            
            contador_coluna_de_matriz++;
        }
        
        contador_linha_de_matriz++;
    }

    printf("\nO somatorio dos elementos da matriz deu: %d", somatorio_da_matriz);

    return 0;
}
