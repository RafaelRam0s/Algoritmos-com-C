/*
Escreva um programa que leia três números inteiros e positivos (A,B,C) e calcule a seguinte expressão:
D=(R+S)/2. Onde : R = (A + B)^2 e S = (B + C)^2
OBS: Para o calculo de R e S utilize funções especificas que retornam os valores ao procedimento chamador.
*/

#include<stdio.h>
#include<math.h>

float R, S;

void CalcularRS(int A, int B, int C) {
    R = pow((A + B), 2);
    S = pow((B + C), 2);
}

int main() {

    int A, B, C;
    float D;

    printf("\nValor de A: ");
    scanf("%d", &A);
    printf("\nValor de B: ");
    scanf("%d", &B);
    printf("\nValor de C: ");
    scanf("%d", &C);

    CalcularRS(A, B, C);

    D = (R + S) / (float)2;

    printf("\nO valor da expressao D e: %f", D);

    return 0;
}
