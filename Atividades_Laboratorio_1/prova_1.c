/*Programa para reavaliação da p1 e da p2*/

#include <stdio.h>
#include <stdlib.h>

typedef struct processo
{
	int indentificador;
	int estado;
	struct processo *prox;
} TProcesso;

void inserirNaLista(TProcesso **lista, int in, int es)
{
	TProcesso *item = (TProcesso *) malloc(sizeof(TProcesso));
	item->indentificador = in;
	item->estado = es;
	item->prox = NULL;

	if (*lista == NULL)
	{
		*lista = item;
	} else
	{
		TProcesso *ponteiro = *lista;
		while (ponteiro->prox != NULL)
		{
			ponteiro = ponteiro->prox;
		}
		ponteiro->prox = item;
	}
}

void alterarValorNaLista(TProcesso **lista, int in, int es)
{
	TProcesso *ponteiro = *lista;
	while (ponteiro != NULL && ponteiro->indentificador != in)
	{
		ponteiro = ponteiro->prox;
	}

	if (ponteiro == NULL)
	{
		printf("O indentificador nao foi encontrado\n");
	} else if (es < 0 || es > 2)
	{
		printf("O valor de estado e invalido\n");
	} else
	{
		ponteiro->estado = es;
	}
}

void excluirLista(TProcesso **lista)
{
	TProcesso *ponteiro = *lista;
	TProcesso *pauxiliar = ponteiro;

	while(ponteiro != NULL)
	{
		pauxiliar = ponteiro;
		ponteiro = ponteiro->prox;
		free(pauxiliar);
	}

	*lista = NULL;
}

int main()
{
	/*
		Item a. Incluir
	*/
	TProcesso *lista = NULL;
	FILE *arq1;
	arq1 = fopen("processo.txt", "r");
	
	char frase[100];
	int in, es;

	do {

		fscanf(arq1, "%i %i", &in, &es);
		printf("Leitura do arquivo: %d %d\n", in, es);
		 
		inserirNaLista(&lista, in, es);

	} while (fgets(frase, 100, arq1) != NULL);

	fclose(arq1);

	//printf("Teste: %d\n", lista->prox->indentificador);

	/*
		Item b. Alterar
	*/
	printf("Você deseja alterar qual processo (numero de indentificador)?\n");
	scanf("%d", &in);
	printf("Qual processo ele ira realizar?\n 0 - Terminando, 1 - Executando, 2 - Esperando\n");
	scanf("%d", &es);

	alterarValorNaLista(&lista, in, es);

	/*
		Item c. Encerrar
	*/
	excluirLista(&lista);

	return 0;
}