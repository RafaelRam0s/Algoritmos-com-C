/*
7. Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo: 0011001 -> 3
*/

#include<stdio.h>

int main() {

    char texto[100];

    printf("Digite um texto: ");

    fgets(texto, 100, stdin);

    int contador_de_1_s = 0;

    for (int contador = 0; texto[contador] != '\0'; contador++)
    {
        if(texto[contador] == '1')
        {
            contador_de_1_s++;
        }
    }

    printf("Quantidade de 1s igual a: %i", contador_de_1_s);

    return 0;
}
