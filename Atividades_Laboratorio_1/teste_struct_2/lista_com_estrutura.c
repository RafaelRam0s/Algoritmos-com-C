#include <stdio.h>
#include <stdlib.h>

/*
Objetivos:
    1- Criar estrutura
    2- Adicionar por função um valor a essa estrutura
    3- Fazer por função a estrutura receber outra estrutura e printar os valores em cada uma delas
*/

typedef struct Estrutura
{
    int valor;
    struct Estrutura *proxima_Estrutura;
} Estrutura;

void alocarValorNaEstrutura(Estrutura **e_e_teste, int valor_para_alocar)
{
    Estrutura *Estrutura_a_adicionar = (Estrutura *) malloc(sizeof(Estrutura));

    if (Estrutura_a_adicionar == NULL)
    {
        printf("Deu ruim ao solicitar memória! \n");
        return;
    }

    Estrutura_a_adicionar->valor = valor_para_alocar;

    if ( (*e_e_teste) == NULL)
    {
        Estrutura_a_adicionar->proxima_Estrutura = NULL;
    } else
    {
        Estrutura_a_adicionar->proxima_Estrutura = *e_e_teste;
    }

    *e_e_teste = Estrutura_a_adicionar;
}

int main() 
{
    Estrutura *teste = NULL;

    alocarValorNaEstrutura(&teste, 30);
    alocarValorNaEstrutura(&teste, 7);
    alocarValorNaEstrutura(&teste, 10);

    printf("Valor 1 de teste: %d \n", teste->valor);
    printf("Endereco da proxima estrutura 1 de teste: %p  \n", teste->proxima_Estrutura);

    printf("Valor 2 de teste: %d \n", teste->proxima_Estrutura->valor);
    printf("Endereco da proxima estrutura 2 de teste: %p \n", teste->proxima_Estrutura->proxima_Estrutura);

    printf("Valor 3 de teste: %d \n", teste->proxima_Estrutura->proxima_Estrutura->valor);
    printf("Endereco da proxima estrutura 3 de teste: %p \n", teste->proxima_Estrutura->proxima_Estrutura->proxima_Estrutura);

    return 0;
}
