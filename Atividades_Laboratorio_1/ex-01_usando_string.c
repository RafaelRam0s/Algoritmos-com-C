/*
Faça um programa que então leia uma string e a imprima. 
*/

#include <stdio.h>

int main() {


    char texto[100];

    printf("\nDigite um texto: ");

    fgets(texto, 100, stdin);

    printf("\nO texto digitado foi: %s", texto);

    return 0;
}
