/*
Desenvolva um algoritmo/programa que verifique se um trinômio é quadrado perfeito. Se sim, apresente sua forma fatorada. O usuário entrará com n trinômios. O programa deverá avaliar 1 trinômio por vez e apresentar a resposta para o usuário. O programa deverá finalizar quando o 1º termo for 0 zero (critério de parada).
*/

#include<stdio.h>
#include<math.h>

int main() {

    int numero1, numero_expoente1, numero2, numero_expoente2, numero3, numero_expoente3, quadrado_perfeito = 0, numero2_positivo;
    char letra1[10], letra2[10], letra3[10], letra4[10];
    float raiz1, raiz2;

    do {
        // Captar um polinômio
        scanf("%d", &numero1);
        
        if (numero1 == 0) {
            break;
        }

        scanf("%s", letra1);
        scanf("%d", &numero_expoente1);

        scanf("%d", &numero2);
        scanf("%s", letra2);
        scanf("%s", letra3);
        scanf("%d", &numero_expoente2);

        scanf("%d", &numero3);
        scanf("%s", letra4);
        scanf("%d", &numero_expoente3);

        // Tirar raizes das pontas
        raiz1 = sqrt(numero1);
        raiz2 = sqrt(numero3);

        // Verificar se a equação bate com o numero central        
        if (numero2 >= 0) {
            numero2_positivo = numero2;
        } else {
            numero2_positivo = (-1) * numero2;
        }

        if ((2 * (raiz1) * (raiz2) == (float)numero2_positivo) && (letra1[1] == letra2[1] || letra1[1] == letra3[1]) && (letra4[1] == letra3[1] || letra4[1] == letra2[1])) {
            quadrado_perfeito = 1;
            printf("%d\n", quadrado_perfeito);
            if (numero2 >= 0) {
                printf("(%.0f%s + %0.f%s)2", raiz1, letra1, raiz2, letra4);
            } else {
                printf("(%.0f%s - %0.f%s)2", raiz1, letra1, raiz2, letra4);
            }
        } else {
            quadrado_perfeito = 0;
            printf("%d\n", quadrado_perfeito);
            printf("0");
        }

    } while (numero1 != 0);

    return 0;
}
