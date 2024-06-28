/*
Escrever um programa que lê um conjunto de 4 valores i,a,b,c, onde i é um valor inteiro e positivo e a,b,c, são quaisquer valores reais e os escreva. A seguir:
1. Se i = 1 escrever os três valores a,b,c em ordem crescente.
2. Se i = 2 escrever os três valores a,b,c em ordem decrescente.
3. Se i = 3 escrever os três valores a,b,c de forma que o maior entre a,b,c fique dentre os dois. 
*/

#include<stdio.h>

int main() {

    int i;
    float a, b, c;
    float menor, medio, maior;

    scanf("%d %f %f %f", &i, &a, &b, &c);

    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else if (c <= b && c <= a) {
        menor = c;
    }

    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else if (c >= b && c >= a) {
        maior = c;
    }

    if ((a >= b && a <= c) || (a >= c && a <= c)) {
        medio = a;
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        medio = b;
    } else if ((c >= b && c <= a) || (c >= a && c <= b)) {
        medio = c;
    }

    if (i == 1)
    {
        printf("Ordem crescente: %.2f, %.2f, %.2f", menor, medio, maior);        
    } else if (i == 2)
    {
        printf("Ordem decrescente: %.2f, %.2f, %.2f", maior, medio, menor);
    } else if (i == 3)
    {
        printf("Ordem crescente: %.2f, %.2f, %.2f", menor, maior, medio);
    }

    return 0;
}
