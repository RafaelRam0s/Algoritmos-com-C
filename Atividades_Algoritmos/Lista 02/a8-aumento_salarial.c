/*
A empresa SoftLine SA decidiu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:
Salário Atual | Índice De Aumento 
0 – 300,00 | 10%
300,01 – 600,00 | 11%
600,01 – 900,00 | 12%
900,01 - 1.500,00 | 6%
1.500,01 – 2.000,00 | 3%
acima de 2.000,00 | sem aumento

Escrever um algoritmo que lê, para cada funcionário, o seu número e o seu salário atual e escreve o numero do funcionário, seu salário atual, o percentual de seu aumento e o valor do salário corrigido.
*/

#include <stdio.h>

int main() {

    int x = 0;
    float salario, salario_aumentado, porcentagem_de_aumento;
    char seu_numero[100], caracteres_digitados;
    
    printf("Qual o seu numero? ");
    do {
        caracteres_digitados = getchar();
        seu_numero[x] = caracteres_digitados;
        ++x;
    } while (caracteres_digitados != '\n');
    seu_numero[x - 1] = '\0';

    printf("\nQual o seu salario atual: ");
    scanf("%f", &salario);

    if (0 <= salario && salario <= 300.00)
    {
        porcentagem_de_aumento = 0.1;
        salario_aumentado = salario + (salario * porcentagem_de_aumento);

    } else if (salario <= 600.00) {
        porcentagem_de_aumento = 0.11;
        salario_aumentado = salario + (salario * porcentagem_de_aumento);

    } else if (salario <= 900.00) {
        porcentagem_de_aumento = 0.12;
        salario_aumentado = salario + (salario * porcentagem_de_aumento);

    } else if (salario <= 1500.00) {
        porcentagem_de_aumento = 0.06;
        salario_aumentado = salario + (salario * porcentagem_de_aumento);
        
    } else if (salario <= 2000.00) {
        porcentagem_de_aumento = 0.03;
        salario_aumentado = salario + (salario * porcentagem_de_aumento);

    } else {
        porcentagem_de_aumento = 0.0;
        salario_aumentado = salario;
    }

    printf("\nNumero de indentificacao: %s", seu_numero);
    printf("\nSalario atual: %.2f", salario);
    printf("\nPercentual de aumento: %.2f", porcentagem_de_aumento);
    printf("\nNovo salario: %.2f", salario_aumentado);

    return 0;
}
