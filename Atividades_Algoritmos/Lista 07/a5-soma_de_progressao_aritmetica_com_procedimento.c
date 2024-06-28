/*
Passando como parâmetros o primeiro termo e a razão de uma progressão aritmética, determinar por meio de um procedimento a soma dos seus primeiros cinco termos.
*/

#include<stdio.h>

void somaDos5PrimeirosTermosDaPA(int a1, int razao) {
    int soma_dos_5_primeiros_termos_da_pa = 0;
    
    for (int i = 1; i <= 5; i++) {
        int ai = a1 + ( (i - 1) * razao );

        soma_dos_5_primeiros_termos_da_pa += ai;
    }

    printf("\nA soma dos 5 primeiros termos da PA e: %d", soma_dos_5_primeiros_termos_da_pa);
}

int main() {

    int primeiro_termo, razao_da_pa;

    printf("\nPrimeiro termo da progressao aritmetica: ");
    scanf("%d", &primeiro_termo);

    printf("\nRazao da progressao aritmetica: ");
    scanf("%d", &razao_da_pa);

    somaDos5PrimeirosTermosDaPA(primeiro_termo, razao_da_pa);

    return 0;
}
