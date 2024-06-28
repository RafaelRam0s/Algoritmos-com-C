/*
Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser calculado pela soma dos valores de uma série infinita, como mostrado abaixo:

e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! ...

Fazer um programa em C que calcule este número (e) considerando apenas as 15 (quinze) primeiras parcelas. 
*/

#include<stdio.h>

int main() {

    int contador_neperiano = 1;
    float Neperiano = 1.0, fatorial_de_contador = (float)contador_neperiano;
    
    while (contador_neperiano >= 1 && contador_neperiano < 4) {

        // Faz fatoracao
        int contador_fatoracao = 1;
        int resultado_fatorial = contador_neperiano;

        while (contador_fatoracao > 0 && contador_fatoracao < contador_neperiano) {
            resultado_fatorial = resultado_fatorial * (contador_neperiano - contador_fatoracao);
            
            contador_fatoracao++;
        }

        fatorial_de_contador = resultado_fatorial;
        
        // Calcula o Neperiano
        Neperiano = Neperiano + (1 / (float)fatorial_de_contador);

        contador_neperiano++;
    }
    
    printf("O numero Neperiano deu: %f", Neperiano);

    return 0;
}
