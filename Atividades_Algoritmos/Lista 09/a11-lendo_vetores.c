/*
Escreva um programa para ler 200 notas e armazená-las em um vetor. Admitindo-se que podem haver erros no processo de digitação, algumas notas podem ser inválidas, isto é, fora do intervalo entre 0 e 10. Considere a média como sendo 7,0. Desenvolver módulos (procedimentos ou funções) para determinar o número de notas inválidas, a média das notas válidas e número de notas acima da média.
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 8

int main() {

    float 
    soma_de_notas_validas = 0.0,
    notas[TAMANHO_DO_VETOR] = {-2, 0, 1, 2, 99, 10, -5, 8},
    media_de_notas_validas = 0;

    int numero_de_notas_invalidas = 0, numero_de_notas_validas = 0, numero_de_notas_acima_da_media = 0;
    
    printf("\nNotas invalidas:");
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {

        if (notas[i] < 0 || notas[i] > 10) {
            printf("\n%f", notas[i]);
            numero_de_notas_invalidas++;
        } else {
            soma_de_notas_validas = soma_de_notas_validas + notas[i];
            numero_de_notas_validas++;

            if (notas[i] > 7.0) {
                numero_de_notas_acima_da_media++;
            }
        }

    }
    
    media_de_notas_validas = soma_de_notas_validas / (float)numero_de_notas_validas;

    printf("\nNumero de notas invalidas: %d", numero_de_notas_invalidas);
    printf("\nMedia das notas validas: %f", media_de_notas_validas);
    printf("\nNumero de notas acima da media: %d", numero_de_notas_acima_da_media);
    
    return 0;
}
