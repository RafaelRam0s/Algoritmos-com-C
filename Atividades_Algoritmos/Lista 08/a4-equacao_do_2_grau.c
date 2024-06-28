/*
Faça um programa que calcule as raízes de uma eq. de 2o. grau, dados os coeficientes a, b e c (parâmetros de entrada da função para o calculo do delta). Passando o delta como parâmetro para outra função, calcule X e Y ou apresente caso preciso que a equação não possui raízes reais.
*/

#include<stdio.h>

int calcularDelta(float a, float b, float c) {
    return ( (b*b) - (4 * a * c) );
}

void calcularBhaskara(float delta, float a, float b) {
    printf("\nO valor da primeira raiz e: %f", ( (((-1) * b) - delta) / (float)(2 * a) ));
    printf("\nO valor da segunda raiz e: %f", ( (((-1) * b) + delta) / (float)(2 * a) ));
}

int main() {

    float a, b, c;

    printf("\nValor de a: ");
    scanf("%f", &a);
    printf("\nValor de b: ");
    scanf("%f", &b);
    printf("\nValor de c: ");
    scanf("%f", &c);

    float delta = calcularDelta(a, b, c);

    if (delta < 0.0) {
        /*
            a = 1
            b = -4
            c = 5
        */
        printf("\nAs raizes da equacao nao possuem valor em reais");
    } else if (delta == 0.0) {
        /*
            a = 4
            b = -4
            c = 1
        */
        printf("\nA raiz da equacao e: %f", ( ((-1) * b) / (float)(2 * a) ));
    } else {
        /*
            a = 1
            b = -5
            c = 6
        */
        calcularBhaskara(delta, a, b);
    }

    float x_do_vertice = ( ((-1) * b) / (float)(2 * a) ), y_do_vertice = ( ((-1) * delta) / (float)(4 * a) );
    
    printf("\nO vertice da equacao e no ponto: (%f; %f)", x_do_vertice, y_do_vertice);

    return 0;
}
