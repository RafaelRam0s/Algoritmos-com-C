/*
Fazer um algoritmo para calcular a média entre N números lidos. 
Construa um algoritmo para calcular as raízes de uma equação do 2º grau (Ax2 + Bx + C), sendo que os valores de A, B e C são fornecidos pelo usuário.
*/

#include<stdio.h>
#include<math.h>

void calcularMediaDeNNumeros() {

    int numero_informado, soma_dos_numeros_informados = 0, contador = 0, continuar_no_programa;

    do {

        printf("\nInforme um numero inteiro: ");
        scanf("%d", &numero_informado);

        soma_dos_numeros_informados += numero_informado;
        contador++;

        printf("\nDigite \"0\" para sair do programa: ");
        scanf("%d", &continuar_no_programa);

    } while (continuar_no_programa != 0);

    float media = soma_dos_numeros_informados / (float)contador;

    printf("\nA media dos numeros informados e de: %f", media);

}

void raizesDo2Grau() {

    int A, B, C;

    printf("\nInforme o valor de A: ");
    scanf("%d", &A);
    printf("\nInforme o valor de B: ");
    scanf("%d", &B);
    printf("\nInforme o valor de C: ");
    scanf("%d", &C);
    
    int delta;

    delta = ( pow(B, 2) - (4 * A * C) );

    if (delta < 0) {
        printf("\nA raiz de x nao pertence aos reais");
    } else if (delta == 0) {
        float raiz = ( ((-1) * B) / (2 * (float)A) );

        printf("\nA raiz de x e: %f", raiz);
    } else {
        float raiz1 = ( (((-1) * B) + pow(delta, 1 / (float)2)) / (2 * (float)A) );
        float raiz2 = ( (((-1) * B) - pow(delta, 1 / (float)2)) / (2 * (float)A) );

        printf("Os valores das raizes de x sao: %f e %f", raiz1, raiz2);
    }
}

int main() {

    calcularMediaDeNNumeros();

    raizesDo2Grau();

    return 0;
}
