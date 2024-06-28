/*
Algoritmos - A. I. Orth] O departamento que controla o índice de poluição do meio ambiente fiscaliza 3 grupos de indústrias que são altamente poluidoras do meio ambiente. O índice de poluição aceitável varia de 0.05 até 0.25. Se o índice sobe para 0.3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades; se o índice sobe para 0.4, as do 1º e do 2º grupos são intimadas a suspenderem suas atividades; e se o índice sobe para 0.5, todos os três grupos devem ser notificados a paralisarem suas atividades. Escreva um programa que lê o índice de poluição medido e emite a notificação adequada aos diferentes grupos de empresas
*/

#include<stdio.h>

int main() {
    
    int grupo_de_empresa = 1;
    float min_indice_de_poluicao_aceitavel = 0.05, max_indice_de_poluicao_aceitavel = 0.25, indice_de_poluicao = 0;
    
    printf("Indice de poluicao da regiao: ");
    scanf("%f", &indice_de_poluicao);
    
    if (indice_de_poluicao < 0.3) {
        printf("Tudo normal");
    } else if (indice_de_poluicao >= 0.5) {
        printf("Empresas do grupo 1, 2 e 3 devem paralisar suas atividades");
    } else if (indice_de_poluicao >= 0.4) {
        printf("Empresas do grupo 1 e 2 devem paralisar suas atividades");
    } else if (indice_de_poluicao >= 0.3) {
        printf("Empresas do grupo 1 devem paralisar suas atividades");
    }

    return 0;
}
