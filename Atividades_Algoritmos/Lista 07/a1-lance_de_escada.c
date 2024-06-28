/*
Cada degrau de uma escada tem X de altura. Faça um programa que receba esta altura em centímetros e a altura em metros que o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário.
*/

#include<stdio.h>

int main() {

    float altura_do_degrau_em_centimetros, altura_que_deseja_alcancar_em_metros, quantidade_de_degraus = 1.0;

    printf("\nAltura do degrau da escada em centimetros: ");
    scanf("%f", &altura_do_degrau_em_centimetros);

    printf("\nAltura que deseja que a escada alcance em metros: ");
    scanf("%f", &altura_que_deseja_alcancar_em_metros);


    while ( ((quantidade_de_degraus * altura_do_degrau_em_centimetros) / 100) < altura_que_deseja_alcancar_em_metros)
    {
        quantidade_de_degraus++;
    }
    
    printf("\nSuba %f degraus", quantidade_de_degraus);

    return 0;
}
