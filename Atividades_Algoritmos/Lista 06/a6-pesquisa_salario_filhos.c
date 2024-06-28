/*
Uma empresa fez uma pesquisa com 100 de seus funcionários, coletando dados sobre o salário e número de filhos. A empresa deseja saber: a média salarial destes funcionários; a média do número de filhos; e o percentual de pessoas com salário de até R$ 300,00, que possuem filhos.
*/

#include<stdio.h>

int main() {

    int continuar_no_programa = 1, numero_de_filhos = 0, contador = 0, soma_de_filhos = 0, funcionarios_com_300_que_tem_filho = 0;

    float salario = 0.0, soma_de_salarios = 0.0, media_salarial = 0.0, media_de_filhos = 0.0, percentual_de_ate_300_que_tem_filho = 0.0;

    while (continuar_no_programa != 0) {

        printf("Salario: ");
        scanf("%f", &salario);

        soma_de_salarios += salario;

        printf("\nNumero de filhos: ");
        scanf("%d", &numero_de_filhos);

        soma_de_filhos += numero_de_filhos;

        if ( (salario <= 300.00) && (numero_de_filhos =! 0) ) {
            funcionarios_com_300_que_tem_filho++;
        }

        contador++;

        printf("Digite [0] para parar o programa");
        scanf("%d", &continuar_no_programa);
    }

    media_salarial = (float)soma_de_salarios / contador;
    media_de_filhos = (float)soma_de_filhos / contador;

    percentual_de_ate_300_que_tem_filho = (float)funcionarios_com_300_que_tem_filho * 100 / contador;

    printf("Media salarial: %f", media_salarial);
    printf("Media de numero de filhos: %f", media_de_filhos);
    printf("Percentual de pessoas com salario de ate 300.00 que possuem filhos: %f%%", percentual_de_ate_300_que_tem_filho);

    return 0;
}
