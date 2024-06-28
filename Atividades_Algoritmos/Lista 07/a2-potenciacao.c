/*
Faça um programa que receba do usuário um número positivo e diferente de zero, calcule e mostre: (para cada calculo utilize procedimentos):
    1. A quadrado do número;
    2. A raiz cúbica do número;
    3. A raiz quadrada do número;
    4. O cubo do número.
*/

#include<stdio.h>
#include<math.h>

int main() {

    int numero;

    printf("Informe um numero positivo e diferente de zero: ");
    scanf("%d", &numero);

    float quadrado, raiz_cubica, raiz_quadrada, cubo;

    quadrado = pow(numero, 2);
    raiz_cubica = pow(numero, (1 / (float)3));
    raiz_quadrada = pow(numero, (1 / (float)2));
    cubo = pow(numero, 3);

    printf("\nO quadrado do numero: %f", quadrado);
    printf("\nA raiz cubica do numero: %f", raiz_cubica);
    printf("\nA raiz quadrada do numero: %f", raiz_quadrada);
    printf("\nO cubo do numero: %f", cubo);

    return 0;
}
