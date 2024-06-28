/*
5. Digite um nome, calcule e retorne quantas letras tem esse nome. 
*/

#include <stdio.h>
#include <string.h>

int main() {


    char texto[100];

    printf("\nDigite um texto: ");
    fgets(texto, 100, stdin);
    
    // int contador = 0;
    // for (contador = 0; texto[contador] != '\0'; contador++) {}

    // printf("O texto possui %i letras", (contador - 1));

    printf("O texto possui %li letras", (strlen(texto) - 1));

    return 0;
}
