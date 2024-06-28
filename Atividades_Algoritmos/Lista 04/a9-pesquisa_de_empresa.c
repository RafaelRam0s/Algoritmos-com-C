/*
Uma empresa fez uma pesquisa com 100 de seus funcionários, coletando dados sobre o salário e número de filhos. A empresa deseja saber: a média salarial destes funcionários; a média do número de filhos; e o percentual de pessoas com salário de até R$ 300,00, que possuem filhos. 
*/

#include<stdio.h>

int main() {

    int numero_de_filhos = 0, quantidade_de_pessoas_com_salario_acima_de_300_que_possuem_filho = 0, soma_de_todos_os_filhos = 0;
    float salario = 0.00, media_salarial = 0.0, media_de_numero_de_filhos = 0.0, percentual_de_salario_acima_de_300_que_possuem_filho, soma_de_todos_os_salarios = 0.0;

    int continua_no_programa = 1;
    int contador_de_execucao_do_programa = 1;

    while (continua_no_programa != 0) {
        printf("\n-------- Cadastro do profissional %d ----------\n", contador_de_execucao_do_programa);

        printf("\nSalario: ");
        scanf("%f", &salario);

        printf("\nNumero de filhos: ");
        scanf("%d", &numero_de_filhos);

        soma_de_todos_os_salarios = soma_de_todos_os_salarios + salario;
        soma_de_todos_os_filhos = soma_de_todos_os_filhos + numero_de_filhos;
        
        if (salario <= 300.00 && numero_de_filhos > 0) {
            quantidade_de_pessoas_com_salario_acima_de_300_que_possuem_filho++;
        }

        contador_de_execucao_do_programa++;

        printf("\nDigite qualquer numero diferente de zero para continuar no programa: ");
        scanf("%d", &continua_no_programa);
    }

    percentual_de_salario_acima_de_300_que_possuem_filho = (quantidade_de_pessoas_com_salario_acima_de_300_que_possuem_filho * 100) / ((float)contador_de_execucao_do_programa - 1);
    media_de_numero_de_filhos = soma_de_todos_os_filhos / ((float)contador_de_execucao_do_programa - 1);
    media_salarial = soma_de_todos_os_salarios / ((float)contador_de_execucao_do_programa - 1);

    printf("\nMedia salarial: %f", media_salarial);
    printf("\nMedia do numero de filhos: %f", media_de_numero_de_filhos);
    printf("\nPercentual de pessoas com salário de até R$ 300,00, que possuem filhos: %f%%", percentual_de_salario_acima_de_300_que_possuem_filho);
    
    return 0;
}
