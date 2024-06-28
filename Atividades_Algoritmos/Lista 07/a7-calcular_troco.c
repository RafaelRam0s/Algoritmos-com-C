/*
Escrever um procedimento que, tem como parâmetros de entrada um valor em reais. Este procedimento calcula qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. Tal procedimento deve apresentar o valor lido e a relação de notas necessárias.
*/

#include<stdio.h>

float real_decomposto = 0;

int calcularTroco (int nota) {
    int quantidade_de_notas = 0;

    while ((real_decomposto - nota) >= 0)
    {
        quantidade_de_notas++;
        real_decomposto -= nota;
    }

    return quantidade_de_notas;
}

int main() {
    float reais;

    printf("\nInforme a quantidade de reais: ");
    scanf("%f", &reais);

    real_decomposto = reais;

    int quantidade_de_notas_100, quantidade_de_notas_50, quantidade_de_notas_10, quantidade_de_notas_5, quantidade_de_notas_1;

    quantidade_de_notas_100 = calcularTroco(100);
    quantidade_de_notas_50 = calcularTroco(50);
    quantidade_de_notas_10 = calcularTroco(10);
    quantidade_de_notas_5 = calcularTroco(5);
    quantidade_de_notas_1 = calcularTroco(1);

    printf("\nO valor lido foi de %.2f reais", reais);
    printf("\nNotas de 100: %d", quantidade_de_notas_100);
    printf("\nNotas de 50: %d", quantidade_de_notas_50);
    printf("\nNotas de 10: %d", quantidade_de_notas_10);
    printf("\nNotas de 5: %d", quantidade_de_notas_5);
    printf("\nNotas de 1: %d", quantidade_de_notas_1);
    printf("\nTroco retante: %f", real_decomposto);

    return 0;
}
