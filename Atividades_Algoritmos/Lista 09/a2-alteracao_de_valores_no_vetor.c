/*
Dado o vetor F com 20 elementos inteiros, substituir cada elementos por ele mesmo multiplicado pela posição do elemento no conjunto, para i = 0,1, 2,... 19.
*/

#include <stdio.h>

int main() {

    int vetor_f[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int vetor_f_alterado[20];

    for (int i = 0; i < 20; i++) {

        vetor_f_alterado[i] = vetor_f[i] * i;

        printf("\nO valor que estava na posição %d era: %d, agora ele ficou %d", i, vetor_f[i], vetor_f_alterado[i]);
    }    

    return 0;
}
