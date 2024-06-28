/*
8. Escreva um programa que substitui as ocorrências de um caractere 0 em uma string por outro caractere 1.
*/

#include<stdio.h>

int main() {

    char texto[100], texto2[100];

    printf("Digite um texto: ");

    fgets(texto, 100, stdin);

    for (int contador = 0; texto[contador] != '\0'; contador++)
    {
        if (texto[contador] == '0')
        {
            texto2[contador] = '1';
        } else 
        {
            texto2[contador] = texto[contador];
        }
    }

    printf("O texto ficou assim: %s", texto2);

    return 0;
}
