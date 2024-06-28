/*
6. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”. 
*/

#include <stdio.h>
#include <string.h>

int stringsIguais(char string1[], char string2[]) {
    int strings_iguais = 0;
    char string_comparativa[12] = "feminino\n";

    for (int contador = 0; string1[contador] != '\0'; contador++)
    {
        if (string1[contador] != string2[contador])
        {
            strings_iguais = 1;
        }
    }

    return strings_iguais;
}

int main() {

    char nome[100] = {'\0'}, sexo[12] = {'\0'};
    int idade;

    printf("\nNome: ");
    fgets(nome, 100, stdin);

    printf("\nSexo [feminino ou masculino]: ");
    fgets(sexo, 12, stdin);
    
    printf("\nIdade: ");
    scanf("%i", &idade);
    
    // if (strcmp(sexo, "feminino\n") == 0 && idade < 25)
    if (stringsIguais(sexo, "feminino\n") == 0 && idade < 25)
    {
        printf("\n %s ACEITA", nome);
    } else
    {
        printf("\nNÃO ACEITA");
    }

    return 0;
}
