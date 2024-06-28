// Faça um programa que leia o número do funcionário, o número de horas trabalhadas mensais, o valor que recebe por hora e o número de filhos com idade menor de 14 anos. Calcular e escrever o salário deste funcionário, sendo que cada filho menor de 14 anos acrescenta 10% do salário

#include <stdio.h>

#define taxa_menor_de_idade 10

int main() {

    printf("Numero do funcionario: ");
    int codigo_do_funcionario;
    scanf("%d", codigo_do_funcionario);

    printf("\nNumero de horas trabalhadas mensais: ");
    int hora_trabalhada_mensal;
    scanf("%d", &hora_trabalhada_mensal);
    
    printf("\nValor que recebe por hora: ");
    float valor_por_hora;
    scanf("%f", &valor_por_hora);
    
    printf("\nNumero de filhos com idade menor de 14 anos: ");
    int numero_de_filhos_menores_de_idade;
    scanf("%d", &numero_de_filhos_menores_de_idade);

    float salario;
    salario = (valor_por_hora * hora_trabalhada_mensal);
    salario = salario + (numero_de_filhos_menores_de_idade * (salario/taxa_menor_de_idade));

    printf("\nO seu salario e de: R$%.2f", salario);
    
    return 0;
}
