/*
6) Perguntar ao usuário se ele deseja calcular:
a) a área de um triângulo
b) a área de um circulo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/

#include<stdio.h>

#define PI 3.14

int main() {

    int base, altura, raio;
    float area;

    char opcao;
    printf("Escolha uma opcao:\n'a' - a área de um triângulo\n'b' - a área de um circulo\n'c' - a área de um cubo\n'd' - a área de um cilindro\n");
    scanf("%c", &opcao);

    switch (opcao) {
        case 'a':
            {
                //area triangulo
                printf("Base: ");
                scanf("%d", &base);
                printf("Altura: ");
                scanf("%d", &altura);

                area = ((float)base * altura) / 2;

                printf("Area: %.2f", area);

                break;
            }
        case 'b':
            {
                //area circulo
                printf("Raio: ");
                scanf("%d", &raio);

                area = (float)raio * raio * PI;

                printf("Area: %.2f", area);

                break;
            }
        case 'c':
            {
                //area cubo
                printf("Aresta: ");
                scanf("%d", &base);

                area = (float)base * base * 6;

                printf("Area: %.2f", area);

                break;
            }
        case 'd':
            {
                //area cilindro
                printf("Raio: ");
                scanf("%d", &raio);
                printf("Altura: ");
                scanf("%d", &altura);

                //area = (2 * (float)raio * raio * PI) + (2 * PI * raio * altura);
                area = 2 * raio * PI * (raio + altura);
                printf("Area: %.2f", area);

                break;
            }
        default:
            printf("Valor invalido");
            break;
    }

    return 0;
}
