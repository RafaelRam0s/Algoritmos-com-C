/*
Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias. 
*/

#include<stdio.h>

int main() {

    int anos, meses, dias;

    printf("Sua idade com anos meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    float dias_decorridos_do_nascimento = (anos * 365.25) + (meses * 30.4375) + dias;
    // Ano normal = 365 dias (ano bissexto (a cada 4 anos) = 366 dias)
    // Janeiro = 31 dias
    // Fevereiro = 28 dias (29 dias nos anos bissextos (a cada 4 anos))
    // Março = 31 dias
    // Abril = 30 dias
    // Maio = 31 dias
    // Junho = 30 dias
    // Julho = 31 dias
    // Agosto = 31 dias
    // Setembro = 30 dias
    // Outubro = 31 dias
    // Novembro = 30 dias
    // Dezembro = 31 dias

    printf("%f Dias se passaram desde o seu nascimento", dias_decorridos_do_nascimento);

    return 0;
}
