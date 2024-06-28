// Escreva um programa que leia do teclado um valor N, em segundos, e convertao para horas, minutos e segundos. O resultado deve ser escrito na tela, conforme o exemplo:
/*
    Exemplo de entrada:
        7322
    Saída correspondente:
        7322 segundos sao 2 horas, 2 minutos e 2 segundos
*/

#include <stdio.h>

int main() {

    int segundos_informado, segundos, minutos, horas;

    printf("Informe um valor de segundos: ");
    scanf("%d", &segundos_informado);

    horas = segundos_informado / 3600;
    minutos = (segundos_informado - (horas * 3600)) / 60;
    segundos = (segundos_informado - (horas * 3600) - (minutos * 60));
    
    printf("%d segundos sao %d horas, %d minutos e %d segundos", segundos_informado, horas, minutos, segundos);

    return 0;
}
