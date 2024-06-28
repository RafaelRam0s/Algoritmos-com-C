/*
Escreva um programa que calcule e apresente a série de fibonacci. A quantidade de termos a serem apresentados devem ser informados pelo usuário. Apresente também a somatória de todos os termos exibidos pela serie de fibonacci solicitada.

Série de Fibonacci = “1, 1, 2, 3, 5, 8, 13, 21, 34, 55”
*/

#include<stdio.h>

int main() {

    int quantidade_de_termos_de_fibonacci_escolhida = 0;

    printf("Ate qual serie de Fibonacci voce gostaria de ver? ");
    scanf("%d", &quantidade_de_termos_de_fibonacci_escolhida);

    int contador_fibonacci = 1, numero_fibonacci_anterior = 0, numero_fibonacci_atual = 1, numero_fibonacci_tela = 1, soma_dos_numeros_de_fibonacci = 1;

    printf("A serie fica assim: %d", numero_fibonacci_tela);

    while (contador_fibonacci < quantidade_de_termos_de_fibonacci_escolhida) {
        
        numero_fibonacci_tela = numero_fibonacci_atual + numero_fibonacci_anterior;
        numero_fibonacci_anterior = numero_fibonacci_atual;
        numero_fibonacci_atual = numero_fibonacci_tela;

        printf(", %d", numero_fibonacci_tela);

        soma_dos_numeros_de_fibonacci = soma_dos_numeros_de_fibonacci + numero_fibonacci_atual;

        contador_fibonacci++;
    }
    
    printf("\nA soma dos elementos de Fibonacci na quantidade escolhida fica igual a: %d", soma_dos_numeros_de_fibonacci);

    return 0;
}
