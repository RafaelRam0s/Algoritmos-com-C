/*
Crie um programa que calcula o comprimento de uma string (nao use a função strlen). 
*/

#include <stdio.h>
// #include<string.h>

int main() {


    char texto[100];

    printf("\nDigite um texto: ");
    fgets(texto, 100, stdin);
    
    int contador = 0;
    for (contador = 0; texto[contador] != '\0'; contador++) {}

    printf("O texto possui %i letras", contador);
    // printf("O texto possui %li letras", strlen(texto));

    return 0;
}
