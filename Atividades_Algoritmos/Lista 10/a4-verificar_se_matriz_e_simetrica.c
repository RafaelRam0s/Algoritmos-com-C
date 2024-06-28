/*
Dada uma matriz quadrada verificar se ela é simétrica. 
*/

#include <stdio.h>
#include <stdbool.h>

#define NUMERO_DE_LINHAS 3
#define NUMERO_DE_COLUNAS 3

int main() {

    // Definindo a matriz

    int matriz_b[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0};
    //int matriz_b[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0, 1, 2, 1, 3, 4, 2, 4, 5}; // simetrica
    //int matriz_b[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {2, -3, 5, -3, 0, 7, 5, 7, 1}; // simetrica
    //int matriz_b[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // não simetrica
    
    printf("\nMatriz:");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            
            printf("%d ", matriz_b[contador_de_linhas][contador_de_colunas]);

        }
    }

    // Verificando se a matriz é simétrica
    bool matriz_simetrica = true;

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            if (matriz_b[contador_de_linhas][contador_de_colunas] != matriz_b[contador_de_colunas][contador_de_linhas]) {
                matriz_simetrica = false;
            }
        }

    }

    if (matriz_simetrica) {
        printf("\nE simetrica");
    } else {
        printf("\nNao e simetrica");
    }

    return 0;
}
