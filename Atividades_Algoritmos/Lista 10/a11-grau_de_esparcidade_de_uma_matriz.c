/*
Escrever um programa em linguagem C que leia, a partir do teclado, os elementos de uma matriz com valores reais de dimensão M × N. 
Determine e imprima na tela o Grau de Esparsidade da Matriz. 
O Grau de Esparsidade de uma Matriz é a relação entre o Número de Elementos Nulos e o Número Total de Elementos da Matriz. 
Os valores de M e N devem ser definidos pela diretiva #define.
Exemplo de execução (para M = 3 e N = 4):
3 0 0 2
0 2 1 0
0 3 7 1
O grau de Esparsidade é 5 / 12 = 0.4166
*/

#include <stdio.h>

#define M 3
#define N 4

int main() {

    // Definir a matriz

    float matriz[M][N];

    printf("\nEscreva os valores para a matriz %dX%d", M, N);
    for (int contador_da_linha = 0; contador_da_linha < M; contador_da_linha++) {
        for (int contador_da_coluna = 0; contador_da_coluna < N; contador_da_coluna++) {
            printf("\nElemento %d%d: ", contador_da_linha + 1, contador_da_coluna + 1);
            scanf("%f", &matriz[contador_da_linha][contador_da_coluna]);
        }
    }

    // Determinar o grau de Esparcidade

    int numero_de_elementos_nulos_dentro_da_matriz = 0;
    for (int contador_da_linha = 0; contador_da_linha < M; contador_da_linha++) {
        for (int contador_da_coluna = 0; contador_da_coluna < N; contador_da_coluna++) {
            
            if (matriz[contador_da_linha][contador_da_coluna] == 0) {
                numero_de_elementos_nulos_dentro_da_matriz++;
            }

        }
    }

    float grau_de_esparcidade = (float)numero_de_elementos_nulos_dentro_da_matriz / (float)(M * N);

    printf("\nO grau de esparcidade e %d / %d = %f", numero_de_elementos_nulos_dentro_da_matriz, (M * N),  grau_de_esparcidade);

    return 0;
}
