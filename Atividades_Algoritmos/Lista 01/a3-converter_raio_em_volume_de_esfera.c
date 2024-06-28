// Escreva um programa que calcule o volume de uma esfera. Para tanto, o usuário deve fornecer a medida do raio da mesma.
// Nota: lembre-se que o volume da esfera é dado por: V = (4.pi.r^3)/3

#include <stdio.h>
#include <math.h>

#define pi 3.14

int main() {

    printf("Informe o valor do raio da esfera para encontrar seu volume: ");
    float raio_da_esfera;
    scanf("%f", &raio_da_esfera);

    float volume_da_esfera;

    volume_da_esfera = (4 * pow(raio_da_esfera, 3) * pi)/3;

    printf("\nO valor do volume da esfera e: %f", volume_da_esfera);

    return 0;
}
