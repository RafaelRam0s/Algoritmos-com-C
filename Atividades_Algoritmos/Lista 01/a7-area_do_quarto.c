// Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18W de potência. Faça um programa que recebe as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser usada.

#include <stdio.h>

#define gasto_iluminacao_por_m2_em_watts 18

int main() {

    int largura, comprimento, area, potencia_de_iluminacao;

    printf("Largura do quarto em metros: ");
    scanf("%d", &largura);

    printf("\nComprimento do quarto em metros: ");
    scanf("%d", &comprimento);

    area = largura * comprimento;
    potencia_de_iluminacao = area * gasto_iluminacao_por_m2_em_watts;

    printf("\nA area do seu quarto e de %d e a potencia de iluminacao que devera ser usada e de: %d", area, potencia_de_iluminacao);

    return 0;
}
