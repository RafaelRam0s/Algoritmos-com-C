/*
Calcule o imposto de renda de um contribuinte considerando que os dados do contribuinte são: número do CPF, número de dependentes e renda mensal. 
Para o contribuinte será feito um desconto de 5% de salário mínimo por dependente.
Os valores da alíquota para cálculo do imposto são:
Renda Líquida - Alíquota
até 2 salários mínimos - isento
2..3 salários mínimos - 5%
3..5 salários mínimos - 10%
5..7 salários mínimos  - 15%
acima de 7 salários mínimos - 20%
Deve ser fornecido o valor atual do salário mínimo.
*/

#include <stdio.h>
#define salario_minimo 1000.00

int main() {
    
    char cpf[] = "000.000.000-00";
    int num_dependentes = 0;
    float renda_mensal, desconto_dependente, valor_imposto, aliquota;

    printf("CPF: ");
    scanf("%s", cpf);

    printf("Numero de dependentes: ");
    scanf("%d", &num_dependentes);

    printf("Valor da renda mensal: ");
    scanf("%f", &renda_mensal);

    desconto_dependente = num_dependentes * ((5.0 / 100) * salario_minimo);

    if (renda_mensal <= (2 * salario_minimo))
    {
        printf("O valor do imposto esta isento");
    }
    else if (renda_mensal <= (3 * salario_minimo))
    {
        aliquota = 5.0 / 100;
        valor_imposto = (renda_mensal * aliquota) - desconto_dependente;
        if (valor_imposto < 0) {
            valor_imposto = 0;
        }
        printf("A taxa de imposto de renda cobrada a voce e de: %.2f", valor_imposto);
    }
    else if (renda_mensal <= (5 * salario_minimo))
    {
        aliquota = 10.0 / 100;
        valor_imposto = (renda_mensal * aliquota) - desconto_dependente;
        if (valor_imposto < 0) {
            valor_imposto = 0;
        }
        printf("A taxa de imposto de renda cobrada a voce e de: %.2f", valor_imposto);
    }
    else if (renda_mensal <= (7 * salario_minimo))
    {
        aliquota = 15.0 / 100;
        valor_imposto = (renda_mensal * aliquota) - desconto_dependente;
        if (valor_imposto < 0) {
            valor_imposto = 0;
        }
        printf("A taxa de imposto de renda cobrada a voce e de: %.2f", valor_imposto);
    }
    else
    {
        aliquota = 20.0 / 100;
        valor_imposto = (renda_mensal * aliquota) - desconto_dependente;
        if (valor_imposto < 0) {
            valor_imposto = 0;
        }
        printf("A taxa de imposto de renda cobrada a voce e de: %.2f", valor_imposto);
    }

    return 0;
}
