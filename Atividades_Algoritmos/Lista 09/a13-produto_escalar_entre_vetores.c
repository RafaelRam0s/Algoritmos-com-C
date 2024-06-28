/*
Dados dois vetores X e Y de 20 posições cada, determinar o produto escalar entre os dois vetores. O produto escalar entre dois vetores é dado por: x0 y0 + x1 y1 + x2 y2 + x3 y3 +...
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 20

int main() {

    int vetor_x[TAMANHO_DO_VETOR] = {0}, vetor_y[TAMANHO_DO_VETOR] = {0};

    vetor_x[0] = 1;
    vetor_x[1] = 2;
    vetor_x[2] = 3;

    vetor_y[0] = 4;
    vetor_y[1] = 5;
    vetor_y[2] = 6;

    int produto_escalar = 0;

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        produto_escalar = produto_escalar + (vetor_x[i] * vetor_y[i]);
    }

    printf("O valor do produto escalar entre o vetor X e o vetor Y e: %d", produto_escalar);

    return 0;
}
