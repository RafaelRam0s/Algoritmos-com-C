/*
Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que divididos por 11 onde o resto da divisão é igual a 5. 
*/

#include<stdio.h>

int main() {
    int contador = 1000;

    printf("\nOs numeros que sao divisiveis por 11 e que dao resto 5 sao:");

    while(contador >= 1000 && contador <= 1999) {
        if (contador % 11 == 5) {
            printf("\n%d", contador);
        }
        contador++;
    }

    return 0;
}
