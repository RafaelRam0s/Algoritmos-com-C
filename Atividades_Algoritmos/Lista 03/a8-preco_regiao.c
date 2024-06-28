/*
Construa um programa que, tendo como dados de entrada o preço de um produto e um código de origem, mostre o preço junto de sua procedência (Ex.: 500.00 – Sul). Caso o código não seja
nenhum dos especificados, o produto deve ser encarado como importado.
Código de origem:
1 – Sul 
2 – Norte 
3 – Leste 
4 – Oeste 
5 ou 6 – Nordeste
7 ou 8 ou 9 – Sudeste
10 até 20 – Centro Oeste
25 até 50 – Nordeste
*/

#include<stdio.h>

int main() {
    float preco;
    int codigo_de_origem;
    char regiao[100];

    printf("Preco: ");
    scanf("%f", &preco);

    printf("Codigo de origem: ");
    scanf("%d", &codigo_de_origem);

    if (codigo_de_origem == 1)
    {
        char regiao[100] = "Sul";
    } else if (codigo_de_origem == 2) {
        char regiao[100] = "Norte";
    } else if (codigo_de_origem == 3) {
        char regiao[100] = "Leste";
    } else if (codigo_de_origem == 4) {
        char regiao[100] = "Oeste";
    } else if (codigo_de_origem >= 5 && codigo_de_origem <= 6) {
        char regiao[100] = "Nordeste";
    } else if (codigo_de_origem >= 7 && codigo_de_origem <= 9) {
        char regiao[100] = "Sudeste";
    } else if (codigo_de_origem >= 10 && codigo_de_origem <= 20) {
        char regiao[100] = "Centro Oeste";
    } else if (codigo_de_origem >= 25 && codigo_de_origem <= 50) {
        char regiao[100] = "Nordeste";
    } else {
        char regiao[100] = "Importado";
    }

    printf("%.2f - %s", preco, regiao);

    return 0;
}
