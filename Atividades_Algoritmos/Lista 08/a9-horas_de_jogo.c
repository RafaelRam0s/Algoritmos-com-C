/*
Faça uma função que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar, também por parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/

#include<stdio.h>

int main() {

    int hora_inicio, hora_termino, minuto_inicio, minuto_termino, horas_jogadas, minutos_jogados;
    
    printf("\nHora que iniciou: ");
    scanf("%d", &hora_inicio);
    printf("\nMinuto que iniciou: ");
    scanf("%d", &minuto_inicio);
    
    printf("\nHora que finalizou: ");
    scanf("%d", &hora_termino);
    printf("\nMinuto que finalizou: ");
    scanf("%d", &minuto_termino);

    int hora_inicio_minutos = hora_inicio * 60;
    int hora_termino_em_minutos = hora_termino * 60;
    int tempo_inicial_de_minutos = hora_inicio_minutos + minuto_inicio;
    int tempo_termino_de_minutos = hora_termino_em_minutos + minuto_termino;
    int tempo_decorrido = tempo_termino_de_minutos - tempo_inicial_de_minutos;

    if (tempo_decorrido >= 0) {
        horas_jogadas = tempo_decorrido / 60;
        minutos_jogados = tempo_decorrido - (horas_jogadas * 60);
    } else if (tempo_decorrido < 0) {
        int tempo_max_de_jogo = 24 * 60;
        tempo_decorrido = tempo_max_de_jogo + tempo_decorrido;
        
        horas_jogadas = tempo_decorrido / 60;
        minutos_jogados = tempo_decorrido - (horas_jogadas * 60);
    }

    printf("\nA duracao do jogo foi de: %d horas e %d minutos", horas_jogadas, minutos_jogados);

    return 0;
}
