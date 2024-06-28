/*
Desenvolva um programa para fazer a conversão de Real para Dollar e vice e versa. Para isso o usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. Apresente o valor convertido. Para realizar as conversões utilize funções especificas.
*/

#include<stdio.h>

float dolares;

float converterDinheiro(float moeda, float taxa) {
    dolares = moeda * taxa;

    return dolares;
}

int main() {

    float reais, cotacao;
    
    printf("Informe um valor em Reais: ");
    scanf("%f", &reais);

    printf("Valor da cotacao de Reais para Dolares: ");
    scanf("%f", &cotacao);

    printf("A conversao de %.2f reais para dolares, com a cotacao em %.2f e: %.2f dolares", reais, cotacao, converterDinheiro(reais, cotacao));

    return 0;
}
