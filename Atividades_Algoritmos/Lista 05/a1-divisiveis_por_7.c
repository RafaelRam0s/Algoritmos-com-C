/*
Faça um programa em C que escreve os números múltiplos de 7 entre 100 e 200, bem como a soma destes números.
*/

#include<stdio.h>

int main() {

    int contador = 100, soma_de_divisiveis_por_7 = 0;

    while(contador >= 100 && contador <= 200) {
        if (contador % 7 == 0) {
            printf("\n%d e um numero divisivel por 7", contador);
            soma_de_divisiveis_por_7 += contador;
            printf("\nA soma de divisiveis por 7 deu: %d", soma_de_divisiveis_por_7);
        }

        contador++;
    }

    return 0;
}
