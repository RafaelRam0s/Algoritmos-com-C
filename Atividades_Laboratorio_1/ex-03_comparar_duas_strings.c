/*
3. Crie um programa que compara duas strings (não use a função ao strcmp). 
*/

#include <stdio.h>

int main()
{
    char texto1[50], texto2[50];
    
    printf("\n Escreva uma string:");
    fgets(texto1, 50, stdin);
    
    printf("\n Escreva outra string:");
    fgets(texto2, 50, stdin);

    int strings_iguais = 1;
    
    for (int contador = 0; texto1[contador] != '\0'; contador++)
    {
        if (texto1[contador] != texto2[contador])
        {
            strings_iguais = 0;
        }
    }
    
    if (strings_iguais == 1) 
    {
        printf("\n As strings digitadas sao iguais");
    } else
    {
        printf("\n As strings digitadas nao sao iguais");
    }

    return 0;
}