/*
Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. Fazer um algoritmo que calcule e escreva:
a) a maior e a menor altura do grupo;
b) a média de altura das mulheres;
c) o número de homens.
*/

#include<stdio.h>

int main() {

    int sexo = 0, continuar_no_programa = 1, quantidade_de_homens = 0, quantidade_de_mulheres = 0, contador = 1;
    float altura = 0.0, maior_altura = 0.0, menor_altura = 0.0, media_de_altura_das_mulheres = 0.0, soma_da_altura_de_mulheres = 0.0;

    while (continuar_no_programa != 0) {

        printf("\nSexo ([1] Masculino ou [2] Feminino): ");
        scanf("%d", &sexo);

        printf("\nAltura em metros: ");
        scanf("%f", &altura);

        if (contador == 1) {
            menor_altura = altura;
            maior_altura = altura;
        }

        if (altura > maior_altura) {
            maior_altura = altura;
        } else if (altura < menor_altura) {
            menor_altura = altura;
        }

        if (sexo == 1) {
            quantidade_de_homens++;
        } else if (sexo == 2) {
            soma_da_altura_de_mulheres += altura;
            quantidade_de_mulheres++;
        }

        contador++;

        printf("\nDigite zero para sair do programa ou qualquer outro para continuar: ");
        scanf("%d", &continuar_no_programa);
    }

    media_de_altura_das_mulheres = (float)soma_da_altura_de_mulheres / quantidade_de_mulheres;

    printf("\nA maior altura registrada foi: %f", maior_altura);
    printf("\nA menor altura registrada foi: %f", menor_altura);
    printf("\nA media de altura das mulheres e de: %f", media_de_altura_das_mulheres);
    printf("\nA quantidade de homens e de: %d", quantidade_de_homens);

    return 0;
}
