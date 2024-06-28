/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração máxima de 24 horas.
*/

#include<stdio.h>

int main() {

    int hora_inicial, hora_final, horas_jogadas;

    printf("Hora inicial: ");
    scanf("%d", &hora_inicial);

    printf("Hora final: ");
    scanf("%d", &hora_final);

    if (hora_final > hora_inicial) {
        horas_jogadas = hora_final - hora_inicial;
    } else {
        horas_jogadas = hora_inicial - hora_final;
    }
    
    printf("A duracao do jogo foi de: %d horas", horas_jogadas);

    return 0;
}
