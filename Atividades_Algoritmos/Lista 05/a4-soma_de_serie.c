/*
Fazer um programa que:
a) leia o valor de X de uma unidade de entrada;
b) calcule e escreva o valor do seguinte somatório:
X^25/1 − X^24/2 + X^23/3 − X^22/4 + ...+ X/25
*/

#include<stdio.h>
#include<math.h>

int main() {

    int x = 0;

    printf("Escolha um valor: ");
    scanf("%d", &x);

    int contador = 1, numero_divisivel = 25;
    float soma_da_serie = 0.0;

    while (contador >= 1 && contador <= 25) {
        if (contador % 2 == 1) {
            soma_da_serie = soma_da_serie + ( (pow(x, numero_divisivel)) / (float)contador );
        } else {
            soma_da_serie = soma_da_serie - ( (pow(x, numero_divisivel)) / (float)contador );
        }

        numero_divisivel--;
        contador++;
    }

    printf("A soma da serie e: %f", soma_da_serie);

    return 0;
}
