/*
Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste de acordo com a categoria: se a mesma for A=50%, B=25%, C=15% e outras 5%. Depois mostre o valor antigo, o percentual de reajute e o valor reajustado.
*/

#include<stdio.h>

int main() {

    float preco, novo_preco, reajuste;
    char categoria_do_produto[2];
    int x = 0;

    printf("\nCategoria do produto: ");
    do {
        categoria_do_produto[x] = getchar();
        ++x;
    } while (categoria_do_produto[x - 1] != '\n');

    printf("\nPreco do produto: ");
    scanf("%f", &preco);

    if (categoria_do_produto[0] == 'A')
    {
        reajuste = 0.5;
    } else if (categoria_do_produto[0] == 'B') {
        reajuste = 0.25;
    } else if (categoria_do_produto[0] == 'C') {
        reajuste = 0.15;
    } else {
        reajuste = 0.05;
    }

    novo_preco = preco - (reajuste * preco);

    printf("\nCategoria do produto: %s\nPreco do produto: %.2f\nNovo preco do produto: %.2f", categoria_do_produto, preco, novo_preco);

    return 0;
}
