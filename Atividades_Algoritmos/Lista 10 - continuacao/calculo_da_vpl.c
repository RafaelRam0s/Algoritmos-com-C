
#include <stdio.h>
#include <math.h>

int main()
{
    
    // A empresa não fará investimento inicial. 
    int investimento_inicial = 0;
    
    // O projeto terá duração de quatro anos.
    // int n = 4;
    int n = 0;
    printf("Periodo do fluxo de caixa: ");
    scanf("%d", &n);
    
    // A empresa possui uma aplicação financeira que paga 0,88% ao mês. Utilize deste índice como TMA.
    // float TMA = 0.88/100.0;
    // Identifique, utilizando do mesmo programa, no caso de a empresa encontrar uma aplicação financeira com rendimentos superiores a 2,0% ao mês, se o investimento será viável.
    // float TMA = 0.02;
    float TMA;
    // O usuário deve informar a TMA e os dados de fluxo de caixa para cálculo no sistema
    float FC[n];
    
    printf("\nInforme a TMA: ");
    scanf("%f", &TMA);
    
    for (int contador = 0; contador < n; contador++) {
        
        printf("\nInforme o valor do fluxo de caixa do ano %d: ", contador + 1);
        scanf("%f", &FC[contador]);
    }
    
    int j = 1;
    float VPL = 0;

    while (j <= n) {
        
        VPL = VPL + ( (float)(FC[j - 1] * j)/(float)pow((1 + TMA), j) ) - investimento_inicial;
        
        j++;
    }
    
    // O sistema deverá apresentar o valor do VPL, bem como o parecer (viável ou inviável para investimento)
    printf("\nO valor do VPL e de: %f", VPL);
    
    if (VPL > 0) {
        printf("\nRendimento vantajoso");
    } else {
        printf("\nRendimento desvantajoso");
    }
    

    return 0;
}
