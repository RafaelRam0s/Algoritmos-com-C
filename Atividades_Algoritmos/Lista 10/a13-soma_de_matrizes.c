/*
Dadas duas matrizes reais A (m x n) e B (m x n), fazer um programa que calcula a soma de A com B. A soma deve ser efetuada por uma função que recebe 2 (duas) matrizes. Nesta função utilize uma terceira matriz que recebe o resultado da soma das duas outras.
*/

#include <stdio.h>

#define M 2
#define N 1

void somaDeMatrizes(int matriz_a[M][N], int matriz_b[M][N]) {
    
    int matriz_c[M][N];
    
    for (int contador_linha = 0; contador_linha < M; contador_linha++)
    {
        printf("\n");

        for (int contador_coluna = 0; contador_coluna < N; contador_coluna++)
        {
            matriz_c[contador_linha][contador_coluna] = matriz_a[contador_linha][contador_coluna] + matriz_b[contador_linha][contador_coluna];

            printf("%d ", matriz_c[contador_linha][contador_coluna]);
        }
    }
    
}

int main() {

    int matriz_a[M][N] = {2, 3};
    int matriz_b[M][N] = {4, 5};

    somaDeMatrizes(matriz_a, matriz_b);

    return 0;
}
