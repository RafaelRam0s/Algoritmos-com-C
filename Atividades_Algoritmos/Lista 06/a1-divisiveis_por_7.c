/*
Faça um programa em C que escreve os números múltiplos de 7 entre 100 e 200, bem como a soma destes números
*/

#include<stdio.h>

int main() {

    int contador = 100, soma_de_divisiveis_por_7 = 0;

    while ( contador >= 100 && contador <= 200 ) {
        if (contador % 7 == 0) {
            printf("\nO numero %d e divisivel por 7", contador);

            soma_de_divisiveis_por_7 += contador;
        }

        contador++;
    }

    printf("\nA soma dos numeros divisiveis por 7 e: %d", soma_de_divisiveis_por_7);

    return 0;
}
