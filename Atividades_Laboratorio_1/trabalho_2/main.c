#include <stdio.h>
#include <stdlib.h>

typedef struct ListaSimples
{
    int valor_chave;
    struct ListaSimples *proxima_struct;
} ListaSimples;

int main()
{
    int quantidade_de_posicoes_na_lista = 0;

    /* Criando uma lista simples */
    
    printf("Escolha um valor chave do tipo inteiro para adicionar na lista: \n");
    int valor_para_adicionar_na_lista = 0;
    scanf("%d", &valor_para_adicionar_na_lista);
    getchar();
    printf("Valor escolhido: %d \n", valor_para_adicionar_na_lista);    

    ListaSimples *lista = (ListaSimples *) malloc(sizeof(ListaSimples));

    printf("Ponteiro da lista: %p \n", lista);
    lista->valor_chave = valor_para_adicionar_na_lista;
    printf("Valor chave da lista: %d \n", lista->valor_chave);
    lista->proxima_struct = NULL;
    quantidade_de_posicoes_na_lista = 1;
    
    /* Adicionando mais structs em uma lista */

    printf("Escolha um valor chave do tipo inteiro para adicionar na lista: \n");
    valor_para_adicionar_na_lista = 0;
    scanf("%d", &valor_para_adicionar_na_lista);
    getchar();
    printf("Valor escolhido: %d \n", valor_para_adicionar_na_lista);

    ListaSimples *nova_struct = (ListaSimples *) malloc(sizeof(ListaSimples));

    printf("Ponteiro da nova struct: %p \n", nova_struct);
    nova_struct->valor_chave = valor_para_adicionar_na_lista;
    printf("Valor chave da nova_struct: %d \n", nova_struct->valor_chave);
    nova_struct->proxima_struct = NULL;

    // Ordenar de forma crescente

    ListaSimples *indice_auxiliar_da_lista = lista;
    int contador_1 = 0;
    
    while ( (indice_auxiliar_da_lista->valor_chave < nova_struct->valor_chave) && (indice_auxiliar_da_lista->proxima_struct != NULL) )
    {
        indice_auxiliar_da_lista = indice_auxiliar_da_lista->proxima_struct;
        contador_1++;
    }
    
    if (indice_auxiliar_da_lista->valor_chave < nova_struct->valor_chave)
    {
        nova_struct->proxima_struct = indice_auxiliar_da_lista->proxima_struct;
        indice_auxiliar_da_lista->proxima_struct = nova_struct;
    } else {
        nova_struct->proxima_struct = indice_auxiliar_da_lista;
        lista = nova_struct;
    }

    printf("Valor da struct 1: %d \n", lista->valor_chave);

    printf("Valor da struct 2: %d \n", lista->proxima_struct->valor_chave);



    /* Adicionar em uma posição da lista uma struct */

    

    

    if (lista->proxima_struct == NULL)
    {
        free(lista);
        lista = NULL;
    }

    return 0;
}
