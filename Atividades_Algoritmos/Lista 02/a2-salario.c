/*
Fazer um programa para calcular o salário líquido de um funcionário com base na seguinte fórmula: SALARIO LIQUIDO=SALARIO BRUTO+PROVENTOS-DESCONTO
Devem ser respeitadas as seguintes condições para cálculo do desconto:
- Salário Bruto <=50, desconto de 5%;
- Salário Bruto > 50, desconto de 10 %
*/

#include <stdio.h>

int main() {

    float salario_liquido, salario_bruto, proventos, desconto;

    printf("Salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Valor total de proventos: ");
    scanf("%f", &proventos);

    if (salario_bruto <= 50)
    {
        desconto = salario_bruto * (5.0 / 100);
    } 
    else
    {
        desconto = salario_bruto * (10.0 / 100);
    }

    salario_liquido = salario_bruto + proventos - desconto;

    printf("\nO salario liquido sera de: %.2f", salario_liquido);

    return 0;
}
