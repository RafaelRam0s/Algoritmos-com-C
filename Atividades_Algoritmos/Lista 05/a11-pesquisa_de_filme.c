/*
Um cinema que possui capacidade de 100 lugares está sempre com ocupação total. Certo dia cada espectador respondeu a um questionário, no qual constava:
- sua idade;
- sua opinião em relação ao filme, segundo:
ótimo= *****
bom= ****
regular= ***
ruim= **
péssimo= *
Elabore um programa que, lendo estes dados, calcule e imprima:
1 a quantidade de respostas ótimo;
2 a diferença percentual entre respostas bom e regular;
3 a média de idade das pessoas que responderam ruim;
4 a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
5 a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
*/

#include<stdio.h>

int main() {

    int idade, satisfacao_com_o_filme, continuar_no_programa = 1, respostas_otimo = 0, respostas_bom = 0, numero_de_entrevistados = 0, respostas_regular = 0, soma_das_idades_ruim = 0, respostas_ruim = 0, respostas_pessimo = 0, maior_idade_pessimo = 0, diferenca_de_idade_entre_maior_idade_otimo_e_maior_idade_ruim = 0, maior_idade_otimo = 0, maior_idade_ruim = 0;

    float diferenca_percentual_entre_bom_e_regular = 0.0, percentual_bom = 0.0, percentual_regular = 0.0, media_de_idade_ruim = 0.0, porcentagem_repostas_pessimo = 0.0;

    while (continuar_no_programa != 0)
    {
        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("\n[5] Otimo");
        printf("\n[4] Bom");
        printf("\n[3] Regular");
        printf("\n[2] Ruim");
        printf("\n[1] Pessimo");
        printf("\nSatisfacao com o filme: ");
        scanf("%d", &satisfacao_com_o_filme);

        if (satisfacao_com_o_filme == 5) {
            if (maior_idade_otimo < idade) {
                maior_idade_otimo = idade;
            }
            
            respostas_otimo++;
        } else if (satisfacao_com_o_filme == 4) {
            respostas_bom++;
        } else if (satisfacao_com_o_filme == 3) {
            respostas_regular++;
        } else if (satisfacao_com_o_filme == 2) {
            soma_das_idades_ruim = soma_das_idades_ruim + idade;

            if (maior_idade_ruim < idade) {
                maior_idade_ruim = idade;
            }

            respostas_ruim++;
        } else if (satisfacao_com_o_filme == 1) {
            if (maior_idade_pessimo < idade) {
                maior_idade_pessimo = idade;
            }
            respostas_pessimo++;
        }

        numero_de_entrevistados++;

        printf("\nDigite qualquer numero diferente de zero para continuar no programa: ");
        scanf("%d", &continuar_no_programa);
    }

    percentual_bom = (float)respostas_bom * 100 / numero_de_entrevistados;
    percentual_regular = (float)respostas_regular * 100 / numero_de_entrevistados;
    
    diferenca_percentual_entre_bom_e_regular = percentual_bom - percentual_regular;

    media_de_idade_ruim = (float)soma_das_idades_ruim / respostas_ruim;

    porcentagem_repostas_pessimo = (float)respostas_pessimo * 100 / numero_de_entrevistados;

    diferenca_de_idade_entre_maior_idade_otimo_e_maior_idade_ruim = maior_idade_otimo - maior_idade_ruim;

    printf("\nA quantidade de respostas otimo: %d", respostas_otimo);
    printf("\nA diferença percentual entre respostas bom e regular: %f%%", diferenca_percentual_entre_bom_e_regular);
    printf("\nA media de idade das pessoas que responderam ruim: %f", media_de_idade_ruim);
    printf("\nA percentagem de respostas pessimo e a maior idade que utilizou esta opção: %f%% %d", porcentagem_repostas_pessimo, maior_idade_pessimo);
    printf("\nA diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d", diferenca_de_idade_entre_maior_idade_otimo_e_maior_idade_ruim);

    return 0;
}
