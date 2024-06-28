/*
As empresas que possuem reservas de capital buscam onde melhor aplicar o dinheiro que sobra. Nestes casos, empresas optam por investimentos que pagam bem. Em outras palavras, investimentos que geram retorno financeiro aceitável. Considere que uma construtora recebeu o valor de R$400.000,00, relativo à venda de uma unidade habitacional ainda em construção, vendida na planta. A empresa estima não precisar deste capital pelo período de 2 anos e meio. Sabendo-se que o rendimento da aplicação financeira desejada é de 0,8% ao mês, pede-se:

a. Faça um programa que calcule os rendimentos totais e mensais da aplicação, se o período escolhido for de 1 ano e meio.

b. Faça um programa que calcule os rendimentos totais e mensais da aplicação, se o período escolhido for de 2 anos e meio.

*Considere, para fins de remuneração, juros simples
*/

#define valor_recebido 400000
#define periodo_sem_precisar_do_valor_em_anos 2.5
#define rendimento_ao_mes 0.008

#include <stdio.h>

int main() {

    int meses_de_pagamento = periodo_sem_precisar_do_valor_em_anos * 12;
    float rendimento_total, rendimento_mensal;

    rendimento_total = valor_recebido * rendimento_ao_mes * meses_de_pagamento;
    rendimento_mensal = valor_recebido * rendimento_ao_mes;

    printf("\nRendimento total: %.2f\nRendimento por mes: %.2f", rendimento_total, rendimento_mensal);

    return 0;
}
