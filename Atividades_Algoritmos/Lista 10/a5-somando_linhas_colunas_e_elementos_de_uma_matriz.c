/*
Escreva um programa que lê uma matriz M[5,5] e calcula as somas:
    a) da linha 4 de M;
    b) da coluna 2 de M;
    c) da diagonal principal;
    d) da diagonal secundária;
    e) de todos os elementos da matriz;
Escreva estas somas e a matriz.
*/

#include <stdio.h>

#define NUMERO_DE_LINHAS 5
#define NUMERO_DE_COLUNAS 5

int main() {

    // Definindo uma matriz

    int matriz[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0}, valores_para_a_matriz = 1;

    printf("\nMatriz:");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            matriz[contador_de_linhas][contador_de_colunas] = valores_para_a_matriz++;

            printf("%d ", matriz[contador_de_linhas][contador_de_colunas]);

        }
    }

    // Soma da linha 4

    int soma_da_linha_4 = 0;

    for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
        soma_da_linha_4 += matriz[3][contador_de_colunas];
    }

    printf("\nSoma da linha 4: %d", soma_da_linha_4);

    // Soma da coluna 2

    int soma_da_coluna_2 = 0;

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_COLUNAS; contador_de_linhas++) {
        soma_da_coluna_2 += matriz[contador_de_linhas][1];
    }

    printf("\nSoma da coluna 2: %d", soma_da_coluna_2);

    // Soma da diagonal principal;

    int soma_da_diagonal_principal = 0;

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {
        soma_da_diagonal_principal += matriz[contador_de_linhas][contador_de_linhas];
    }
    
    printf("\nSoma da diagonal principal: %d", soma_da_diagonal_principal);

    // Soma da diagonal secundária;

    int soma_da_diagonal_secundaria = 0;

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {
        soma_da_diagonal_secundaria += matriz[contador_de_linhas][NUMERO_DE_LINHAS - 1 - contador_de_linhas];
    }
    
    printf("\nSoma da diagonal secundaria: %d", soma_da_diagonal_secundaria);

    // Soma de todos os elementos da matriz;

    int soma_dos_elementos = 0;

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {
        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            soma_dos_elementos += matriz[contador_de_linhas][contador_de_colunas];
        }
    }

    printf("\nSoma dos elementos: %d", soma_dos_elementos);

    return 0;
}
