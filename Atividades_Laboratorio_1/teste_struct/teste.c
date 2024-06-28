#include <stdio.h>
#include <stdlib.h>

int main() 
{
    typedef struct 
    {
        char nome[50];
        int idade;
    } Pessoa;

    Pessoa teste;
    teste.idade = 50;

    printf("Teste: %d \n", teste.idade);

    return 0;
}