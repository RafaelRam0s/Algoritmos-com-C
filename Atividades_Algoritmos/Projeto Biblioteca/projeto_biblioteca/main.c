/*
Nome dos participantes:
    Rafael Ramos da Silva, RA: 2422719
    Gabriel Menegati, RA: 2407299
Link do vídeo de apresentação da biblioteca: https://drive.google.com/drive/folders/1uI5NEx60OO9mitBI2LY9j6jjnQ6D0gEl?usp=sharing
*/

#include<stdio.h>
#include "btemperatura.h"

int main() {

    int opcao;
    float temperatura, temperatura_convertida;

    printf("\nGostaria de converter uma temperatura em qual outra?");
    printf("\n[1] Celsius para Fahrenheit");
    printf("\n[2] Celsius para Kelvin");
    printf("\n[3] Fahrenheit para Celsius");
    printf("\n[4] Fahrenheit para Kelvin");
    printf("\n[5] Kelvin para Celsius");
    printf("\n[6] Kelvin para Fahrenheit\n");
    
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("\nTemperatura em celsius: ");
            scanf("%f", &temperatura);

            temperatura_convertida = celsiusParaFahrenheit(temperatura);

            break;

        case 2:
            printf("\nTemperatura em celsius: ");
            scanf("%f", &temperatura);

            temperatura_convertida = celsiusParaKelvin(temperatura);

            break;

        case 3:
            printf("\nTemperatura em fahrenheit: ");
            scanf("%f", &temperatura);

            temperatura_convertida = fahrenheitParaCelsius(temperatura);

            break;
        case 4:
            printf("\nTemperatura em fahrenheit: ");
            scanf("%f", &temperatura);

            temperatura_convertida = fahrenheitParaKelvin(temperatura);

            break;
        case 5:
            printf("\nTemperatura em kelvin: ");
            scanf("%f", &temperatura);

            temperatura_convertida = kelvinParaCelsius(temperatura);

            break;
        case 6:
            printf("\nTemperatura em kelvin: ");
            scanf("%f", &temperatura);

            temperatura_convertida = kelvinParaFahrenheit(temperatura);

            break;
        default:
            printf("\nValor, invalido! Fim do programa!");
            return 0;

            break;
    }

    printf("\nO valor da temperatura convertida e: %f", temperatura_convertida);

    return 0;
}
