/*
Faça um algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de minutos se passaram desde o início do dia (0:00h)
*/

#include<stdio.h>

int main() {

    int horas, minutos, minutos_decorridos;

    printf("\nQue horas sao: ");
    scanf("%d", &horas);
    printf("\nQue minutos sao: ");
    scanf("%d", &minutos);

    minutos_decorridos = horas * 60;
    minutos_decorridos += minutos;

    printf("\nDecorreram-se %d minutos desde o inicio do dia", minutos_decorridos);

    return 0;
}
