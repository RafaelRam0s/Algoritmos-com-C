/*
Encontrar o maior elemento e a sua respectiva posição de uma matriz B de dimensão 7x5.
*/

#include <stdio.h>

#define NUMERO_DE_LINHAS 7
#define NUMERO_DE_COLUNAS 5

int main() {

    // Definindo a matriz

    int matriz_b[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0}, valores_para_a_matriz = 1;

    printf("\nMatriz:");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            matriz_b[contador_de_linhas][contador_de_colunas] = valores_para_a_matriz;
            
            printf("%d ", valores_para_a_matriz);

            valores_para_a_matriz++;
        }
    }

    // Indentificando o elemento de maior valor e sua posição

    int maior_elemento_da_matriz;
    int posicao_da_linha_do_maior_elemento_da_matriz;
    int posicao_da_coluna_do_maior_elemento_da_matriz;

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {
        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            
            if ((contador_de_linhas == 0 && contador_de_colunas == 0) || (maior_elemento_da_matriz < matriz_b[contador_de_linhas][contador_de_colunas])) {

                maior_elemento_da_matriz = matriz_b[contador_de_linhas][contador_de_colunas];
                posicao_da_linha_do_maior_elemento_da_matriz = contador_de_linhas;
                posicao_da_coluna_do_maior_elemento_da_matriz = contador_de_colunas;

            }

        }
    }
    
    printf("\nO maior elemento esta na posicao %dx%d e possui o valor: %d", (posicao_da_linha_do_maior_elemento_da_matriz + 1), (posicao_da_coluna_do_maior_elemento_da_matriz + 1), maior_elemento_da_matriz);

    return 0;
}
