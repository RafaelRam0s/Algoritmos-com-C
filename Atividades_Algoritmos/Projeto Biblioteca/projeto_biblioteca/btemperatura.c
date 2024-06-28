/*
Nome dos participantes:
    Rafael Ramos da Silva, RA: 2422719
    Gabriel Menegati, RA: 2407299
Link do vídeo de apresentação da biblioteca: https://drive.google.com/drive/folders/1uI5NEx60OO9mitBI2LY9j6jjnQ6D0gEl?usp=sharing
*/

#include "btemperatura.h"

float celsiusParaFahrenheit(float temperatura_informada) {
    return temperatura_informada * 1.8 + 32.0;
}

float celsiusParaKelvin(float temperatura_informada) {
    return temperatura_informada + 273.0;
}

float fahrenheitParaCelsius(float temperatura_informada) {
    return (temperatura_informada - 32.0) / 1.8;
}

float fahrenheitParaKelvin(float temperatura_informada) {
    return (temperatura_informada - 32.0) * (5.0 / 9.0) + 273.0;
}

float kelvinParaCelsius(float temperatura_informada) {
    return temperatura_informada - 273.0;
}

float kelvinParaFahrenheit(float temperatura_informada) {
    return (temperatura_informada - 32.0) * (5.0 / 9.0) + 273.0;
}
