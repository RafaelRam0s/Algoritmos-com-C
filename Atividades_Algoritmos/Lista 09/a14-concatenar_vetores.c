/*
Fazer um programa que leia duas sequências de inteiros, não necessariamente contendo a mesma quantidade de números, e construa um terceiro vetor, sem destruir os originais, que é a concatenação do primeiro com o segundo. Ou seja, se o primeiro vetor contiver os valores [7 3] e o segundo [9 2], a concatenação dos dois conterá [7 3 9 2]. A concatenação deve ser feita por uma função. O tamanho máximo das sequências deve estar definida no programa.
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR_A 1
#define TAMANHO_DO_VETOR_B 2

int vetor_a[TAMANHO_DO_VETOR_A] = {0}, vetor_b[TAMANHO_DO_VETOR_B] = {1, 2};

int main() {

    void concatenarDoisVetores(int vetor_1[], int tamanho_vetor_1, int vetor_2[], int tamanho_vetor_2);
    concatenarDoisVetores(vetor_a, TAMANHO_DO_VETOR_A, vetor_b, TAMANHO_DO_VETOR_B);

    return 0;
}

void concatenarDoisVetores(int vetor_1[], int tamanho_vetor_1, int vetor_2[], int tamanho_vetor_2) {
    
    int vetor_concatenado[tamanho_vetor_1 + tamanho_vetor_2];

    printf("\nVetor 1: [");
    for (int i = 0; i < tamanho_vetor_1; i++) {
        printf("%d ", vetor_1[i]);
        vetor_concatenado[i] = vetor_1[i];
    }
    printf("\b]");

    printf("\nVetor 2: [");
    for (int i = 0; i < tamanho_vetor_2; i++) {
        printf("%d ", vetor_2[i]);
        vetor_concatenado[tamanho_vetor_1 + i] = vetor_2[i];
    }
    printf("\b]");

    printf("\nConcatenacao dos vetores: [");
    for (int i = 0; i < (tamanho_vetor_1 + tamanho_vetor_2); i++) {
        printf("%d ", vetor_concatenado[i]);
    }
    printf("\b]");

}
