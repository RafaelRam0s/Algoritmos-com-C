/*
Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
S= 1000/1 – 997/2 + 994/3 -991/4 ...
*/

#include<stdio.h>

int main() {

    int contador = 1, numero_divisivel = 1000;
    float soma_da_serie = 0.0;

    while (contador >= 1 && contador <= 50) {
        if (contador % 2 == 1) {
            soma_da_serie = soma_da_serie + ( (float)numero_divisivel / contador );
        } else {
            soma_da_serie = soma_da_serie - ( (float)numero_divisivel / contador );
        }

        numero_divisivel = numero_divisivel - 3;
        contador++;
    }

    printf("A soma dos termos e: %f", soma_da_serie);

    return 0;
}
