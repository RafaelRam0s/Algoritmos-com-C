/*
Escreva um programa em Linguagem C, para ler do teclado uma matriz de MxN elementos inteiros que deverá ser impressa sob o Titulo de “Matriz Lida”. O programa deverá também criar uma nova matriz com todos os elementos da matriz lida, substituindo os valores pares da matriz pelos seus inversos, e os valores ímpares pelos seus quadrados. Imprimir a matriz resultante sob o título “Matriz Processada”. Usar N e M através de define (use quaisquer valores superiores a 50)
Exemplo: O programa leu os valores abaixo: (onde M = 2 e N = 3):
1 2 3 4 5 6
e produziu as impressões abaixo
Matriz Lida:
1 2 3
4 5 6
Matriz Processada
1.000000 0.500000 9.000000
0.250000 25.000000 0.166667
*/

#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

int main() {
    
    // Definindo uma matriz

    int matriz[LINHAS][COLUNAS] = {0};

    for (int contador_de_linhas = 0; contador_de_linhas < LINHAS; contador_de_linhas++)
    {
        for (int contador_de_colunas = 0; contador_de_colunas < COLUNAS; contador_de_colunas++)
        {
            scanf("%d", &matriz[contador_de_linhas][contador_de_colunas]);
        }
    }
    
    printf("\nMatriz Lida:");
    for (int contador_de_linhas = 0; contador_de_linhas < LINHAS; contador_de_linhas++)
    {
        printf("\n");
        
        for (int contador_de_colunas = 0; contador_de_colunas < COLUNAS; contador_de_colunas++)
        {
            printf("%d ", matriz[contador_de_linhas][contador_de_colunas]);
        }
    }

    // Processando a matriz

    float matriz_processada[LINHAS][COLUNAS] = {0};

    for (int contador_de_linhas = 0; contador_de_linhas < LINHAS; contador_de_linhas++)
    {
        for (int contador_de_colunas = 0; contador_de_colunas < COLUNAS; contador_de_colunas++)
        {
            if (matriz[contador_de_linhas][contador_de_colunas] % 2 == 0) {
                matriz_processada[contador_de_linhas][contador_de_colunas] = 1 / (float)matriz[contador_de_linhas][contador_de_colunas];
            } else {
                matriz_processada[contador_de_linhas][contador_de_colunas] = (float)matriz[contador_de_linhas][contador_de_colunas] * (float)matriz[contador_de_linhas][contador_de_colunas];
            }
            

        }
    }
    
    printf("\nMatriz Processada:");
    for (int contador_de_linhas = 0; contador_de_linhas < LINHAS; contador_de_linhas++)
    {
        printf("\n");
        
        for (int contador_de_colunas = 0; contador_de_colunas < COLUNAS; contador_de_colunas++)
        {
            printf("%f ", matriz_processada[contador_de_linhas][contador_de_colunas]);
        }
    }
    

    return 0;
}
