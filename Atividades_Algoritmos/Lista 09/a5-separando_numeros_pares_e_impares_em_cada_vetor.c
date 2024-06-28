/*
Dado um conjunto N contendo 15 valores positivos, separar os elementos pares dos impares, usando apenas um vetor extra. Observação: Existiam elementos pares e impares no conjunto
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 15

int main() {

    int vetor_n[TAMANHO_DO_VETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int vetor_p[TAMANHO_DO_VETOR] = {0};

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        if (vetor_n[i] % 2 == 0) {
            vetor_p[i] = vetor_n[i];
            printf("\nO valor %d e par", vetor_n[i]);
            vetor_n[i] = 0;
        } else {
            printf("\nO valor %d e impar", vetor_n[i]);
        }
    }

    printf("\nValores pares:");

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        if (vetor_p[i] != 0) {
            printf("\n%d", vetor_p[i]);
        }
    }

    printf("\nValores impares:");
    
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        if (vetor_n[i] != 0) {
            printf("\n%d", vetor_n[i]);
        }
    }

    return 0;
}
