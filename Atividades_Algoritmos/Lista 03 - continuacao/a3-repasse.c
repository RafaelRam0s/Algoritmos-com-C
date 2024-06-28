/*
No ramo da construção civil, existem empresas que adquirem terrenos para a construção de novos imóveis, que serão posteriormente comercializados. Essas empresas são chamadas de construtoras, pela atividade de construção que exercem, e incorporadoras, pela atividade de incorporação e criação de novas unidades habitacionais (residências).

É comum que alguns empreendimentos possam contar com vários sócios cotistas que possuem participação proporcional em receitas e despesas da obra. Torna-se então comum que, dadas as devidas condições, os sócios possam efetuar retiradas de dinheiro relativo às suas cotas.

No caso em questão, a empresa precisa distribuir suas receitas mensais de R$750.000,00 entre os sócios do empreendimento. No entanto, o valor relativo às alíquotas de impostos e à taxa de administração deve antes ser descontada.

Sócio - Proporção a transferir
Cotas próprias - 30%
Rogério - 20%
Luiz - 20%
Neymar - 30%
Pis / Cofins (tributos) - 3,65%
Taxa de administração - 3,00%

Pede-se:
    a. Elabore um programa em que o usuário informe a quantidade de receitas, indique as deduções realizadas e aponte o valor exato a ser transferido para cada um dos sócios do empreendimento (utilize o comando de decisão switch).
*/

#include<stdio.h>

int main() {
    float rec, trib, adm, desc, repasse;
    int opcao;

    printf("Indique o total de receitas a serem distribuidas: ");
    scanf("%f", &rec);
    printf("\nIndique qual deducao devera ser realizadas:");
    printf("\n[1] - Apenas PIS e COFINS");
    printf("\n[2] - Apenas Taxa administrativa");
    printf("\n[3] - Taxa administrativa e PIS e COFINS\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("\n Apenas PIS e COFINS");desc=0.0365;break;
        case 2: printf("\n Apenas Taxa administrativa");desc=0.03;break;
        case 3: printf("\n Taxa administrativa e PIS e COFINS\n");desc=0.0665;break;
    }

    printf("\nRepasses e retencoes");
    printf("\nReceitas totais: %f", rec);
    printf("\nDesconto PIS e COFINS: %f", rec * 0.0365);
    printf("\nReceitas totais: %f", rec * 0.03);
    printf("\nReceitas totais: %f", rec * 0.0665);
    
    repasse = rec - (rec * 0.0665);

    printf("\nValores a repassar: %f", repasse);
    printf("\nCotas Proprias: %f", repasse * 0.3);
    printf("\nRogerio: %f", repasse * 0.2);
    printf("\nLuiz: %f", repasse * 0.2);
    printf("\nNeymar: %f", repasse * 0.3);

    return 0;
}
