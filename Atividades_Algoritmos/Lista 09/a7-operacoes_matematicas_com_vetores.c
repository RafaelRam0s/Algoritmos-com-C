/*
Faça um programa que leia e armazene 5 valores inteiros em um vetor Vet1. Leia outros 5 valores inteiros e armazene num vetor Vet2. A partir destes valores lidos, mostre na tela:
    1. a soma dos elementos de cada vetor, nas respectivas posições;
    2. a diferença dos elementos de cada vetor, nas respectivas posições;
    3. o produto dos elementos de cada vetor, nas respectivas posições;
    4. a divisão entre os elementos de cada vetor, nas respectivas posições (verificar divisão por 0).
*/

#include <stdio.h>

#define TAMANHO_DOS_VETORES 5

int main() {

    int Vet1[TAMANHO_DOS_VETORES], Vet2[TAMANHO_DOS_VETORES], soma_dos_Vet1_e_Vet2[TAMANHO_DOS_VETORES], subtracao_dos_Vet1_e_Vet2[TAMANHO_DOS_VETORES], multiplicacao_dos_Vet1_e_Vet2[TAMANHO_DOS_VETORES];

    float divisao_dos_Vet1_e_Vet2[TAMANHO_DOS_VETORES];

    for (int i = 0; i < TAMANHO_DOS_VETORES; i++) {
        printf("\nUm numero inteiro: ");
        scanf("%d", &Vet1[i]);
        printf("\nOutro numero inteiro: ");
        scanf("%d", &Vet2[i]);

        soma_dos_Vet1_e_Vet2[i] = Vet1[i] + Vet2[i];
        printf("\nA soma de %d com %d e: %d", Vet1[i], Vet2[i], soma_dos_Vet1_e_Vet2[i]);

        subtracao_dos_Vet1_e_Vet2[i] = Vet1[i] - Vet2[i];
        printf("\nA subtracao de %d com %d e: %d", Vet1[i], Vet2[i], subtracao_dos_Vet1_e_Vet2[i]);
   
        multiplicacao_dos_Vet1_e_Vet2[i] = Vet1[i] * Vet2[i];
        printf("\nA multiplicacao de %d com %d e: %d", Vet1[i], Vet2[i], multiplicacao_dos_Vet1_e_Vet2[i]);
   
        divisao_dos_Vet1_e_Vet2[i] = Vet1[i] / (float)Vet2[i];
        printf("\nA subtracao de %d com %d e: %f", Vet1[i], Vet2[i], divisao_dos_Vet1_e_Vet2[i]);   
    }

    return 0;
}
