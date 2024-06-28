/*
Escreva um programa para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Caso o ponto não pertença a nenhum quadrante, escrever se ele esta' sobre o eixo X, eixo Y ou na origem.
*/

#include<stdio.h>

int main() {

    int x, y;
    printf("Coordenada x: ");
    scanf("%d", &x);
    printf("Coordenada y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("Primeiro quadrante");
    } else if (x < 0 && y > 0) {
        printf("Segundo quadrante");
    } else if (x < 0 && y < 0) {
        printf("Terceiro quadrante");
    } else if (x > 0 && y < 0) {
        printf("Quarto quadrante");
    } else if (x == 0 && y == 0) {
        printf("Origem");
    } else if (x == 0 && y != 0) {
        printf("Eixo Y");
    } else if (x != 0 && y == 0) {
        printf("Eixo X");
    }

    return 0;
}
