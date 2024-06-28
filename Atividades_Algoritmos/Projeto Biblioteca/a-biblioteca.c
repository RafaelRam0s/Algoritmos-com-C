/*
Neste projeto deverá ser criada uma Biblioteca que contém, no mínimo, 5 (cinco) funções desenvolvidas por você. Segue instruções:
    • Crie uma biblioteca própria, por exemplo:
        minhabiblio.h e minhabiblio.c
    • Este biblioteca deve conter pelo menos 5 funções e/ou procedimentos.
    • Desenvolva com a IDE da Linguagem C que você utiliza no seu dia-a-dia.
    • Crie um vídeo de 5 a 10 minutos explicando como desenvolveu a biblioteca, quais funções existem e como devo configurar a IDE de programação para que eu possa utilizar a biblioteca criada.
        ATENÇÃO: não carreguem o vídeo no moodle. Criem um link para o vídeo na nuvem (Google Drive, OneDrive, ...).
    • Inclua um exemplo de funcionamento, para isso é necessário criar um arquivo com a main() e carregar a biblioteca.
    • Deverá ser entregue no Moodle:
        Um arquivo compactado contendo:
            ▪ Código fonte da biblioteca .c
            ▪ Header file da biblioteca .h
            ▪ Programa exemplo de funcionamento da biblioteca .c
            ▪ O nome da dupla e o link para acesso ao vídeo – colocar como comentário no arquivo de código fonte da biblioteca .c
*/

// celsiusParaFahrenheit(), celsiusParaKelvin(), fahrenheitParaCelsius(), fahrenheitParaKelvin(), kelvinParaCelsius(), kelvinParaFahrenheit()

// // projeto.c

// #include<stdio.h>

// int main() {

//     int opcao;
//     float temperatura, temperatura_convertida;

//     printf("\nGostaria de converter uma temperatura em qual outra?");
//     printf("\n[1] Celsius para Fahrenheit");
//     printf("\n[2] Celsius para Kelvin");
//     printf("\n[3] Fahrenheit para Celsius");
//     printf("\n[4] Fahrenheit para Kelvin");
//     printf("\n[5] Kelvin para Celsius");
//     printf("\n[6] Kelvin para Fahrenheit\n");
    
//     scanf("%d", &opcao);

//     switch (opcao)
//     {
//         case 1:
//             printf("\nTemperatura em celsius: ");
//             scanf("%f", &temperatura);

//             temperatura_convertida = celsiusParaFahrenheit(temperatura);

//             break;

//         case 2:
//             printf("\nTemperatura em celsius: ");
//             scanf("%f", &temperatura);

//             temperatura_convertida = celsiusParaKelvin(temperatura);

//             break;

//         case 3:
//             printf("\nTemperatura em fahrenheit: ");
//             scanf("%f", &temperatura);

//             temperatura_convertida = fahrenheitParaCelsius(temperatura);

//             break;
//         case 4:
//             printf("\nTemperatura em fahrenheit: ");
//             scanf("%f", &temperatura);

//             temperatura_convertida = fahrenheitParaKelvin(temperatura);

//             break;
//         case 5:
//             printf("\nTemperatura em kelvin: ");
//             scanf("%f", &temperatura);

//             temperatura_convertida = kelvinParaCelsius(temperatura);

//             break;
//         case 6:
//             printf("\nTemperatura em kelvin: ");
//             scanf("%f", &temperatura);

//             temperatura_convertida = kelvinParaFahrenheit(temperatura);

//             break;
//         default:
//             printf("\nValor, invalido! Fim do programa!");
//             return 0;

//             break;
//     }

//     printf("\nO valor da temperatura convertida e: %f", temperatura_convertida);

//     return 0;
// }

// // Fim de projeto.c ---------------------------


// // biblioteca_temperatura.c ---------------------------

// #include "biblioteca_temperatura.h"

// float celsiusParaFahrenheit(float temperatura_informada) {
//     return temperatura_informada * 1.8 + 32.0;
// }

// float celsiusParaKelvin(float temperatura_informada) {
//     return temperatura_informada + 273.0;
// }

// float fahrenheitParaCelsius(float temperatura_informada) {
//     return (temperatura_informada - 32.0) / 1.8;
// }

// float fahrenheitParaKelvin(float temperatura_informada) {
//     return (temperatura_informada - 32.0) * (5.0 / 9.0) + 273.0;
// }

// float kelvinParaCelsius(float temperatura_informada) {
//     return temperatura_informada - 273.0;
// }

// float kelvinParaFahrenheit(float temperatura_informada) {
//     return (temperatura_informada - 32.0) * (5.0 / 9.0) + 273.0;
// }

/*
Nome dos participantes:
    Rafael Ramos da Silva, RA: 2422719
    Link do vídeo de apresentação da biblioteca: @@@
*/

// // Fim da biblioteca_temperatura.c ---------------------------


// // biblioteca_temperatura.h ---------------------------

// #ifndef _BIBLIOTECA_TEMPERATURA_H
// #define _BIBLIOTECA_TEMPERATURA_H

// float celsiusParaFahrenheit(float temperatura_informada);
// float celsiusParaKelvin(float temperatura_informada);
// float fahrenheitParaCelsius(float temperatura_informada);
// float fahrenheitParaKelvin(float temperatura_informada);
// float kelvinParaCelsius(float temperatura_informada);
// float kelvinParaFahrenheit(float temperatura_informada);

// #endif

// // Fim da biblioteca_temperatura.h ---------------------------
