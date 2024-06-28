#include <stdio.h>

int main()
{
    int num1, num2, soma;
    
    printf("Informe um numero: ");
    scanf("%d", &num1);

    printf("Informe outro numero: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    printf("A soma entre os dois numeros informados e: %d", soma);
    
    return 0;
}
