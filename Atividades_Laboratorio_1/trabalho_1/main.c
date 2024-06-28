#include <stdio.h>
#include <stdlib.h>

typedef struct ListaSimples
{
    int campo_chave;
    struct ListaSimples *ponteiro;
} ListaSimples;

int main()
{

    int opcao_1 = 0;
    ListaSimples *lista_simples = NULL;
    
    while (opcao_1 != 5)
    {
        printf("Escolha uma das opcoes abaixo: \n");
        printf("1- Inserir elemento na lista simples \n2- Remover elemento na lista simples \n3- Imprimir elemento da lista simples \n4- Dividir a lista em 2 \n5- Encerrar programa\n");
        
        scanf("%d", &opcao_1);
        fflush(stdin); // caso seja digitado um texto na pergunta que recebe inteiro o fflush impede do programa ficar em uma repetição infinita forçada

        switch (opcao_1)
        {
            case 1:
                int valor_campo_chave = 0;

                printf("Escolha um valor para o campo chave: \n");
                scanf("%d", &valor_campo_chave);
                fflush(stdin);

                if (lista_simples == NULL)
                {
                    lista_simples = (ListaSimples *) malloc(sizeof(ListaSimples));
                    lista_simples -> campo_chave = valor_campo_chave;
                    lista_simples -> ponteiro = NULL;
                }

                break;

            case 5:
                free(lista_simples);
                lista_simples = NULL;

                printf("Encerrando programa...");
                
                break;

            default:
                printf("Opcao invalida, escolha novamente \n");
                break;
        }

        
    }
    
    

    return 0;
}
