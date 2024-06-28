/*
Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    
    printf("\nDigite mais um numero: ");
    scanf("%d", &num2);

    printf("\nDigite outro numero: ");
    scanf("%d", &num3);

    printf("\nDigite um ultimo numero: ");
    scanf("%d", &num4);

    if (num1 % 2 == 0 && num1 % 3 == 0)
    {
        printf("\n%d", num1);
    }
    if (num2 % 2 == 0 && num2 % 3 == 0)
    {
        printf("\n%d", num2);
    }
    if (num3 % 2 == 0 && num3 % 3 == 0)
    {
        printf("\n%d", num3);
    }
    if (num4 % 2 == 0 && num4 % 3 == 0)
    {
        printf("\n%d", num4);
    }

    if ((num1 % 2 != 0 || num1 % 3 != 0) && (num2 % 2 != 0 || num2 % 3 != 0) && (num3 % 2 != 0 || num3 % 3 != 0) && (num4 % 2 != 0 || num4 % 3 != 0))
    {
        printf("\nNenhum numero e divisivel por 2 e 3");
    }
    
    return 0;
}
