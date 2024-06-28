// Escreva um programa que calcule o consumo de combustível de um automóvel em Km/L, e o informe na tela.
/*
    Dados:
    KI = Quilometragem inicial
    KF = Quilometragem final
    CC = Consumo de combustível (nº de litros)
    DP = Distância percorrida (DP = KF - KI)
    GC = Gasto de combustível (GC = DP / CC)
*/

#include <stdio.h>

int main() {

    int  KI, KF, CC, DP;
    float GC;

    printf("Quilometragem inicial: ");
    scanf("%d", &KI);

    printf("\nQuilometragem final: ");
    scanf("%d", &KF);

    printf("\nQuanto consumiu de combustivel em litros: ");
    scanf("%d", &CC);

    DP = KF - KI;
    GC = (float)DP / (float)CC;

    printf("\nO consumo de combustivel do automovel em Km/L foi de: %f", GC);

    return 0;
}
