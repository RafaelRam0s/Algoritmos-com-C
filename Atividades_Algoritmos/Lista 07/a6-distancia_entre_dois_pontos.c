/*
Construa um procedimento que, tem como parâmetros de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é:
D = raiz2( (x2 - x1)^2 + (y2 - y1)^2 )
*/

#include<stdio.h>
#include<math.h>

int main() {

    int x1, y1, x2, y2;
    float distancia_entre_ponto1_e_ponto2;

    printf("\nPonto x1: ");
    scanf("%d", &x1);
    
    printf("\nPonto y1: ");
    scanf("%d", &y1);

    printf("\nPonto x2: ");
    scanf("%d", &x2);

    printf("\nPonto y2: ");
    scanf("%d", &y2);

    distancia_entre_ponto1_e_ponto2 = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) );

    printf("\nA distancia entre o ponto1 e o ponto2 e: %f", distancia_entre_ponto1_e_ponto2);

    return 0;
}
