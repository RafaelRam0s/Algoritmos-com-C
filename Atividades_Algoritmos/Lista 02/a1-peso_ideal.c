/*
Tendo como dados de entrada a altura e o sexo de uma pessoa (1- masculino e 0 - feminino), construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*h)-58
- para mulheres: (62.1*h)-44.7
*/

#include <stdio.h>

int main() {

    int sexo;
    float altura, peso_ideal;

    printf("\nAltura: ");
    scanf("%f", &altura);

    printf("\nDigite seu sexo, 0 para feminino e 1 para masculino: ");
    scanf("%d", &sexo);

    if (sexo == 0) // se feminino
    {
        peso_ideal = 62.1 * altura - 44.7;
        printf("\nO seu peso ideal e de: %.2f", peso_ideal);
    }
    else if (sexo == 1) // se masculino
    {
        peso_ideal = 72.7 * altura - 58;
        printf("\nO seu peso ideal e de: %.2f", peso_ideal);
    }
    else
    {
        printf("\nValor invalido");
    }

    return 0;
}
