/*
Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi escolhido através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco avestruz pingüim e pato Utilize a estrutura de decisão caso e a seguinte classificação:

mamiferos - quadrupede - carnivoro - leao
mamiferos - quadrupede - herbivoro - cavalo
mamiferos - bipede - onivoro - homem
mamiferos - bipede - frutifero - macaco

aves - nao-voadores - tropical - avestruz
aves - nao-voadores - polar - pinguim
aves - nadadores - pato
*/

#include<stdio.h>

int main() {

    int classe, locomocao, dieta, regiao;

    printf("Classe:\n[0] mamiferos\n[1] ave\n");
    scanf("%d", &classe);

    if (classe == 0)
    {
        printf("Locomocao:\n[0] quadrupede\n[1] bipede\n");
        scanf("%d", &locomocao);

        if (locomocao == 0) {
            printf("Dieta:\n[0] carnivoro\n[1] herbivoro\n");
            scanf("%d", &dieta);

            if (dieta == 0)
            {
                printf("Leao");
            } else if (dieta == 1) {
                printf("Cavalo");
            }   
        } else if (locomocao == 1) {
            printf("Dieta:\n[0] onivoro\n[1] frutifero\n");
            scanf("%d", &dieta);

            if (dieta == 0)
            {
                printf("Homem");
            } else if (dieta == 1) {
                printf("Macaco");
            }   
        }
    } else if (classe == 1) {
        printf("Locomocao:\n[0] nao-voadores\n[1] nadadores\n");
        scanf("%d", &locomocao);

        if (locomocao == 0) {
            printf("Regiao:\n[0] tropical\n[1] polar\n");
            scanf("%d", &regiao);

            if (regiao == 0)
            {
                printf("Avestruz");
            } else if (regiao == 1) {
                printf("Pinguim");
            }   
        } else if (locomocao == 1) {
            printf("Pato");
        }
    }
    
    return 0;
}
