/*
Uma construtora e incorporadora deve repassar ao final de período determinado, os valores relativos às receitas de um empreendimento para cada um de seus sócios, de acordo com as cotas (percentuais) estabelecidas. Esse repasse de valores pode ser feito de acordo com as necessidades de capital de cada um dos sócios, desde que préestabelecidas entre as partes.

Usualmente, empresas construtoras utilizam para fins de atualização de valores financeiros, do índice do Custo Unitário Básico (CUB) fornecido pelo Sindicato da Indústria da Construção Civil (SINDUSCON) de sua localidade. (https://sindusconpr.com.br/serie-historica-cub-pr-r8n-382-p). Esse indicador mede especificamente os valores de reajuste de materiais de construção e mão de obra relativos ao setor da construção.

Assim sendo, os fatos que ocorreram relativo aos repasses seguem abaixo: 
    A empresa recebeu o total de R$3.500.000,00 relativo a vendas.

    A proporção do Sócio 1 é de 25%. Dele serão descontados 10% de administração, e 15% de imposto de renda (ambos os descontos do valor integral das cotas). O valor será repassado imediatamente.

    A proporção do Sócio 2 é de 35%. Dele serão descontados 7% de administração, e 15% de imposto de renda (ambos os descontos efetuados no valor integral das cotas). O valor será repassado daqui a 2 meses, portanto será acrescido do reajuste de 0,46% ao mês (juros compostos).

    A proporção do Sócio 3 é de 40%. Dele não serão descontados valores de administração, apenas 15% de imposto de renda. O valor será repassado imediatamente.

    Pede-se:
        Elabore um programa que utilize de procedimentos e funções:
            a. O usuário deve informar apenas o total de receitas.
            b. Os valores de repasse dos três sócios deverão aparecer na tela.
            c. Os valores de imposto de renda e administração deverão aparecer na tela
*/

#include <stdio.h>
#include <math.h>

float solicitarValorTotalDeReceitas() {
    float valor_total_de_receitas;

    printf("\nTotal de receitas: ");
    scanf("%f", &valor_total_de_receitas);

    return valor_total_de_receitas;
}

float calcularValorLiquido(float valor_pro_socio, float taxa_de_administracao, float imposto_de_renda, float taxa_de_juros_composto, int prestacoes_do_juros_composto) {
    
    return ( (valor_pro_socio - taxa_de_administracao - imposto_de_renda) * pow((1 + taxa_de_juros_composto), prestacoes_do_juros_composto) );
}

void publicarReparticaoDoSocio(int numero_do_socio, float valor_pro_socio, float valor_liquido_pro_socio, float taxa_de_administracao, float imposto_de_renda) {
    printf("\n\n----------------------------------------------");
    printf("\nO valor total de repasse para o socio %d e de: %.2f", numero_do_socio, valor_pro_socio);
    printf("\nO valor liquido de repasse para o socio %d e de: %.2f", numero_do_socio, valor_liquido_pro_socio);
    printf("\nO valor da taxa administrativa para o socio %d e de: %.2f", numero_do_socio, taxa_de_administracao);
    printf("\nO valor do imposto de renda para o socio %d e de: %.2f", numero_do_socio, imposto_de_renda);
}

int main() {

    float dinheiro_recebido_em_vendas = 3500000.00;
    float total_de_receitas = solicitarValorTotalDeReceitas();

    float socio_1_proporcao_pro_socio = 0.25,
    socio_1_valor_pro_socio = (total_de_receitas * socio_1_proporcao_pro_socio),
    socio_1_taxa_de_administracao = (socio_1_valor_pro_socio * 0.1),
    socio_1_imposto_de_renda = (socio_1_valor_pro_socio * 0.15),
    socio_1_valor_liquido_pro_socio = calcularValorLiquido(socio_1_valor_pro_socio, socio_1_taxa_de_administracao, socio_1_imposto_de_renda, 0, 0);
    
    float socio_2_proporcao_pro_socio = 0.35,
    socio_2_valor_pro_socio = (total_de_receitas * socio_2_proporcao_pro_socio),
    socio_2_taxa_de_administracao = (socio_2_valor_pro_socio * 0.07),
    socio_2_imposto_de_renda = (socio_2_valor_pro_socio * 0.15),
    socio_2_valor_liquido_pro_socio = calcularValorLiquido(socio_2_valor_pro_socio, socio_2_taxa_de_administracao, socio_2_imposto_de_renda, 0.0046, 2); //(socio_2_valor_pro_socio - socio_2_taxa_de_administracao - socio_2_imposto_de_renda) * pow((1 + 0.0046), 2); // O Guilherme, veterano da área de economia informou o valor: 1.2116, porém não sei como ele chegou a essa conclusão, logo eu fiz pow((1 + 0.0046), 2) que seria igual a 1.00922116. Devido aos dados do enunciado, onde informa: "será acrescido do reajuste de 0,46% ao mês (juros compostos)" e como falou: "será repassado daqui a 2 meses", chegamos ao cálculo de juros compostos: Montante = Capital * (1 + Taxa_de_juros) ^ Periodo_de_tempo

    float socio_3_proporcao_pro_socio = 0.4,
    socio_3_valor_pro_socio = (total_de_receitas * socio_3_proporcao_pro_socio),
    socio_3_taxa_de_administracao = (socio_3_valor_pro_socio * 0.0),
    socio_3_imposto_de_renda = (socio_3_valor_pro_socio * 0.15),
    socio_3_valor_liquido_pro_socio = calcularValorLiquido(socio_3_valor_pro_socio, socio_3_taxa_de_administracao, socio_3_imposto_de_renda, 0, 0);

    publicarReparticaoDoSocio(1, socio_1_valor_pro_socio, socio_1_valor_liquido_pro_socio, socio_1_taxa_de_administracao, socio_1_imposto_de_renda);
    publicarReparticaoDoSocio(2, socio_2_valor_pro_socio, socio_2_valor_liquido_pro_socio, socio_2_taxa_de_administracao, socio_2_imposto_de_renda);
    publicarReparticaoDoSocio(3, socio_3_valor_pro_socio, socio_3_valor_liquido_pro_socio, socio_3_taxa_de_administracao, socio_3_imposto_de_renda);

    return 0;
}
