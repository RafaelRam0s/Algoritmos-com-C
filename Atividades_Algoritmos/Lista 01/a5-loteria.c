// Dois amigos jogam na loteria toda semana. Escreva um programa que solicite a quantia com que cada um participou e o valor do prêmio a ser rateado em partes diretamente proporcionais às quantias de cada um deles. O programa deve imprimir quanto cada um dos amigos receberá caso sejam ganhadores.

#include <stdio.h>

int main() {

    int qtd_que_participou, qtd_que_seu_amigo_participou;
    float valor_do_premio, valor_que_vc_recebe, valor_que_seu_amigo_recebe, proporcao_por_aposta;
    
    printf("Quantas vezes você participou da loteria? ");
    scanf("%d", &qtd_que_participou);

    printf("\nQuantas vezes seu amigo participou da loteria? ");
    scanf("%d", &qtd_que_seu_amigo_participou);

    printf("\nQual era o valor do premio? ");
    scanf("%f", &valor_do_premio);

    proporcao_por_aposta = valor_do_premio / (qtd_que_participou + qtd_que_seu_amigo_participou);
    valor_que_vc_recebe = qtd_que_participou * proporcao_por_aposta;
    valor_que_seu_amigo_recebe = qtd_que_seu_amigo_participou * proporcao_por_aposta;

    printf("\nCaso ambos sejam ganhadores do mesmo premio, você recebera um valor de %.2f e seu amigo um valor de %.2f.", valor_que_vc_recebe, valor_que_seu_amigo_recebe);
    
    return 0;
}
