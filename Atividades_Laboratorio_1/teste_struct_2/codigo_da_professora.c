
#include <stdio.h>
#include <stdlib.h>

typedef struct Estrutura
{
    int valor_para_Estrutura;
    struct Estrutura *endereco_da_proxima_Estrutura;
} Estrutura;

Estrutura *alocaEstrutura(int numero_para_valor_em_Estrutura)
{
    Estrutura *endereco_de_estrutura; 
    endereco_de_estrutura = (Estrutura *) malloc(sizeof(Estrutura));

    if (endereco_de_estrutura == NULL)
    {
        return NULL;
    } 

    endereco_de_estrutura -> valor_para_Estrutura = numero_para_valor_em_Estrutura;
    endereco_de_estrutura -> endereco_da_proxima_Estrutura = NULL;
    return endereco_de_estrutura;
}

void insereEstruturaNoInicioEPassaAsProximasAdiante(Estrutura **endereco_do_endereco_de_Estrutura, int numero_para_valor_da_Estrutura)
{
    Estrutura* Estrutura_provisoria = alocaEstrutura(numero_para_valor_da_Estrutura);
    
    if (Estrutura_provisoria == NULL) 
    {
        printf("Deu ruim ao criar espaço na memória para a variável \n");
        return;
    }

    Estrutura_provisoria -> endereco_da_proxima_Estrutura = *endereco_do_endereco_de_Estrutura;
    *endereco_do_endereco_de_Estrutura = Estrutura_provisoria; 
}

int main() 
{
    Estrutura *endereco_de_Estrutura = NULL;
    insereEstruturaNoInicioEPassaAsProximasAdiante(&endereco_de_Estrutura, 7);
    insereEstruturaNoInicioEPassaAsProximasAdiante(&endereco_de_Estrutura, 12);

    printf("Teste 1: %d \n", endereco_de_Estrutura -> valor_para_Estrutura);
    printf("Teste 2: %d \n", endereco_de_Estrutura -> endereco_da_proxima_Estrutura -> valor_para_Estrutura);

    printf("Fim do programa \n");

    return 0;
}

/*

Variavel: prim
Conteudo: Estrutura NULL
Endereço: Aleatorio



*/
