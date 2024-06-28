/*
Fazer um programa que calcule o volume de uma esfera em função do raio R. O raio deverá variar de 0 a 20 cm de 0.5 em 0.5cm.
V = (4/3) * π * R^3
*/

#include<stdio.h>
#include<math.h>

int main() {

    float raio = 0.0, volume_da_esfera = 0;

    while (raio >= 0.0 && raio <= 20.0) {

        volume_da_esfera = (4.0 / 3) * 3.14 * pow(raio, 3);

        printf("\nO volume da esfera de raio %f, e de: %f", raio, volume_da_esfera);

        raio = raio + 0.5;
    }

    return 0;
}
