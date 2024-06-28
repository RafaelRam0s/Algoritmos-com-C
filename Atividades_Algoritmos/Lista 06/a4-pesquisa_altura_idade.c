/*
Faça um programa que receba a idade, a altura de 15 pessoas. Calcule e escreva:
1. a quantidade de pessoas com idade superior a 50 anos;
2. a média das alturas das pessoas com idade entre 10 e 20 anos;
3. a maior altura encontrada;
*/

#include<stdio.h>

int main() {

    int contador = 1, idade, quantidade_maiores_que_50_anos = 0, quantidade_de_idade_entre_10_e_20_anos = 0;
    float altura, media_de_altura_entre_10_e_20_anos, maior_altura = 0.0, soma_de_alturas_entre_10_e_20_anos = 0.0;

    while (contador >= 1 && contador <= 15)
    {
        
        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("\nAltura: ");
        scanf("%f", &altura);

        if (idade > 50) {
            quantidade_maiores_que_50_anos++;
        } else if (idade >= 10 && idade <= 20) {
            soma_de_alturas_entre_10_e_20_anos += altura;
            quantidade_de_idade_entre_10_e_20_anos++;
        }

        if (contador == 1 || (maior_altura < altura)) {
            maior_altura = altura;
        }

        contador++;
    }

    media_de_altura_entre_10_e_20_anos = soma_de_alturas_entre_10_e_20_anos / (float)quantidade_de_idade_entre_10_e_20_anos;
    
    printf("\nA quantidade de pessoas com idade superior a 50 anos e: %d", quantidade_maiores_que_50_anos);
    printf("\nA media das alturas das pessoas com idade entre 10 e 20 anos e: %f", media_de_altura_entre_10_e_20_anos);
    printf("\nA maior altura encontrada: %f", maior_altura);


    return 0;
}
