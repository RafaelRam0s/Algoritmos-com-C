/*
[Algoritmos Estruturados - H. Farrer] Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se é um triângulo eqüilátero, isósceles ou escaleno. Se eles não formarem um triângulo, escreva uma mensagem.
*/

#include<stdio.h>

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if (!(((y - z) < x && x < (y + z)) && ((x - z) < y && y < (x + z)) && ((x - y) < z && z < (x + y)))) {
        printf("nao e triangulo");
    } else if ( x == y && y == z) {
        printf("equilatero");
    } else if ((x == y && y != z) || (x == z && y != z) || (y == z && y != x)) {
        printf("isosceles");
    } else if (x != y && y != z && x != z) {
        printf("escaleno");
    }
    
    return 0;
}
