/*
Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. Mostrar uma mensagem no caso de código inválido.

Código Produto - Preço Unitário
1001 - R$ 5,32
1324 - R$ 6,45
6548 - R$ 2,37
987 - R$ 5,32
7623 - R$ 6,45
*/

#include<stdio.h>

int main() {

    int quantia_comprada, x = 0, codigo_do_produto;
    float preco_do_produto, preco_total;
    
    printf("Codigo do produto: ");
    scanf("%d", &codigo_do_produto);

    if (codigo_do_produto == 1001) {
        preco_do_produto = 5.32;
    } else if (codigo_do_produto == 1324) {
        preco_do_produto = 6.45;
    } else if (codigo_do_produto == 6548) {
        preco_do_produto = 2.37;
    } else if (codigo_do_produto == 987) {
        preco_do_produto = 5.32;
    } else if (codigo_do_produto == 7623) {
        preco_do_produto = 6.45;
    } else {
        printf("Codigo invalido");
        return 0;
    }

    printf("Quantia comprada: ");
    scanf("%d", &quantia_comprada);

    preco_total = preco_do_produto * quantia_comprada;

    printf("Valor total: R$%.2f", preco_total);

    return 0;
}
