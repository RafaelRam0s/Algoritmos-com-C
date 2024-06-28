
#include <stdio.h>

int main() {

    int M;
    printf("\nInforme o valor da ordem da matriz quadrada: ");
    scanf("%d", &M);

    int matriz[M][M], n;

    // Captar número do usuário
    printf("\nEscolha um numero para preencher a primeira coluna, a última coluna e a diagonal secundaria da matriz: ");
    scanf("%d", &n);

    // Criar a estrutura de uma matriz
    for (int contador_linha = 0; contador_linha < M; contador_linha++)
    {
        for (int contador_coluna = 0; contador_coluna < M; contador_coluna++)
        {
            // Se for a 1° coluna ou se for a última coluna ou se for a diagonal secundária, preencha com o número do usuário
            if ( (contador_coluna == 0) || (contador_coluna == (M - 1)) || (contador_coluna == M - 1 - contador_linha) )
            {
                matriz[contador_linha][contador_coluna] = n;
            }

        }
    }

    // Cálculo Triângulo Superior
    int quantidade_de_elementos_a_preencher = 1;
    for (int contador_linha = M - 3; contador_linha >= 0; contador_linha--)
    {
        for (int contador_coluna = 1; contador_coluna <= quantidade_de_elementos_a_preencher; contador_coluna++)
        {
            matriz[contador_linha][contador_coluna] = matriz[contador_linha + 1][contador_coluna - 1] + matriz[contador_linha + 1][contador_coluna];
        }
        quantidade_de_elementos_a_preencher++;
    }

    // Cálculo Triângulo Inferior
    quantidade_de_elementos_a_preencher = 1;
    int quantidade_de_vezes_que_a_operacao_deve_ocorrer = 0;
    for (int contador_linha = 2; contador_linha < M; contador_linha++) 
    {
        for (int contador_coluna = M - 2; quantidade_de_vezes_que_a_operacao_deve_ocorrer < quantidade_de_elementos_a_preencher; contador_coluna--) 
        {

            matriz[contador_linha][contador_coluna] = matriz[contador_linha - 1][contador_coluna] + matriz[contador_linha - 1][contador_coluna + 1];

            quantidade_de_vezes_que_a_operacao_deve_ocorrer++;
        }
        quantidade_de_vezes_que_a_operacao_deve_ocorrer = 0;
        quantidade_de_elementos_a_preencher++;
    }

    // Mostrar a matriz
    printf("\n--- Matriz ---");
    for (int contador_linha = 0; contador_linha < M; contador_linha++)
    {
        printf("\n");
        for (int contador_coluna = 0; contador_coluna < M; contador_coluna++)
        {
            printf("%d ", matriz[contador_linha][contador_coluna]);
        }
    }
    

    return 0;
}
