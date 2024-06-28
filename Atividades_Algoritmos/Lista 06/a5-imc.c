/*
Faça um programa que leia o nome, sexo, peso, altura e idade dos 50 funcionários de uma empresa.

Apresente:
IMC (Índice de Massa Corporal) de cada funcionário; (IMC = peso / altura * altura)
Percentual de funcionários obesos (IMC>=30);
Percentual de funcionários com peso normal (IMC<=25 para homens e IMC<=27 para mulheres);
*/

#include <stdio.h>

int main() {

    int quantidade_de_funcionarios = 1, contador = 1, idade = 0, quantidade_de_obesos = 0, quantidade_de_normais = 0;
    
    float peso = 0.0, altura = 0.0, imc_calculado = 0.0, percentual_de_obesos = 0.0, percentual_de_normais = 0.0;
    
    char nome[100] = "Rafael", sexo[2] = "M";

    printf("\nQuantos funcionarios deseja analisar? ");
    scanf("%d", &quantidade_de_funcionarios);

    while (contador <= quantidade_de_funcionarios)
    {
        printf("\nNome: ");
        scanf("%s", nome);

        printf("\nSexo ([M] Masculino ou [F] Feminino: ");
        scanf("%s", sexo);

        printf("\nPeso: ");
        scanf("%f", &peso);

        printf("\nAltura: ");
        scanf("%f", &altura);

        printf("\nIdade: ");
        scanf("%d", &idade);

        imc_calculado = ((float)peso / (altura * altura));

        if (imc_calculado >= 30.0) {
            quantidade_de_obesos++;
        }

        if (((sexo[0] == 'M' || sexo[0] == 'm') && imc_calculado <= 25.0) || ((sexo[0] == 'F' || sexo[0] == 'f') && imc_calculado <= 27.0)) {
            quantidade_de_normais++;
        }

        printf("\nO IMC do funcionario %d - %s e de: %f", contador, nome, imc_calculado);

        contador++;
    }

    percentual_de_obesos = ((float)quantidade_de_obesos * 100) / quantidade_de_funcionarios;
    percentual_de_normais = ((float)quantidade_de_normais * 100) / quantidade_de_funcionarios;

    printf("\nPercentual de funcionários obesos (IMC>=30): %f", percentual_de_obesos);
    printf("\nPercentual de funcionários com peso normal (IMC<=25 para homens e IMC<=27 para mulheres): %f", percentual_de_normais);


    return 0;
}
