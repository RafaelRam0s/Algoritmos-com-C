/*
Escreva um programa para calcular e mostrar o reajuste salarial de uma empresa que possui 1000 funcionários, de acordo com os seguintes critérios:
1. os funcionários com salário inferior a 10.000,00 devem ter um reajuste de 55%;
2. os funcionários com salário entre 10.000,00 (inclusive) e 25.000,00 (inclusive) devem ter um reajuste de 30%;
3. e os funcionários com salário superior a 25.000,00 devem ter um reajuste de 20%.
*/

#include<stdio.h>

int main() {

    int continuar_no_programa = 1, contador = 1;
    float salario = 0.0, reajuste = 0.0, salario_reajustado = 0.0;


    while (continuar_no_programa == 1)
    {
        printf("\n------ Funcionario %d -------", contador);

        printf("\nSalario: ");
        scanf("%f", &salario);

        if (salario < 10000.00) {
            reajuste = 0.55;
        } else if (salario <= 10000.00 && salario <= 25000.00) {
            reajuste = 0.3;
        } else {
            reajuste = 0.2;
        }

        salario_reajustado = salario + (salario * reajuste);

        printf("\nO salario deste funionario sera reajustado para: %.2f", salario_reajustado);

        contador++;
    }
    
    return 0;
}
