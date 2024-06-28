/*
Sabe-se que:
1. 1 pé = 12 polegadas;
medida = y
2. 1 jarda = 3 pés;
3. 1 milha = 1.760 jardas.
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados em.
a) polegadas;
b) jardas;
c) milhas.
Para cada conversão faça sua respectiva função.
*/

#include<stdio.h>

float pesParaPolegadas(float pes) {
    return (12 * pes);
}

float pesParaJardas(float pes) {
    return (pes / 3.0);
}

float jardasParaMilhas(float jardas) {
    return (jardas / 1760);
}

int main() {

    float medida_pes, medida_jarda, medida_milha, medida_polegadas;

    printf("\nMedida em pes: ");
    scanf("%f", &medida_pes);

    medida_polegadas = pesParaPolegadas(medida_pes);
    medida_jarda = pesParaJardas(medida_pes);
    medida_milha = jardasParaMilhas(medida_jarda);

    printf("\nQuantidade em polegadas = %f", medida_polegadas);
    printf("\nQuantidade em jardas = %f", medida_jarda);
    printf("\nQuantidade em milhas = %f", medida_milha);

    return 0;
}
