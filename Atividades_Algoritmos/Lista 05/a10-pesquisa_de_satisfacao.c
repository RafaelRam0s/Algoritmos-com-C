/*
Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não). Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um programa que calcule e escreva:
1 o número de pessoas que responderam sim;
2 o número de pessoas que responderam não;
3 a porcentagem de pessoas do sexo feminino que responderam sim;
4 a porcentagem de pessoas do sexo masculino que responderam não.
*/

#include<stdio.h>

int main() {

    int sexo = 0, gostou_do_produto = 0, continuar_no_programa = 1, quantidade_de_pessoas_que_gostaram = 0, quantidade_de_pessoas_que_nao_gostaram = 0, mulheres_que_gostaram = 0, homens_que_nao_gostaram = 0, contador = 0;

    float porcentagem_de_mulheres_que_gostaram = 0.0, porcentagem_de_homens_que_nao_gostaram = 0.0;

    while (continuar_no_programa != 0) {
        printf("\nSexo da pessoa ([1] Masculino ou [2] Feminino): ");
        scanf("%d", &sexo);

        printf("\nGostou do produto ([1] Sim ou [2] Nao)? ");
        scanf("%d", &gostou_do_produto);

        if (gostou_do_produto == 1) {
            quantidade_de_pessoas_que_gostaram++;

            if (sexo == 2) {
                mulheres_que_gostaram++;
            }
        } else {
            quantidade_de_pessoas_que_nao_gostaram++;

            if (sexo == 1) {
                homens_que_nao_gostaram++;
            }
        }

        contador++;

        printf("\nDigite qualquer numero diferente de zero para continuar no programa: ");
        scanf("%d", &continuar_no_programa);
    }

    porcentagem_de_mulheres_que_gostaram = (float)mulheres_que_gostaram * 100 / contador;
    porcentagem_de_homens_que_nao_gostaram = (float)homens_que_nao_gostaram * 100 / contador;
    
    printf("\nNumero de pessoas que responderam sim: %d", quantidade_de_pessoas_que_gostaram);
    printf("\nNumero de pessoas que responderam nao: %d", quantidade_de_pessoas_que_nao_gostaram);
    printf("\nA porcentagem de pessoas do sexo feminino que responderam sim: %f%%", porcentagem_de_mulheres_que_gostaram);
    printf("\nA porcentagem de pessoas do sexo masculino que responderam nao: %f%%", porcentagem_de_homens_que_nao_gostaram);

    return 0;
}
