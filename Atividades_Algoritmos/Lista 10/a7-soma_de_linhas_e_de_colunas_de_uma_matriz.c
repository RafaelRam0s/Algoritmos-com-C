/*
Escrever um programa que lê uma matriz M[5,5] e cria 2 vetores SL[5], SC[5] que contenham respectivamente as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados.
*/

#include <stdio.h>

#define NUMERO_DE_LINHAS 5
#define NUMERO_DE_COLUNAS 5

int main() {

    // Usuario definindo uma matriz
    /*
    int matriz[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0};

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {

            printf("\nValor para a posicao %dx%d: ", contador_de_linhas + 1, contador_de_colunas + 1); // 2
            scanf("%d", &matriz[contador_de_linhas][contador_de_colunas]); // 2

        }
    }

    printf("\nMatriz:");
    
    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {

            printf("%d ", matriz[contador_de_linhas][contador_de_colunas]);

        }
    }

    */

    // Matriz definida automaticamente
    
    int matriz[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0};
    int valores_para_a_matriz = 1;

    printf("\nMatriz:");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            matriz[contador_de_linhas][contador_de_colunas] = valores_para_a_matriz++;
            printf("%d ", matriz[contador_de_linhas][contador_de_colunas]);

        }
    }

    // Criando vetores das somas das linhas e das colunas

    int vetor_SL[NUMERO_DE_LINHAS] = {0}, vetor_SC[NUMERO_DE_COLUNAS] = {0};

    printf("\nVetor da soma das linhas: ");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {
        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            vetor_SL[contador_de_linhas] += matriz[contador_de_linhas][contador_de_colunas];
        }
        printf("%d ", vetor_SL[contador_de_linhas]);
    }

    printf("\nVetor da soma das colunas: ");
    for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_LINHAS; contador_de_colunas++) {
        for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_COLUNAS; contador_de_linhas++) {
            vetor_SC[contador_de_colunas] += matriz[contador_de_linhas][contador_de_colunas];
        }
        printf("%d ", vetor_SC[contador_de_colunas]);
    }

    return 0;
}

