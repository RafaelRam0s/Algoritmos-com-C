/*
Escreva uma função que recebe um vetor, seu tamanho e um número X. Mostre a posição de cada elemento igual a X deste vetor.
*/

#include <stdio.h>

#define TAMANHO_DE_VETOR 5

void funcoeVetor(int vetor[], int tamanho, int X) {

    printf("\nO numero %d esta presente dentro do vetor nas posicoes:", X);

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == X) {
            printf("\n%d", i);
        }
    }

}

int main() {

    int vetor[TAMANHO_DE_VETOR] = {1, 2, 3, 4, 5};

    funcoeVetor(vetor, TAMANHO_DE_VETOR, 2);

    return 0;
}
