/*
Escrever um algoritmo que lê um valor X e calcula e escreve os 20 primeiros termos da série:
1 + 1/x^2 + 1/x^3 + 1/x^4 + ...
*/

#include<stdio.h>
#include<math.h>

int main() {

    int numero_informado = 0;
    float resultado = 0.0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero_informado);

    int x = 1;

    while (x > 0 && x <= 20) {

        resultado = resultado + ( 1 / (pow((float)numero_informado, x)) );

        x++;
    }

    printf("O resultado e: %f", resultado);

    return 0;
}
