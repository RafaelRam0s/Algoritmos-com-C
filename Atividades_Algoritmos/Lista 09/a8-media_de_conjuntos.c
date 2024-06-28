/*
Dado 3 conjuntos de números, de tamanho N, calcular a média de cada um dos conjuntos.
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 2

int main() {

    int 
    conjunto_a[TAMANHO_DO_VETOR] = {1, 2}, 
    conjunto_b[TAMANHO_DO_VETOR] = {3, 4}, 
    conjunto_c[TAMANHO_DO_VETOR] = {5, 6};

    int soma_dos_conjuntos_do_vetor_a = 0, soma_dos_conjuntos_do_vetor_b = 0, soma_dos_conjuntos_do_vetor_c = 0;

    float media_do_conjunto_a = 0, media_do_conjunto_b = 0, media_do_conjunto_c = 0;

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        soma_dos_conjuntos_do_vetor_a += conjunto_a[i];
        soma_dos_conjuntos_do_vetor_b += conjunto_b[i];
        soma_dos_conjuntos_do_vetor_c += conjunto_c[i];
    }

    media_do_conjunto_a = soma_dos_conjuntos_do_vetor_a / (float)TAMANHO_DO_VETOR;
    media_do_conjunto_b = soma_dos_conjuntos_do_vetor_b / (float)TAMANHO_DO_VETOR;
    media_do_conjunto_c = soma_dos_conjuntos_do_vetor_c / (float)TAMANHO_DO_VETOR;

    printf("\nA media do vetor A e: %f", media_do_conjunto_a);
    printf("\nA media do vetor B e: %f", media_do_conjunto_b);
    printf("\nA media do vetor C e: %f", media_do_conjunto_c);

    return 0;
}
