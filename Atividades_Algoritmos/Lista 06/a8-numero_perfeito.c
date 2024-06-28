/*
Faça um programa que leia 10 números inteiros positivos, calcule e escreva os que são números perfeitos. Sendo que, um número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número.

Exemplo: 6 é perfeito porque 1 + 2 + 3 = 6
28 é perfeito porque 1 + 2 + 4 + 7 + 14 = 28
*/

#include<stdio.h>

int main() {
    int continuar_no_programa = 1;

    while (continuar_no_programa != 0)
    {
        int numero_informado = 0;

        printf("\nInforme um numero para verificar se ele e perfeito: ");
        scanf("%d", &numero_informado);

        int soma_de_divisores = 1, numeros_primos = 2, divisor_do_informado = 1, divisor_do_informado_anterior = 1;

        while (soma_de_divisores < numero_informado)
        {
            divisor_do_informado_anterior = divisor_do_informado;
            
            while ( (divisor_do_informado <= divisor_do_informado_anterior) || (numero_informado % divisor_do_informado != 0) ) {
                divisor_do_informado++;
            }

            soma_de_divisores = soma_de_divisores + divisor_do_informado;
        }
        
        if (soma_de_divisores == numero_informado) {
            printf("\nO numero %d e perfeito", numero_informado);
        } else {
            printf("\nO numero %d NAO e perfeito", numero_informado);
        }

        printf("\nDigite qualquer numero diferente de 0 para continuar no programa: ");
        scanf("%d", &continuar_no_programa);
    }
    
    return 0;
}
