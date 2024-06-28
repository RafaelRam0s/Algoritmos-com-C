/*
Fazer um programa para ler um código (número inteiro) e mostrar uma mensagem de acordo com a tabela abaixo.
Código - Mensagem
1 - Grupo com 50% de promoção
3 ou 5 - Grupo sem desconto
10 até 20 - Grupo com 10% de desconto 
outro - Código não válido
*/

#include<stdio.h>

int main() {
    int codigo;

    printf("Seu codigo: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("Grupo com 50%% de promoção");
    } else if (codigo == 3 || codigo == 5) {
        printf("Grupo sem desconto");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Grupo com 10%% de desconto");
    } else {
        printf("Codigo nao valido");
    }

    return 0;
}
