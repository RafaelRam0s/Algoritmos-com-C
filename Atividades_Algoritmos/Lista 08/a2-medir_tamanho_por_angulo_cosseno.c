/*
Desenvolva uma função que receba a medida do ângulo formado por uma escada apoiada no chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida desta escada
*/

#include<stdio.h>
#include<math.h>

int main() {
    
    float angulo, altura_parede_em_metros, tamanho_escada_em_metros, angulo_por_pi, cosseno_do_angulo;

    printf("\nMedida do angulo formado por uma escada apoiada no chao e encostada na parede: ");
    scanf("%f", &angulo);

    printf("\nAltura em metros da parede onde está a ponta da escada: ");
    scanf("%f", &altura_parede_em_metros);

    angulo_por_pi = (angulo * 3.14) / 180.0;
    cosseno_do_angulo = cos(angulo_por_pi);

    tamanho_escada_em_metros = altura_parede_em_metros / cosseno_do_angulo;

    printf("\nA medida da escada e de: %f metros", tamanho_escada_em_metros);

    return 0;
}
