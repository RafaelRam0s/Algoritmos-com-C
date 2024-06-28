// O galão imperial (abreviação: gal) é uma unidade de medida de volume de líquidos, utilizada no Reino Unido. Sabendo que 1gal equivale a 4,54609 litros, faça um programa que converta uma determinada quantidade de galões imperiais em litros.

#include <stdio.h>

#define um_gal_em_litros 4.54609

int main() {

    printf("Informe a quantidade de galoes imperiais que deseja converter para litro: ");

    float galoes_informado;
    scanf("%f", &galoes_informado);

    float litro_de_galoes = (galoes_informado * um_gal_em_litros);

    printf("\nA quantidade de %f galoes da um total de %f litros", galoes_informado, litro_de_galoes);

    return 0;
}
