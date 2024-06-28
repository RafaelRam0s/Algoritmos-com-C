/*
Escreva um programa que calcule e escreva a soma dos dez primeiros termos da seguinte série:
2/500 - 5/450 + 2/400 - 5/350 + …
*/

#include<stdio.h>

int main() {

    int contador = 1, divisor = 500;
    float soma_dos_termos = 0;

    while (contador >= 1 && contador <= 10) {
        if (contador % 2 == 0) {
            soma_dos_termos = soma_dos_termos - (5 / (float)divisor);
        } else {
            soma_dos_termos = soma_dos_termos + (2 / (float)divisor);
        }

        divisor = divisor - 50;
        contador++;
    }

    printf("A soma dos 10 primeiros termos da sequencia pedida e: %f", soma_dos_termos);

    return 0;
}
