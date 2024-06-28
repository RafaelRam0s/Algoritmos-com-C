/*
Dada uma matriz A (3 x 4) imprimir o número de linhas e o número de colunas nulas da matriz. Exemplo:
0 0 0 0
1 0 2 2
4 0 5 6
0 0 0 0
Tem duas linhas nulas e uma coluna nulas
*/

#include <stdio.h>

#define QUANTIDADE_DE_LINHAS_DA_MATRIZ 3
#define QUANTIDADE_DE_COLUNAS_DA_MATRIZ 4

int main() {

    // int matriz_a[QUANTIDADE_DE_LINHAS_DA_MATRIZ][QUANTIDADE_DE_COLUNAS_DA_MATRIZ] = {0, 0, 0, 0,
    //     1, 0, 2, 2,
    //     4, 0, 5, 6};

    int matriz_a[QUANTIDADE_DE_LINHAS_DA_MATRIZ][QUANTIDADE_DE_COLUNAS_DA_MATRIZ] = {0};

    printf("\n--- Matriz A ---");

    for (int contador_de_linhas = 0; contador_de_linhas < QUANTIDADE_DE_LINHAS_DA_MATRIZ; contador_de_linhas++)
    {
        printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < QUANTIDADE_DE_COLUNAS_DA_MATRIZ; contador_de_colunas++)
        {
            printf("%d ", matriz_a[contador_de_linhas][contador_de_colunas]);
        }
    }

    int quantidade_linhas_nulas = 0, quantidade_colunas_nulas = 0, possibilidade_de_linha_nula = 0, possibilidade_de_coluna_nula = 0;

    for (int contador_de_linhas = 0; contador_de_linhas < QUANTIDADE_DE_LINHAS_DA_MATRIZ; contador_de_linhas++)
    {
        for (int contador_de_colunas = 0; contador_de_colunas < QUANTIDADE_DE_COLUNAS_DA_MATRIZ; contador_de_colunas++)
        {
            if (matriz_a[contador_de_linhas][contador_de_colunas] == 0) {
                possibilidade_de_linha_nula++;
            }

            if ( (contador_de_colunas == (QUANTIDADE_DE_COLUNAS_DA_MATRIZ - 1)) && ((possibilidade_de_linha_nula - 1) == contador_de_colunas) ) {                
                quantidade_linhas_nulas++;
            }
        }
        possibilidade_de_linha_nula = 0;
    }

    for (int contador_de_colunas = 0; contador_de_colunas < QUANTIDADE_DE_COLUNAS_DA_MATRIZ; contador_de_colunas++)
    {
        for (int contador_de_linhas = 0; contador_de_linhas < QUANTIDADE_DE_LINHAS_DA_MATRIZ; contador_de_linhas++)
        {
            if (matriz_a[contador_de_linhas][contador_de_colunas] == 0) {
                possibilidade_de_coluna_nula++;
            }

            if ( (contador_de_linhas == (QUANTIDADE_DE_LINHAS_DA_MATRIZ - 1)) && ((possibilidade_de_coluna_nula - 1) == contador_de_linhas) ) {                
                quantidade_colunas_nulas++;
            }
        }
        possibilidade_de_coluna_nula = 0;
    }

    printf("\nA matriz A, possui %d linhas nulas e %d colunas nulas", quantidade_linhas_nulas, quantidade_colunas_nulas);

    return 0;
}
