/*
Uma empresa decidiu adquirir um veículo no valor de R$65.000,00. Ao consultar as taxas de juros, observou que a concessionária oferece condições de 1,2% ao mês, com o prazo máximo de financiamento de 5 anos. Para melhor compreender qual será o impacto mensal nas contas da empresa, João precisa elaborar um programa em que o usuário possa informar os dados, e que calcule e apresente: (utilize o comando de decisão switch):
a. O valor de juros totais pagos ao final do negócio.
b. O valor da prestação mensal fixa a ser paga.
c. O valor da prestação para 2, 3 e 5 anos.

João deverá utilizar a fórmula de juros compostos, apresentada abaixo:
M = PV*(1 + i)^t
M = Montante (Capital, acrescido dos juros)
PV = Capital
i = Taxa de juros
t = Período de tempo.
A fórmula para cálculo da prestação a ser utilizada neste caso está apresentada:

PMT = PV*( (((i + 1)^n)*i) / ((i + 1)^n - 1) )

n = Período de tempo.
*/

#include<stdio.h>
#include<math.h>

int main() {

    // Enunciado
    float preco_do_veiculo = 65000.00, juros_mensal = 0.012, prazo_max_de_financiamento_mensal = 60;

    float pv, i, fv, juros, pmt, pot;
    int n, opcao;

    printf("\nInforme o valor do veiculo a ser financiado: ");
    scanf("%f", &pv);
    printf("\nInforme o valor da taxa de juros a ser praticada: ");
    scanf("%f", &i);

    printf("\nQual a quantidade de anos para pagamento?");
    printf("\n[1] - 2 anos");
    printf("\n[2] - 3 anos");
    printf("\n[3] - 5 anos");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nDois anos");
            n = 24;
            break;
        case 2:
            printf("\nTres anos");
            n = 36;
            break;
        case 3:
            printf("\nCinco anos");
            n = 60;
            break;
        default:
            printf("Opcao invalida");
            return 0;
            break;
    }

    pot = pow(1 + i, n); // calculo da potencia para aplicar na formula
    fv = pv * pot; // calculo do valor futuro
    juros = fv - pv; // calculo do juros
    pmt = pv * (pot * i) / ((pot) - 1); // calculo da prestacao mensal
    
    printf("\nO valor total de juros sera de: %.2f", juros);
    printf("\nO valor da prestacao mensal fixa sera de: %.2f", pmt);

    return 0;
}
