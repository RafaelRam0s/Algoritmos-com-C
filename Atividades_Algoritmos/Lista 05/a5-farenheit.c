/*
A conversão de graus Farenheit para centígrados é obtida por:
C = 5/9 * (F − 32)

Fazer um programa que calcule e escreva uma tabela de centígrados em função de graus Farenheit, que variam de 50 a 150 de 1 em 1. 
*/

#include<stdio.h>

int main() {

    int temperatura_em_farenheit = 50;
    float centigrados = 0.0;

    while (temperatura_em_farenheit >= 50 && temperatura_em_farenheit <= 150) {

        centigrados = (5.0 / 9) * ( (float)temperatura_em_farenheit - 32);

        printf("\nA temperatura de %d Farenheit em centigrados e: %f", temperatura_em_farenheit, centigrados);

        temperatura_em_farenheit++;
    }

    return 0;
}
