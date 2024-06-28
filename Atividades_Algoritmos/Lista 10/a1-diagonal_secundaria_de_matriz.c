/*
Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal secundária em um vetor
*/

#include <stdio.h>

int main() {

    int matriz[5][5] = {0}, contador = 1;

    // Inserindo valores em uma matriz
    printf("\nMatriz:");

    for (int contador_linha_de_matriz = 0; contador_linha_de_matriz < 5; contador_linha_de_matriz++) {
        printf("\n");
        for (int contador_coluna_de_matriz = 0; contador_coluna_de_matriz < 5; contador_coluna_de_matriz++) {
            matriz[contador_linha_de_matriz][contador_coluna_de_matriz] = contador;
            printf("%d ", contador);
            contador++;
        }
    }

    // Pegando a Diagonal secundária
    printf("\nDiagonal Secundária:");

    int diagonal_secundaria[5] = {0};
    for (int contador = 0; contador < 5; contador++) {
        diagonal_secundaria[contador] = matriz[contador][4 - contador];
        printf("\n%d", diagonal_secundaria[contador]);
    }

    return 0;
}
