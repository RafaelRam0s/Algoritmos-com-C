/*
4. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome. 
*/

#include <stdio.h>

int main() {

    char nome[100];

    printf("\nDigite seu nome: ");
    fgets(nome, 5, stdin);

    printf("As 4 primeiras letras do seu nome sao: %s", nome);

    return 0;
}
