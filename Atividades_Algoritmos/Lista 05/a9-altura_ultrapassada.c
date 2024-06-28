/*
Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que Ciclano seja maior que Fulano. 
*/

#include<stdio.h>

int main() {

    int anos_passados = 0;

    float altura_fulano = 1.5, crescimento_por_ano_em_metro_de_fulano = 0.2, altura_ciclano = 1.1, crescimento_por_ano_em_metro_de_ciclano = 0.3;

    while (altura_ciclano <= altura_fulano)
    {
        altura_fulano = altura_fulano + crescimento_por_ano_em_metro_de_fulano;
        altura_ciclano = altura_ciclano + crescimento_por_ano_em_metro_de_ciclano;

        anos_passados++;
    }

    printf("Serao necessarios %d anos para que Ciclano seja maior que Fulano", anos_passados);
    
    return 0;
}
