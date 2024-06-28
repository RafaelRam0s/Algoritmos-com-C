/*
Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio de uma determinada escola. Cada aluno fornecia a sua idade, série (primeira-1, segunda-2, terceira-3 ou quarta-4), quantos livros liam por mês e se gostavam de fazer redação (Sim-1 ou Não-0).

Fazer um programa que leia os dados, calcule e imprima:
1. A quantidade de alunos que está na terceira série;
2. A maior quantidade de livros lidos por um aluno que está na quarta série;
3. A porcentagem de alunos que não gostam de fazer redação e que estão na terceira série.
4. Média de idade dos alunos da primeira e segunda séries.

OBS: A condição de parada (flag) é que seja digitado 0 (zero) para idade. 
*/

#include<stdio.h>

int main() {

    int idade, serie, quantos_livros_liam_por_mes, gosta_de_fazer_redacao, quantidade_de_alunos_na_terceira_serie = 0, maior_quantidade_de_livos_lidos_por_um_aluno_da_quarta_serie = 0, total_de_alunos_pesquisados = 0, quantidade_de_alunos_que_nao_gostam_de_fazer_redacao_e_estao_na_terceira_serie = 0, soma_das_idades_da_primeira_e_da_segunda_series = 0, quantidade_de_alunos_da_primeira_e_segunda_series = 0;
    float porcentagem_de_alunos_que_nao_gostam_de_redacao_e_estao_na_terceira_serie = 0.0, media_de_idade_dos_aluno_da_primeira_e_segunda_series = 0.0;

    do {
        printf("\nSua idade: ");
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        printf("\nSua serie ([1] - primeira, [2] - segunda, [3] - terceira ou [4] - quarta: ");
        scanf("%d", &serie);

        printf("\nQuantos livros leem por mes: ");
        scanf("%d", &quantos_livros_liam_por_mes);

        printf("\nGosta de fazer redacao ([0] - Nao ou [1] - Sim): ");
        scanf("%d", &gosta_de_fazer_redacao);

        if (serie == 3) {
            quantidade_de_alunos_na_terceira_serie++;
        }

        if (maior_quantidade_de_livos_lidos_por_um_aluno_da_quarta_serie < quantos_livros_liam_por_mes && serie == 4) {
            maior_quantidade_de_livos_lidos_por_um_aluno_da_quarta_serie = quantos_livros_liam_por_mes;
        }

        if (gosta_de_fazer_redacao == 0 && serie == 3) {
            quantidade_de_alunos_que_nao_gostam_de_fazer_redacao_e_estao_na_terceira_serie++;
        }

        if (serie == 1 || serie == 2) {
            soma_das_idades_da_primeira_e_da_segunda_series = soma_das_idades_da_primeira_e_da_segunda_series + idade;
            quantidade_de_alunos_da_primeira_e_segunda_series++;
        }

        total_de_alunos_pesquisados++;

    } while (idade > 0);

    porcentagem_de_alunos_que_nao_gostam_de_redacao_e_estao_na_terceira_serie = ((float)quantidade_de_alunos_que_nao_gostam_de_fazer_redacao_e_estao_na_terceira_serie * 100) / total_de_alunos_pesquisados;
    
    media_de_idade_dos_aluno_da_primeira_e_segunda_series = soma_das_idades_da_primeira_e_da_segunda_series / quantidade_de_alunos_da_primeira_e_segunda_series;

    printf("\nA quantidade de alunos que estao na terceira serie: %d", quantidade_de_alunos_na_terceira_serie);
    printf("\nA maior quantidade de livros lidos por um aluno que esta na quarta serie: %d", maior_quantidade_de_livos_lidos_por_um_aluno_da_quarta_serie);
    printf("\nA porcentagem de alunos que não gostam de fazer redacao e que estao na terceira serie: %f%%", porcentagem_de_alunos_que_nao_gostam_de_redacao_e_estao_na_terceira_serie);
    printf("\nMedia de idade dos alunos da primeira e segunda series: %f", media_de_idade_dos_aluno_da_primeira_e_segunda_series);

    return 0;
}
