/*
Faça uma função que recebe por parâmetro o tempo de duração de uma corrida expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos
*/

#include<stdio.h>

int main() {
    int tempo_de_duracao_da_corrida_em_segundos, horas, minutos, segundos;

    printf("\nO tempo de duração de uma corrida expressa em segundos: ");
    scanf("%d", &tempo_de_duracao_da_corrida_em_segundos);

    horas = tempo_de_duracao_da_corrida_em_segundos / 3600;
    minutos = (tempo_de_duracao_da_corrida_em_segundos - (horas * 3600)) / 60;
    segundos = (tempo_de_duracao_da_corrida_em_segundos - (horas * 3600) - (minutos * 60));

    printf("\nHoras: %d", horas);
    printf("\nMinutos: %d", minutos);
    printf("\nSegundos: %d", segundos);

    return 0;
}
