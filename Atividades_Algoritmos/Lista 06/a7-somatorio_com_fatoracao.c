/*
Fazer um algoritmo para determinar e escrever o valor do seguinte somatório:
S = X – X^2/3! + X^4/5! – X^6/7! + X^8/!9 - ...
usando os n primeiros termos do somatório. O valor de X e de n é fornecido pelo usuário
*/

#include<stdio.h>
#include<math.h>

int main() {

    int var_x = 0, contador = 1, quantidade_de_repeticao = 0, contador_impar = 1;
    float somatorio = 0.0;

    printf("\nValor de \"X\" para o somatorio: ");
    scanf("%d", &var_x);

    somatorio = var_x;

    printf("\nQuantidade de elementos para o somatorio: ");
    scanf("%d", &quantidade_de_repeticao);

    while (contador < quantidade_de_repeticao)
    {
        contador_impar = 1 + (2 * contador);

        // Calcular fatorial
        int fatorial_contador_impar = contador_impar, contador_fatoracao = 1;
        
        while (contador_fatoracao < (contador_impar - 1)) {
            fatorial_contador_impar = fatorial_contador_impar * (contador_impar - contador_fatoracao);

            contador_fatoracao++;
        }

        // Valor do somatorio
        if (contador % 2 == 1) {
            somatorio = somatorio - ( (pow(var_x, (contador * 2))) / (float)fatorial_contador_impar );
        } else {
            somatorio = somatorio + ( (pow(var_x, (contador * 2))) / (float)fatorial_contador_impar );
        }

        contador_impar += 2;
        contador++;
    }
    
    printf("\nO valor do somatorio e: %f", somatorio);

    return 0;
}
