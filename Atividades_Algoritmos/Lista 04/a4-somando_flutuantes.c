/*
Faça um programa que calcule e escreva o valor de S:
S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include<stdio.h>

int main() {

    int x = 1;
    float S = 0;

    while (x > 0 && x <= 50)
    {
        S = S + ((x + (x - 1)) / (float)x);
        x++;
    }
    
    printf("O valor de S e: %f", S);

    return 0;
}
