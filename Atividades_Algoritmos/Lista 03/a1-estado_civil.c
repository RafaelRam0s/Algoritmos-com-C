/*
Fazer um programa para ler a primeira letra do estado civil de uma pessoa (Solteiro, Casado, Viúvo, Divorciado, Uniaoestavel) e mostrar uma mensagem com a descrição. Considere letras maiúsculas e minúsculas. Mostre mensagem de erro, se necessário.
*/

#include<stdio.h>

int main() {

    char letra_estado_civil;

    printf("Estado civil: ");
    scanf("%c", &letra_estado_civil);

    if (letra_estado_civil == 's' || letra_estado_civil == 'S') {
        printf("Solteiro");
    } else if (letra_estado_civil == 'c' || letra_estado_civil == 'C') {
        printf("Casado");
    } else if (letra_estado_civil == 'v' || letra_estado_civil == 'V') {
        printf("Viuvo");
    } else if (letra_estado_civil == 'd' || letra_estado_civil == 'D') {
        printf("Divorciado");
    } else if (letra_estado_civil == 'u' || letra_estado_civil == 'U') {
        printf("Uniao estavel");
    } else {
        printf("Valor invalido: %c", letra_estado_civil);
    }

    return 0;
}
