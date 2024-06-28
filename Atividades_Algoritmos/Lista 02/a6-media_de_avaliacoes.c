/*
Escrever um algoritmo que lê o número de identificação e as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação.

Para cada aluno, calcular a média de aproveitamento, usando a fórmula:
MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7

A atribuição de conceitos obedece à tabela abaixo:
Média de Aproveitamento - Conceito
>= 9.0 - A
>= 7.5 e < 9.0 - B
>= 6.0 e < 7.5 - C
>= 4.0 e < 6.0 - D
< 4.0 - E

O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem: "APROVADO" se o conceito for A, B, ou C e "REPROVADO" se conceito for D ou E.
*/

#include <stdio.h>

int main() {

    char numero_indentificacao[100] = " ", categoria_classificado[2] = " ";

    printf("\nNumero de indentificacao: ");
    scanf("%s", numero_indentificacao);

    float nota1, nota2, nota3, nota_media_exercicio, nota_media_aproveitamento;

    printf("\nNota 1: ");
    scanf("%f", &nota1);
    printf("\nNota 2: ");
    scanf("%f", &nota2);
    printf("\nNota 3: ");
    scanf("%f", &nota3);
    printf("\nNota da media de exercicio: ");
    scanf("%f", &nota_media_exercicio);

    nota_media_aproveitamento = (nota1 + nota2 * 2 + nota3 * 3 + nota_media_exercicio) / 7.0;

    if (nota_media_aproveitamento >= 9)
    {
        categoria_classificado[0] = 'A';
    } 
    else if (nota_media_aproveitamento >= 7.5)
    {
        categoria_classificado[0] = 'B';
    }
    else if (nota_media_aproveitamento >= 6.0)
    {
        categoria_classificado[0] = 'C';
    }
    else if (nota_media_aproveitamento >= 4.0)
    {
        categoria_classificado[0] = 'D';
    }
    else
    {
        categoria_classificado[0] = 'E';
    }

    printf("\nO aluno de numero: %s, com as notas %.2f, %.2f, %.2f, com a media de exercicio %.2f tem a media de aproveitamento igual a %.2f, o conceito correspondente a categoria e %s", numero_indentificacao, nota1, nota2, nota3, nota_media_exercicio, nota_media_aproveitamento, categoria_classificado);

    if (categoria_classificado[0] == 'E' || categoria_classificado[0] == 'D')
    {
        printf("\nREPROVADO");
    }
    else if (categoria_classificado[0] == 'A' || categoria_classificado[0] == 'B' || categoria_classificado[0] == 'C')
    {
        printf("\nAPROVADO");
    }
    
    return 0;
}
