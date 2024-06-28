/*
Escreva uma função que recebe um vetor e seu tamanho. A função deve trocar o primeiro elemento com o último, o segundo elemento com o penúltimo, até o meio do vetor. 
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 5

void inverterPosicaoDoVetor(int vetor[], int capacidade_do_vetor) {
    int vetor_inverso[capacidade_do_vetor];

    for (int i = 0; i < capacidade_do_vetor; i++) {
        vetor_inverso[capacidade_do_vetor - 1 - i] = vetor[i];
    }

    printf("\nVetor normal:");
    for (int i = 0; i < capacidade_do_vetor; i++) {
        printf("\n%d", vetor[i]);
    }

    printf("\nVetor inverso:");
    for (int i = 0; i < capacidade_do_vetor; i++) {
        printf("\n%d", vetor_inverso[i]);
    }

}

int main() {

    int vetor_a[TAMANHO_DO_VETOR] = {0, 1, 2, 3, 4};

    inverterPosicaoDoVetor(vetor_a, TAMANHO_DO_VETOR);

    return 0;
}
