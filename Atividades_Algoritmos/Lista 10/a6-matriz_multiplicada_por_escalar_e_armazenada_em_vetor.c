/*
Escrever um programa que lê uma matriz M[6,6] e um valor A e multiplica a matriz M pelo valor A e coloca os valores da matriz multiplicados por A em um vetor de V[36] e escreve no final o vetor V
*/

#include <stdio.h>

#define NUMERO_DE_LINHAS 6
#define NUMERO_DE_COLUNAS 6

int main() {

    // Definindo uma matriz

    int matriz[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {0};
    // 1- int valores_para_a_matriz = 1;

    printf("\nMatriz:");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {

        // 1- printf("\n");

        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            // 1- matriz[contador_de_linhas][contador_de_colunas] = valores_para_a_matriz++;
            // 1- printf("%d ", matriz[contador_de_linhas][contador_de_colunas]);

            printf("\nValor para a posicao %dx%d: ", contador_de_linhas + 1, contador_de_colunas + 1);
            scanf("%d", &matriz[contador_de_linhas][contador_de_colunas]);

        }
    }

    // Multiplicando a matriz por um escalar

    int valor_A = 2;

    printf("Numero inteiro para multiplicar a matriz: ");
    scanf("%d", &valor_A);

    int vetor_da_matriz_multiplicada_pelo_valor_A[NUMERO_DE_LINHAS * NUMERO_DE_COLUNAS] = {0};
    int contador_do_vetor = 0;

    printf("\nVetor: ");

    for (int contador_de_linhas = 0; contador_de_linhas < NUMERO_DE_LINHAS; contador_de_linhas++) {
        for (int contador_de_colunas = 0; contador_de_colunas < NUMERO_DE_COLUNAS; contador_de_colunas++) {
            vetor_da_matriz_multiplicada_pelo_valor_A[contador_do_vetor] = valor_A * matriz[contador_de_linhas][contador_de_colunas];

            printf("%d ", vetor_da_matriz_multiplicada_pelo_valor_A[contador_do_vetor]);

            contador_do_vetor++;
        }
    }

    return 0;
}
