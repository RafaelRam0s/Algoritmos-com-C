/*
Fazer um programa em C para ler do teclado dados onde cada linha contém um número inteiro. Para cada número lido, calcular o seu sucessor par, imprimindo-os dois a dois em listagem de saída. A última entrada de dados contém o número zero. OBSERVAÇÃO: o zero não deve ser considerado para o cálculo do sucessor par. 
*/

#include<stdio.h>

int main() {

    int continuar_no_programa = 1;
    int numero_informado, sucessor_par;

    while (continuar_no_programa != 0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero_informado);

        if (numero_informado % 2 == 0) {
            sucessor_par = numero_informado + 2;
        } else {
            sucessor_par = numero_informado + 1;
        }
        
        printf("\nO sucessor par de %d e: %d", numero_informado, sucessor_par);

        printf("\nDigite qualquer numero diferente de 0 para continuar no programa: ");
        scanf("%d", &continuar_no_programa);
    }

    return 0;
}
