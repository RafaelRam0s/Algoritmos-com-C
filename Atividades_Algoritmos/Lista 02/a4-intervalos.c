/*
São dados um número n e quatro outros, “A”, “B”, “C”, e “D”, correspondentes, respectivamente, às extremidades dos intervalos [A,B] e [C,D], sendo A<B, C<D e A<C. Determinar se n pertence somente ao intervalo [A,B] ou somente ao intervalo [C,D] ou se, n pertence a ambos ou se n não pertence a nenhum dos dois. Em cada caso imprimir uma mensagem conveniente.
*/

#include <stdio.h>

int main() {

    int num_n, numA, numB, numC, numD;

    printf("Informe um numero n: ");
    scanf("%d", &num_n);

    numA = 1;
    numB = 10;
    numC = 5;
    numD = 15;
    
    // printf("Informe um numero A: ");
    // scanf("%d", &numA);
    // printf("Informe um numero B, que seja maior que %d: ", numA);
    // scanf("%d", &numB);
    // printf("Informe um numero C, que seja maior que %d e menor que %d: ", numA, numB);
    // scanf("%d", &numC);
    // printf("Informe um numero D, que seja maior que %d: ", numB);
    // scanf("%d", &numD);

    if ((num_n >= numA && num_n <= numB) && (num_n >= numC && num_n <= numD))
    {
        printf("O numero n (%d) esta compreendido entre os intervalos [%d, %d] e [%d, %d]", num_n, numA, numB, numC, numD);
    }
    else if (num_n >= numC && num_n <= numD)
    {
        printf("O numero n (%d) esta compreendido entre o intervalo [%d, %d]", num_n, numC, numD);
    }
    else if (num_n >= numA && num_n <= numB)
    {
        printf("O numero n (%d) esta compreendido entre o intervalo [%d, %d]", num_n, numA, numB);
    }
    else
    {
        printf("O numero n (%d) nao esta compreendido entre os intervalos [%d, %d] e [%d, %d]", num_n, numA, numB, numC, numD);
    }

    return 0;
}
