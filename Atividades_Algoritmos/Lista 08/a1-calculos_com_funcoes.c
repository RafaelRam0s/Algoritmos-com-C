/*
Escreva um programa que leia três números inteiros e positivos (A,B,C) e calcule a seguinte expressão:
D=(R+S)/2. Onde : R = (A + B)^2 e S = (B + C)^2
OBS: Para o calculo de R e S utilize funções especificas que retornam os valores ao procedimento chamador
*/

#include<stdio.h>
#include<math.h>

float calculoR(int A, int B) {
    return pow( (A + B), 2 );
}

float calculoS(int B, int C) {
    return pow( (B + C), 2 );
}

int main() {

    int A, B, C;

    printf("\nValor de A: ");
    scanf("%d", &A);
    printf("\nValor de B: ");
    scanf("%d", &B);
    printf("\nValor de C: ");
    scanf("%d", &C);

    float D;

    float R = calculoR(A, B);
    float S = calculoS(B, C);

    D = (R + S) / 2.0;

    printf("\nValor de D: %f", D);
    printf("\nValor de R: %f", R);
    printf("\nValor de S: %f", S);

    return 0;
}
