/*
Uma das práticas comuns das empresas é a busca por recursos financeiros em bancos e outras instituições financeiras, seja para investimento em novos equipamentos, para adentrar em novos mercados ou para pagamento das próprias contas em caso de inadimplência. Bancos e outras empresas de serviços financeiros oferecem empréstimo de dinheiro a um custo, chamado de juros. Estes juros são calculados de acordo com o período, podendo ter uma taxa mensal, semestral, anual, entre outras.

Uma empresa identificou a oportunidade e emprestar R$25.000,00 do mercado financeiro para investir em novos equipamentos. A taxa de juros praticada no mercado é de 5% ao mês, em média. O período máximo para pagamento do empréstimo é de 2 anos. Pede-se:

a. Faça um programa no qual o usuário informe os dados, que calcule os juros totais e mensais para o caso de empréstimo nas condições acima apresentadas.

b. Faça um programa no qual o usuário informe os dados, que calcule os juros totais e mensais para o caso de empréstimo a ser pago no período de 1 ano.

Sabe-se que a fórmula para juros simples é:
J = Pv * i * n onde,
J = juros
Pv = valor presente (present value)
i = taxa de juros
n = período
*/

#include <stdio.h>

#define empresa_taxa_de_juros 0.05
#define empresa_valor_inicial 25000.00
#define empresa_anos_max_para_pagar 2.0

int main() {

    float valor_inicial, juros_por_mes, juros_total;

    printf("\nValor do emprestimo: ");
    scanf("%f", &valor_inicial);

    if (valor_inicial >= empresa_valor_inicial)
    {
        printf("\nValor indisponivel, o valor maximo e de: %.2f", empresa_valor_inicial);
        return 0;
    }

    juros_por_mes = valor_inicial * empresa_taxa_de_juros;
    juros_total = valor_inicial * empresa_taxa_de_juros * empresa_anos_max_para_pagar * 12;

    printf("\nO juros totais ao final de %f anos e de: %.2f", empresa_anos_max_para_pagar, juros_total);
    printf("\nOs juros mensais sao de: %.2f", juros_por_mes);

    return 0;
}
