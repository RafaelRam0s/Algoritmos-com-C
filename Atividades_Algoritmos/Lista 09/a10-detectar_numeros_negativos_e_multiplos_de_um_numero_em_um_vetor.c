/*
Sendo dado um conjunto A de 100 números inteiros ,determinar 2 outros conjuntos, contendo o primeiro conjunto os números negativos de A e o segundo conjunto os números que são múltiplos de um número inteiro X . Observação: Considerar que existam pelo menos um múltiplo e um negativo.
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 10

int main() {

    int 
    conjunto_a[TAMANHO_DO_VETOR] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4},
    numero_x = 0, 
    conjunto_a_negativos[TAMANHO_DO_VETOR] = {0}, 
    conjunto_multiplos_inteiros_do_numero_x[TAMANHO_DO_VETOR] = {0};

    printf("\nOs numeros negativos sao:");
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        if (conjunto_a[i] < 0) {
            conjunto_a_negativos[i] = conjunto_a[i];
            printf("\n%d", conjunto_a_negativos[i]);
        }
    }

    printf("\nNumeros que sao multiplos do numero inteiro %d:", numero_x);
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        if (numero_x != 0 && conjunto_a[i] % numero_x == 0) {
            conjunto_multiplos_inteiros_do_numero_x[i] = conjunto_a[i];
            printf("\n%d", conjunto_multiplos_inteiros_do_numero_x[i]);
        }
    }

    return 0;
}
