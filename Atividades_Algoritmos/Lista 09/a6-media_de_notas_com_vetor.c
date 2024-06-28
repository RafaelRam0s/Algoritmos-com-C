/*
Faca um programa que pergunte ao usuário o numero de alunos a ser lido. O tamanho dos vetores será o numero informado pelo usuário. Armazene num vetor as notas G1 destes alunos; num outro vetor, armazene as notas G2 destes alunos. Ambas notas, G1 e G2, são informadas pelo usuário. Calcule a media aritmética destes alunos e armazene num terceiro vetor. Ao final, mostre as 3 notas dos alunos.
*/

#include <stdio.h>

int main() {

    int numero_de_alunos = 0;

    printf("\nNumero de alunos a ser lidos: ");
    scanf("%d", &numero_de_alunos);

    int vetor[numero_de_alunos];
    float notas_g1[numero_de_alunos], notas_g2[numero_de_alunos], media_dos_alunos[numero_de_alunos];

    for (int i = 0; i < numero_de_alunos; i++)
    {
        printf("\nNota G1: ");
        scanf("%f", &notas_g1[i]);
        printf("\nNota G2: ");
        scanf("%f", &notas_g2[i]);

        media_dos_alunos[i] = (notas_g1[i] + notas_g2[i]) / 2.0;

        printf("\nNota 1: %f\nNota 2: %f\nMedia: %f", notas_g1[i], notas_g2[i], media_dos_alunos[i]);
    }

    return 0;
}
