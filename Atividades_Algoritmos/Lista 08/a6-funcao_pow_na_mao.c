/*
Desenvolver uma função para calcular o valor de uma potência de um número qualquer. Ou seja, ao se informar para a função o número e sua potência, deverá ser apresentado o seu resultado. 
Obs: Não utilizar pow().
*/

#include<stdio.h>

float calcularPotencia(float numero, int potencia) {
    float resultado = 1.0;

    for (int i = 1; i <= potencia; i++) {
        resultado = resultado * numero;
    }

    return resultado;
}

int main() {

    float potencia_escolhida, numero_escolhido, resultado_da_pontecia = 1.0;

    printf("\nNumero: ");
    scanf("%f", &numero_escolhido);
    printf("\nPotencia: ");
    scanf("%f", &potencia_escolhida);

    if (potencia_escolhida < 0) {
        potencia_escolhida = 1 / (float)((-1) * potencia_escolhida);
    }

    if (potencia_escolhida == 0.0) {
        resultado_da_pontecia = 1;

    } else if (potencia_escolhida == (int)potencia_escolhida) {
        // Potenciacao
        resultado_da_pontecia = calcularPotencia(numero_escolhido, potencia_escolhida);

    } else if ((potencia_escolhida != (int)potencia_escolhida) && (numero_escolhido >= 0)) {
        // Raiz

        // Verificar os numeros inteiros da divisao do numero flutuante
        float dividendo = potencia_escolhida, divisor = 1.0;
        
        while (dividendo != (int)dividendo) {
            dividendo = potencia_escolhida * 10;
            divisor = divisor * 10;
        }

        printf("\nDividendo: %f", dividendo);
        printf("\nDivisor: %f", divisor);

        int contador = 0, dividendo_inteiro = (int)dividendo, divisor_inteiro = (int)divisor;
        
        printf("\ndividendo_inteiro: %d", dividendo_inteiro);
        printf("\ndivisor_inteiro: %d", divisor_inteiro);

        while ( ((dividendo_inteiro % (dividendo_inteiro - contador) ) != 0) || ((divisor_inteiro % (dividendo_inteiro - contador)) != 0) ) {
            contador++;
        }

        printf("\ncontador: %d", contador);

        int valor_dividendo_da_potencia = dividendo_inteiro / (dividendo_inteiro - contador);
        int valor_divisor_da_potencia = divisor_inteiro / (dividendo_inteiro - contador);

        printf("\nvalor_dividendo_da_potencia: %d", valor_dividendo_da_potencia);
        printf("\nvalor_divisor_da_potencia: %d", valor_divisor_da_potencia);

        // Potencializar o numero pelo dividendo da potencia
        float numero_dentro_da_raiz = calcularPotencia(numero_escolhido, valor_dividendo_da_potencia);

        printf("\nnumero_dentro_da_raiz: %f", numero_dentro_da_raiz);

        // Calcular raiz
        // numero = 4 = numero_dentro_da_raiz
        // raiz = 2 = valor_divisor_da_potencia
        int contador_raiz = 1;
        
        while (calcularPotencia(contador_raiz, valor_divisor_da_potencia) < numero_dentro_da_raiz) {
            contador_raiz++;
        }

        float menor_raiz_possivel = contador_raiz - 1;

        printf("\ncontador_raiz: %d", contador_raiz);
        printf("\nmenor_raiz_possivel: %f", menor_raiz_possivel);

        while ( calcularPotencia(menor_raiz_possivel, valor_divisor_da_potencia) < numero_dentro_da_raiz)
        {
            menor_raiz_possivel = menor_raiz_possivel + 0.000001;
        }
        
        resultado_da_pontecia = menor_raiz_possivel;
    } else {
        resultado_da_pontecia = 0;
    }

    printf("\nResultado: %f", resultado_da_pontecia);

    return 0;
}
