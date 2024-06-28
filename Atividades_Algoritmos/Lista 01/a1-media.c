// Escreva um programa para ler, calcular e escrever a média aritmética entre dois números.

#include <stdio.h>

int main()
{
    float valor1, valor2, media;
    
    printf("Escreva um numero real: ");
    scanf("%f", &valor1);
    
    printf("\nEscreva outro numero real: ");
    scanf("%f", &valor2);
    
    media = (valor1 + valor2)/2;

    printf("\nA media aritmetica entre %.2f e %.2f e: %.2f", valor1, valor2, media);
    
    return 0;
}
