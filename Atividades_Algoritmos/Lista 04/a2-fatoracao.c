/*
Escreva um programa que realize o calculo do fatorial de um numero qualquer
*/

#include<stdio.h>

int main() {
    int numero_a_fatorar = 0, x = 1, resultado_da_fatoracao = 0;

    printf("Escolha um numero para fatorar: ");
    scanf("%d", &numero_a_fatorar);

    if (numero_a_fatorar > 0) {
        resultado_da_fatoracao = numero_a_fatorar;

        while(x < (numero_a_fatorar - 1)) {
            resultado_da_fatoracao = resultado_da_fatoracao * (numero_a_fatorar - x);
            x++;
        }
    }

    printf("O resultado do numero %d fatorado e: %d", numero_a_fatorar, resultado_da_fatoracao);

    return 0;
}
