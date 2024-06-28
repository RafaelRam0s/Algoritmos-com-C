/*
Faça um algoritmo para calcular o valor da diagonal de um paralelepípedo de lados a, b, c:

L = raiz(a^2 + b^2)
D = raiz(L^2 + c^2)

Obs: Para este exercício utilize duas funções : uma para encontrar L e outra para D.
*/

#include<stdio.h>
#include<math.h>

float calcularL(int a, int b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

float calcularD(float L, int c) {
    return sqrt(pow(L, 2) + pow(c, 2));
}

int main() {
    int a, b, c;
    float L, D;

    printf("\nValor de a: ");
    scanf("%d", &a);

    printf("\nValor de b: ");
    scanf("%d", &b);

    printf("\nValor de c: ");
    scanf("%d", &c);

    L = calcularL(a, b);
    D = calcularD(L, c);

    printf("O valor da diagonal do paralepipedo e de: %f", D);

    return 0;
}
