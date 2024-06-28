/*
Escreva a função que recebe 2 parâmetros: o primeiro parâmetro é um vetor de inteiros e o segundo parâmetro é um numero. A função deve retornar como resultado o segundo parâmetro assim como o número de vezes que ele ocorre dentro do vetor
*/

#include <stdio.h>

#define TAMANHO_DO_VETOR 100

void funcaoTeste(int vetor[], int numero_para_buscar) {

    int vezes_que_foi_encontrado_o_numero_no_vetor = 0;

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        if (vetor[i] == numero_para_buscar) {
            vezes_que_foi_encontrado_o_numero_no_vetor++;
        }
    }

    printf("\nO numero %d esta presente %d vezes no vetor informado.", numero_para_buscar, vezes_que_foi_encontrado_o_numero_no_vetor);

}

int main() {

    int vetor_de_inteiros[TAMANHO_DO_VETOR] = {0}, continuar_no_programa = 1;

    for (int i = 0; continuar_no_programa != 0; i++) {
        
        printf("\nInforme um numero para colocar na lista: ");
        scanf("%d", &vetor_de_inteiros[i]);

        printf("\nDigite:\n[0] Para parar de adicionar na lista\n[Qualquer numero diferente de 0] Para continuar na adicionando na lista\n");
        scanf("%d", &continuar_no_programa);

    }

    int numero_para_buscar;

    printf("\nEscolha um numero para ver quantas vezes ele foi digitado dentro do vetor: ");
    scanf("%d", &numero_para_buscar);

    funcaoTeste(vetor_de_inteiros, numero_para_buscar);

    return 0;
}
