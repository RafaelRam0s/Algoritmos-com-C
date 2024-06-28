/*
Juca da Silva comprou um saco de ração com peso em quilos. Juca possui dois gatos para os quais fornece a quantidade de ração em gramas. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após cinco dias.
*/

#include<stdio.h>

int main() {

    float peso_da_racao_em_quilos, consumo_racao_em_gramas_gato_1, consumo_racao_em_gramas_gato_2, racao_restante;

    printf("\nPeso do saco de racao em quilos: ");
    scanf("%f", &peso_da_racao_em_quilos);

    printf("\nQuantidade de racao em gramas que o primeiro gato come: ");
    scanf("%f", &consumo_racao_em_gramas_gato_1);
    printf("\nQuantidade de racao em gramas que o segundo gato come: ");
    scanf("%f", &consumo_racao_em_gramas_gato_2);

    racao_restante = peso_da_racao_em_quilos * 1000;

    for (int i = 1; i <= 5; i++) {
        racao_restante = racao_restante - consumo_racao_em_gramas_gato_1 - consumo_racao_em_gramas_gato_2;
    }

    if (racao_restante < 0) {
        racao_restante = 0.0;
    }

    printf("\nApos 5 dias restara %f gramas de racao", racao_restante);

    return 0;
}
