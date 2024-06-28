/*
Dada uma matriz de valores to tipo real A com m linhas e n colunas e um vetor real V[m X n], determinar o produto de A por V. 
*/

#include <stdio.h>

#define m_linhas_de_matriz 2
#define n_colunas_de_matriz 3

int main() {

    // Dada uma matriz de valores to tipo real A com m linhas e n colunas
    float matriz_A[m_linhas_de_matriz][n_colunas_de_matriz] = {1, 2, 3, 4, 5, 6};

    // um vetor real V[m X n] // Como não é possível multiplicar uma matriz 3x2 por um vetor 1x6, interpreto que seja para fazer um vetor real que possui 1 valor que é a multiplicação das linhas pelas colunas da matriz
    float vetor_V[1] = {m_linhas_de_matriz * n_colunas_de_matriz};

    // determinar o produto de A por V. 
    float produto_da_matriz_A_pelo_vetor_V[m_linhas_de_matriz][n_colunas_de_matriz];

    for (int contador_de_linhas = 0; contador_de_linhas < m_linhas_de_matriz; contador_de_linhas++) {
        printf("\n");
        for (int contador_de_colunas = 0; contador_de_colunas < n_colunas_de_matriz; contador_de_colunas++) {
            produto_da_matriz_A_pelo_vetor_V[contador_de_linhas][contador_de_colunas] = matriz_A[contador_de_linhas][contador_de_colunas] * vetor_V[0];

            printf("%f ", produto_da_matriz_A_pelo_vetor_V[contador_de_linhas][contador_de_colunas]);
        }
    }

    return 0;
}
