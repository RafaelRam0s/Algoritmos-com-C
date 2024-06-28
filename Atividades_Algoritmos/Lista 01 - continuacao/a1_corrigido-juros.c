#include<stdio.h>

int main() {
    int per;
    float juros, pv, taxajuros, jurosmensais;

    printf("Informe o capital a ser tomado: ");
    scanf("%f", &pv);
    //25000.00

    printf("\nInforme o valor da taxa de juros praticada: ");
    scanf("%f", &taxajuros);
    //0.05

    printf("\nInforme a quantidade de meses para a quitação: ");
    scanf("%d", &per);
    //24
    //12

    juros = pv * taxajuros * per;
    jurosmensais = juros / per;

    printf("\nO valor de juros totais do periodo e: %f", juros);
    printf("\nO valor de juros mensais totais do periodo e: %f", jurosmensais);

    return 0;
}