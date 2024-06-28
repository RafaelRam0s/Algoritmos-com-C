#include<stdio.h>
#include<math.h>

int main()
{

    int num1, num2, num3, expoente1, expoente2, expoente3, quadrado_perfeito, num2_absoluto;
    char letra1[10], letra2[10], letra3[10], letra4[10];
    float raiz1, raiz2;
    
    do
    {
        scanf("%d %s %d %d %s %s %d %d %s %d", &num1, letra1, &expoente1, &num2, letra2, letra3, &expoente2, &num3, letra4, &expoente3);

        if (num1 == 0) {
            break;
        }

        raiz1 = sqrt(num1);
        raiz2 = sqrt(num3);
        
        if (num2 >= 0) {
            num2_absoluto = num2;
        } else {
            num2_absoluto = ((-1) * num2);
        }

        if ( (2 * raiz1 * raiz2 == (float)num2_absoluto) && ((letra1[1] == letra2[1]) || (letra1[1] == letra3[1])) && ((letra4[1] == letra2[1]) || (letra4[1] == letra3[1])) ) {
            quadrado_perfeito = 1;
            printf("%d\n", quadrado_perfeito);
            
            if (num2 >= 0) {
                printf("(%.0f%c + %.0f%c)2\n", raiz1, letra1[1], raiz2, letra4[1]);
            } else {
                printf("(%.0f%c - %.0f%c)2\n", raiz1, letra1[1], raiz2, letra4[1]);
            }

        } else {
            quadrado_perfeito = 0;
            printf("%d\n", quadrado_perfeito);
            printf("0\n");
        }
        
    } while (num1 != 0);

    return 0;
}
