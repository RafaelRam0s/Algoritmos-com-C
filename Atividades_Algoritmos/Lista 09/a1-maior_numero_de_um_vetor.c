/*
Encontrar o maior elemento e a sua respectiva posição de um vetor A com 15 elementos
*/

#include <stdio.h>

int main() {

    int vetor_a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int maior_numero_do_vetor_a = vetor_a[0], posicao_do_maior_numero = 0;

    for (int i = 0; i < 15; i++) {
        if (vetor_a[i] > maior_numero_do_vetor_a || i == 0)
        {
            posicao_do_maior_numero = i;
            maior_numero_do_vetor_a = vetor_a[i];
        }
    }

    printf("O maior valor do vetor A e o: %d, que esta na posicao %d", maior_numero_do_vetor_a, posicao_do_maior_numero);

    return 0;
}
