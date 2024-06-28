/*
Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano de 2010. Faça um programa que leia os dados digitados pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo.

Depois, calcule e imprima:
1. A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
2. A quantidade de mulheres que leram 5 livros ou mais.
3. A média de idade dos homens que leram menos que 5 livros.
4. O percentual de pessoas que não leram livros. 
*/

#include<stdio.h>

int main() {


    int sexo = 0, idade = 0, quantidade_de_livros_lidos_em_2010 = 0, quantidade_de_livros_lidos_por_menores_de_10_anos = 0, quantidade_de_mulheres_que_leram_mais_de_4_livros = 0, soma_de_idades_de_homens_que_leram_menos_de_5_livros = 0, quantidade_de_homens_que_leram_menos_de_5_livros = 0, quantidade_de_pessoas_que_nao_leram_livros_em_2010 = 0, quantidade_de_pessoas_entrevistadas = 0;
    float media_da_idade_de_homens_que_leram_menos_de_5_livros = 0.0, percentual_de_pessoas_que_nao_leram = 0.0;

    do {

        printf("\nIdade em anos: ");
        scanf("%d", &idade);

        if (idade <= 0) {
            continue;
        }

        printf("\nSexo [1] para homem [2] para mulher: ");
        scanf("%d", &sexo);

        printf("\nQuantidade de livros que leu no ano de 2010: ");
        scanf("%d", &quantidade_de_livros_lidos_em_2010);

        if (idade < 10) {
            quantidade_de_livros_lidos_por_menores_de_10_anos = quantidade_de_livros_lidos_por_menores_de_10_anos + quantidade_de_livros_lidos_em_2010;
        }

        if (sexo == 2 && quantidade_de_livros_lidos_em_2010 > 4) {
            quantidade_de_mulheres_que_leram_mais_de_4_livros++;
        }

        if (sexo == 1 && quantidade_de_livros_lidos_em_2010 < 5) {
            soma_de_idades_de_homens_que_leram_menos_de_5_livros = soma_de_idades_de_homens_que_leram_menos_de_5_livros + idade;
            quantidade_de_homens_que_leram_menos_de_5_livros++;
        }

        if (quantidade_de_livros_lidos_em_2010 == 0) {
            quantidade_de_pessoas_que_nao_leram_livros_em_2010++;
        }

        quantidade_de_pessoas_entrevistadas++;

    } while (idade > 0);
    
    media_da_idade_de_homens_que_leram_menos_de_5_livros = (float)soma_de_idades_de_homens_que_leram_menos_de_5_livros / quantidade_de_homens_que_leram_menos_de_5_livros;
    percentual_de_pessoas_que_nao_leram = ((float)quantidade_de_pessoas_que_nao_leram_livros_em_2010 * 100) / quantidade_de_pessoas_entrevistadas;

    printf("\nQuantidade total de livros lidos pelos entrevistados menores de 10 anos: %d", quantidade_de_livros_lidos_por_menores_de_10_anos);
    printf("\nQuantidade de mulheres que leram 5 livros ou mais: %d", quantidade_de_mulheres_que_leram_mais_de_4_livros);
    printf("\nMedia de idade dos homens que leram menos que 5 livros: %f", media_da_idade_de_homens_que_leram_menos_de_5_livros);
    printf("\nPercentual de pessoas que não leram livros: %f%%", percentual_de_pessoas_que_nao_leram);

    return 0;
}
