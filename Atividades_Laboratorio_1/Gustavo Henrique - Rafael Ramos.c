/*
Trabalho - Listas Encadeadas
Integrantes:
Gustavo H. C. de Araujo - RA: 2386712
Rafael Ramos da Silva - RA: 2422719
*/

#include <stdio.h>
#include <stdlib.h>

#pragma region BOOL

#define FALSE 0
#define TRUE 1

#pragma endregion

#pragma region Colors

#define RESET      "\x1b[0m"
#define FG_RED     "\x1b[31m"
#define FG_GREEN   "\x1b[32m"
#define FG_YELLOW  "\x1b[33m"
#define FG_BLUE    "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_CYAN    "\x1b[36m"
#define FG_WHITE   "\x1b[37m"

#define BOLD_FG_RED     "\x1b[1;31m"
#define BOLD_FG_GREEN   "\x1b[1;32m"
#define BOLD_FG_YELLOW  "\x1b[1;33m"
#define BOLD_FG_BLUE    "\x1b[1;34m"
#define BOLD_FG_MAGENTA "\x1b[1;35m"
#define BOLD_FG_CYAN    "\x1b[1;36m"
#define BOLD_FG_WHITE   "\x1b[1;37m"

#define BG_RED     "\x1b[41m"
#define BG_GREEN   "\x1b[42m"
#define BG_YELLOW  "\x1b[43m"
#define BG_BLUE    "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN    "\x1b[46m"
#define BG_WHITE   "\x1b[47m"

#pragma endregion

#define move_cursor(X,Y) printf("\033[%d;%dH",Y,X)

#pragma region Funcoes Gerais

void clear(){
    system("@cls||clear");
    printf(RESET);
}

void tipoLista(int type){
    switch (type)
    {
        case 1:{
            printf(BOLD_FG_BLUE"Lista Simples\n"RESET);
        }break;
        case 2:{
            printf(BOLD_FG_BLUE"Lista com Cabeca\n"RESET);
        }break;
        case 3:{
            printf(BOLD_FG_BLUE"Lista Circular\n"RESET);
        }break;
        case 4:{
            printf(BOLD_FG_BLUE"Lista Duplamente Encadeada\n"RESET);
        }break;
        default:{

        }break;
    }
}

int escolha(){
    int choice = 0;
    setbuf(stdin,NULL);
    scanf("%d",&choice);
    return choice;
}

int escolha_chave(){
    clear();
    printf(FG_GREEN"Chave:"RESET);
    return escolha();
}

int menu(int type,int listType,int isDivided,int isInvalid,int isClear){
    if(isClear)clear();
    if(isInvalid) printf(FG_RED"Opcao Invalida\n"RESET);
    tipoLista(listType);
    switch (type)
    {
        case 0:{
            printf("===================================================================================================\n");
            printf("| 1-Lista Simples |");
            printf(" 2-Lista com Cabeca |");
            printf(" 3-Lista Circular |");
            printf(" 4-Lista Duplamente Encadeada |");
            printf(" 5-Sair |\n");
            printf("===================================================================================================\n");
        }break;
        case 1:{
            if(!isDivided) printf("=================");
            printf("===============================================\n");
            printf("| 1-Inserir |");
            printf(" 2-Remover |");
            printf(" 3-Imprimir |");
            if(!isDivided){
                printf(" 4-Dividir em 2 |");
            }
            printf(" 5-Sair |\n");
            if(!isDivided) printf("=================");
            printf("===============================================\n");
        }break;
        case 2:{
            printf("========================================================================\n");
            printf("| 1-No Inicio |");
            printf(" 2-Em qualquer posicao |");
            printf(" 3-Forma Crescente |");
            printf(" 4-Retornar |\n");
            printf("========================================================================\n");
        }break;
        case 3:{
            printf("=======================================================\n");
            printf("| 1-Em qualquer posicao | 2-Toda a Lista | 3-Retornar |\n");
            printf("=======================================================\n");
        }break;
        case 4:{
            printf("=============================\n");
            printf("|   Deseja realmente sair?  |\n");
            printf("|Voce perdera "FG_RED"TODA"RESET" sua lista|\n");
            printf("|    1-Sim    |    2-Nao    |\n");
            printf("=============================\n");
        }break;
        default:{

        }break;
    }
    printf(FG_GREEN"Escolha:"RESET);
    return escolha();
}

#pragma endregion

#pragma region Simples

typedef struct simples{
	int chave;
	struct simples *prox;
}s_Simples;

int imprimir_Simples(s_Simples *Lista){
    if(!Lista) return printf(FG_RED"Lista Vazia\n"RESET);
    while(Lista!=NULL){
        printf("%d\n",Lista->chave);
        Lista = Lista->prox;
    }
}

s_Simples * buscaChave(s_Simples *Lista, int chave,s_Simples **Anterior){
	while(Lista != NULL){
		if(chave == Lista->chave){
			break;
		}   
		*Anterior = Lista;
		Lista = Lista->prox;
	}
    return Lista;
}

void deletar_Simples(s_Simples **Lista,int chave){
    s_Simples *Anterior = *Lista;
    s_Simples *No =(s_Simples *) buscaChave(*Lista,chave,&Anterior);
    if(!No)return;
    if(No->chave == (*Lista)->chave){
        *Lista = No->prox;
        free(No);
        return;
    }
    Anterior->prox = No->prox;
    free(No);
}

void deletar_Tudo_Simples(s_Simples **Lista){
    if(!(*Lista)) return;
    s_Simples * p_Aux= *Lista;
    while(((*Lista)!=NULL)){
        p_Aux = *Lista;
        *Lista = (*Lista)->prox;
        free(p_Aux);
    }
}

void adicionar_Simples(s_Simples **Lista,int chave){
    s_Simples *No = (s_Simples *) malloc(sizeof(s_Simples));
    No->chave = chave;
    No->prox = NULL;
    if((*Lista)==NULL){
        *Lista = No;
    }else{
        No->prox = (*Lista);
		*Lista = No;
    }
}

void adicionar_Simples_Crescente(s_Simples **Lista,int chave){
    s_Simples *No = (s_Simples *) malloc(sizeof(s_Simples));
    No->chave = chave;
    No->prox = NULL;
    if(!(*Lista)){
        *Lista = No;
        return;
    }
    s_Simples *p_Aux = *Lista;
    s_Simples *p_Ant = *Lista;
    while(p_Aux != NULL){
        if(p_Aux->chave > No->chave){
            if((*Lista)->chave == p_Aux->chave){
                No->prox = *Lista;
                *Lista = No;
            }else{
                No->prox = p_Aux;
                p_Ant->prox = No;
            }
            return;
        }
        p_Ant = p_Aux;
        p_Aux = p_Aux->prox;
    }
    p_Ant->prox = No;
}

void divide_Lista_Simples(s_Simples **Lista1, s_Simples **Lista2,int chave){
	if(!(*Lista1)) return;
	s_Simples *Anterior = *Lista1;
	s_Simples *No =(s_Simples *) buscaChave(*Lista1,chave,&Anterior);
	if(!No)return;
	*Lista2 = No->prox;
	No->prox = NULL;
}

#pragma endregion

#pragma region Cabeca

typedef struct cabeca{
    int tamanho;
    s_Simples *prim;
}s_Cabeca;

void *adicionar_Cabeca(s_Cabeca **Lista,int chave){
    if(!(*Lista)){
        s_Cabeca *c =(s_Cabeca *) malloc(sizeof(s_Cabeca));
        c->tamanho = 0;
        c->prim = NULL;
        *Lista =  c;
    }
    adicionar_Simples(&((*Lista)->prim),chave);
    (*Lista)->tamanho+=1;
}
    
void *adicionar_Cabeca_Crescente(s_Cabeca **Lista,int chave){
    if(!(*Lista)){
        s_Cabeca *c =(s_Cabeca *) malloc(sizeof(s_Cabeca));
        c->tamanho = 0;
        c->prim = NULL;
        *Lista =  c;
    }
    adicionar_Simples_Crescente(&((*Lista)->prim),chave);
    (*Lista)->tamanho+=1;
}

void deletar_Tudo_Cabeca(s_Cabeca **Cabeca){
    if(!(*Cabeca)) return;
    s_Simples *Lista = (*Cabeca)->prim;
    s_Simples * p_Aux= Lista;
    while((Lista!=NULL)){
        p_Aux = Lista;
        Lista = Lista->prox;
        free(p_Aux);
    }
    free(*Cabeca);
    *Cabeca = NULL;
}

void divide_Lista_Cabeca(s_Cabeca **Lista1, s_Cabeca **Lista2,int chave){
	if(!(*Lista1)) return;
	s_Simples *Anterior = *Lista1;
	s_Simples *No =(s_Simples *) buscaChave(*Lista1,chave,&Anterior);
	if(!No)return;
    adicionar_Cabeca(Lista2,No->prox->chave);
    (*Lista2)->prim->prox = No->prox->prox;
    free(No->prox);
	No->prox = NULL;
}

void deletar_Cabeca(s_Cabeca **Lista,int chave){
    if(!(*Lista)) return;
    deletar_Simples(&((*Lista)->prim),chave);
    if(!((*Lista)->prim)){
        free(*Lista);
        *Lista = NULL;
    }
}

int imprimir_Cabeca(s_Cabeca *Cabeca){
    if(!Cabeca) return printf(FG_RED"Lista Vazia\n"RESET);
    imprimir_Simples(Cabeca->prim);
}

#pragma endregion

#pragma region Circular

typedef struct circular {
    int chave;
    struct circular *prox;
}s_Circular;

void adicionar_Circular(s_Circular **Lista,int chave){
    s_Circular *No = (s_Circular *) malloc(sizeof(s_Circular));

    No->chave = chave;
    No->prox = NULL;

    if(!No) return;
    if(!(*Lista)){
        No->prox = No;
        *Lista = No;
        return;
    }
    No->prox = (*Lista)->prox;
    (*Lista)->prox = No;
    (*Lista) = (*Lista)->prox;
}

void adicionar_Circular_Crescente(s_Circular **Lista,int chave){
   s_Circular *nova_struct = (s_Circular *) malloc(sizeof(s_Circular));
    nova_struct->chave = chave;
        
    if (*Lista == NULL)
    {
        nova_struct->prox = nova_struct;
        (*Lista) = nova_struct;
    } else {

        s_Circular *Lista_auxiliar = (*Lista);

        while ( (Lista_auxiliar->prox->chave < chave) && (Lista_auxiliar->prox != (*Lista)) )
        {
            Lista_auxiliar = Lista_auxiliar->prox;
        }

        if((*Lista)->chave < chave)
        {
            nova_struct->prox = (*Lista)->prox;
            (*Lista) = nova_struct;
            Lista_auxiliar->prox->prox = nova_struct;
        } else {
            nova_struct->prox = Lista_auxiliar->prox;
            Lista_auxiliar->prox = nova_struct;
        }
    } 
}

int imprimir_Circular(s_Circular *Lista)
{
    if(!Lista) return printf(FG_RED"Lista Vazia\n"RESET);
    s_Circular *p_Aux = Lista;
    printf("Valores na lista: \n");
    do {     
        printf("%d \n", p_Aux->prox->chave);
        p_Aux = p_Aux->prox;
    } while ( p_Aux != Lista );
}

s_Circular * buscaChave_Circular(s_Circular *Lista, int chave,s_Circular **Anterior){
	if(!Lista) return NULL;
    s_Circular *p_Aux = Lista;
    do{
		if(chave == Lista->chave){
			break;
		} 
		*Anterior = Lista;
		Lista = Lista->prox;  
	}while(Lista != p_Aux);
    return Lista;
}

void remover_Ultimo(s_Circular **Lista,int chave){
    s_Circular *Anterior = *Lista;

    while (Anterior->prox != *Lista)
    {
        Anterior = Anterior->prox;
    }
    
    Anterior->prox = (*Lista)->prox;

    s_Circular *Retirar = *Lista;

    (*Lista) = Anterior;

    free(Retirar);
    Retirar = NULL;

}

void deletar_Circular(s_Circular **Lista,int chave){
    if(!(*Lista)) return;
    s_Circular *Anterior = *Lista;
    s_Circular *No = buscaChave_Circular(*Lista,chave,&Anterior);
    if(!No)return;
    if(No->prox == No){
        free(No);
        *Lista = NULL;
        return;
    }
    if(No->chave == (*Lista)->chave){
        remover_Ultimo(Lista,chave);
        return;
    }
    Anterior->prox = No->prox;
    free(No);
}

void deletar_Tudo_Circular(s_Circular **Lista){
    if(!(*Lista)) return;
    s_Circular *p_Aux = *Lista;
    *Lista = (*Lista)->prox;
    p_Aux->prox = NULL;
    while(*Lista!=NULL){
        p_Aux = (*Lista);
        *Lista = (*Lista)->prox;
        free(p_Aux);
    }
}

#pragma endregion

#pragma region Duplamente Encadeada

typedef struct duplamente_encadeada{
    int chave;
    struct duplamente_encadeada * prox;
    struct duplamente_encadeada * ant;
    
}s_DEnc;

void adicionar_DEnc(s_DEnc **Lista,int chave){
    s_DEnc *No = (s_DEnc *) malloc(sizeof(s_DEnc));
    No->chave = chave;
    No->prox = NULL;
    No->ant = NULL;
    if((*Lista)==NULL){
        *Lista = No;
    }else{
        No->prox = (*Lista);
		*Lista = No;
        if((*Lista)->prox !=NULL){
            (*Lista)->prox->ant = *Lista;
        }
    }
}

void adicionar_DEnc_Crescente(s_DEnc **Lista,int chave){
    s_DEnc *No = (s_DEnc *) malloc(sizeof(s_DEnc));
    No->chave = chave;
    No->prox = NULL;
    No->ant = NULL;
    if(!(*Lista)){
        *Lista = No;
        return;
    }
    s_DEnc *p_Aux = *Lista;
    s_DEnc *p_Ant = *Lista;
    while(p_Aux != NULL){
        if(p_Aux->chave > No->chave){
            if((*Lista)->chave == p_Aux->chave){
                No->prox = *Lista;
                *Lista = No;
                if((*Lista)->prox !=NULL){
                    (*Lista)->prox->ant = *Lista;
                }
            }else{
                No->prox = p_Aux;
                No->ant = p_Ant;
                p_Ant->prox = No;
            }
            return;
        }
        p_Ant = p_Aux;
        p_Aux = p_Aux->prox;
    }
    No->ant = p_Ant;
    p_Ant->prox = No;
}

s_DEnc * buscaChave_DEnc(s_DEnc *Lista, int chave,s_DEnc **Anterior){
	while(Lista != NULL){
		if(chave == Lista->chave){
			break;
		}   
		*Anterior = Lista;
		Lista = Lista->prox;
	}
    return Lista;
}

void deletar_DEnc(s_DEnc **Lista,int chave){
    s_DEnc *Anterior = *Lista;
    s_DEnc *No =(s_DEnc *) buscaChave_DEnc(*Lista,chave,&Anterior);
    if(!No)return;
    if(No->chave == (*Lista)->chave){
        if(No->prox !=NULL){
            No->prox->ant = NULL;
        }
        *Lista = No->prox;
        free(No);
        return;
    }
    Anterior->prox = No->prox;
    if(Anterior->prox !=NULL){
        Anterior->prox->ant = Anterior;
    }
    free(No);
}

void deletar_Tudo_DEnc(s_DEnc **Lista){
    if(!(*Lista)) return;
    s_DEnc * p_Aux= *Lista;
    while(((*Lista)!=NULL)){
        p_Aux = *Lista;
        *Lista = (*Lista)->prox;
        free(p_Aux);
    }
}

void divide_Lista_DEnc(s_DEnc **Lista1, s_DEnc **Lista2,int chave){
	if(!(*Lista1)) return;
	s_DEnc *Anterior = *Lista1;
	s_DEnc *No =(s_DEnc *) buscaChave_DEnc(*Lista1,chave,&Anterior);
	if(!No)return;
	*Lista2 = No->prox;
    No->prox->ant = NULL;
	No->prox = NULL;
}

#pragma endregion

void main ()
{
    int divided = FALSE,invalid = FALSE,isClear = TRUE;
    int escolha_Lista = 0,chave = 0,tipo_De_Insercao = 0;

    while(escolha_Lista!=5){
        escolha_Lista = menu(0,0,divided,invalid,isClear);
        invalid = FALSE;
        isClear = TRUE;
        switch (escolha_Lista){
            //Lista Simples
            case 1:{
                s_Simples *Lista_Simples_1 = NULL;
                s_Simples *Lista_Simples_2 = NULL;
                while(escolha_Lista!=5){
                    escolha_Lista = menu(1,1,divided,invalid,isClear);
                    invalid = FALSE;
                    isClear = TRUE;
                    switch (escolha_Lista)
                    {
                        //Inserir
                        case 1:{
                            if(!tipo_De_Insercao) tipo_De_Insercao = escolha_Lista = menu(2,1,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (tipo_De_Insercao)
                            {
                                //Inicio
                                case 1:{
                                    adicionar_Simples(&Lista_Simples_1,escolha_chave());
                                }break;
                                //Qualquer Posição
                                case 2:{
                                    adicionar_Simples(&Lista_Simples_1,escolha_chave());
                                }break;
                                //Forma Crescente
                                case 3:{
                                    adicionar_Simples_Crescente(&Lista_Simples_1,escolha_chave());
                                }break;
                                //Retornar
                                case 4:{
                                    tipo_De_Insercao = 0;
                                }break;
                                default:{
                                    invalid = TRUE;
                                    tipo_De_Insercao = 0;
                                }break;
                            }
                            
                        }break;
                        //Remover
                        case 2:{
                            int remover = escolha_Lista = menu(3,1,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (remover)
                            {
                                //Qualquer Posição
                                case 1:{
                                    remover = escolha_chave();
                                    deletar_Simples(&Lista_Simples_1,remover);
                                    deletar_Simples(&Lista_Simples_2,remover);
                                }break;
                                //Toda a Lista
                                case 2:{
                                    deletar_Tudo_Simples(&Lista_Simples_1);
                                    deletar_Tudo_Simples(&Lista_Simples_2);
                                    divided = FALSE;
                                }break;
                                //Retornar
                                case 3:{
                                    
                                }break;
                                default:{
                                    invalid = TRUE;
                                }break;
                            }
                        }break;
                        //Imprimir
                        case 3:{
                            clear();
                            imprimir_Simples(Lista_Simples_1);
                            if(Lista_Simples_2){
                                printf("==========\n");
                                imprimir_Simples(Lista_Simples_2);
                            }
                            isClear = FALSE;
                        }break;
                        //Dividir em 2
                        case 4:{
                            if(!divided){
                                divide_Lista_Simples(&Lista_Simples_1,&Lista_Simples_2,escolha_chave());
                                divided = TRUE;
                            }
                        }break;
                        //Sair
                        case 5:{
                            int sair = menu(4,1,divided,invalid,isClear)-1;
                            if(sair){
                                escolha_Lista = 0;
                                break;
                            }
                            tipo_De_Insercao = 0;
                            deletar_Tudo_Simples(&Lista_Simples_1);
                            deletar_Tudo_Simples(&Lista_Simples_2);
                            divided = FALSE;

                        }break;
                        default:{
                            invalid = TRUE;
                        }break;
                    }
                }
                escolha_Lista = 0;
            }break;
            //Lista com Cabeça
            case 2:{
                s_Cabeca *Lista_Cabeca_1 = NULL;
                s_Cabeca *Lista_Cabeca_2 = NULL;
                while(escolha_Lista!=5){
                    escolha_Lista = menu(1,2,divided,invalid,isClear);
                    invalid = FALSE;
                    isClear = TRUE;
                    switch (escolha_Lista)
                    {
                        //Inserir
                        case 1:{
                            if(!tipo_De_Insercao) tipo_De_Insercao = escolha_Lista = menu(2,2,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (tipo_De_Insercao)
                            {
                                //Inicio
                                case 1:{
                                    adicionar_Cabeca(&Lista_Cabeca_1,escolha_chave());
                                }break;
                                //Qualquer Posição
                                case 2:{
                                    adicionar_Cabeca(&Lista_Cabeca_1,escolha_chave());
                                }break;
                                //Forma Crescente
                                case 3:{
                                    adicionar_Cabeca_Crescente(&Lista_Cabeca_1,escolha_chave());
                                }break;
                                //Retornar
                                case 4:{
                                    tipo_De_Insercao = 0;
                                }break;
                                default:{
                                    invalid = TRUE;
                                    tipo_De_Insercao = 0;
                                }break;
                            }
                            
                        }break;
                        //Remover
                        case 2:{
                            int remover = escolha_Lista = menu(3,2,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (remover)
                            {
                                //Qualquer Posição
                                case 1:{
                                    remover = escolha_chave();
                                    deletar_Cabeca(&Lista_Cabeca_1,remover);
                                    deletar_Cabeca(&Lista_Cabeca_2,remover);
                                }break;
                                //Toda a Lista
                                case 2:{
                                    deletar_Tudo_Cabeca(&Lista_Cabeca_1);
                                    deletar_Tudo_Cabeca(&Lista_Cabeca_2);
                                    divided = FALSE;
                                }break;
                                //Retornar
                                case 3:{
                                    
                                }break;
                                default:{
                                    invalid = TRUE;
                                }break;
                            }
                        }break;
                        //Imprimir
                        case 3:{
                            clear();
                            imprimir_Cabeca(Lista_Cabeca_1);
                            if(Lista_Cabeca_2){
                                printf("==========\n");
                                imprimir_Cabeca(Lista_Cabeca_2);
                            }
                            isClear = FALSE;
                        }break;
                        //Dividir em 2
                        case 4:{
                            if(!divided){
                                divide_Lista_Cabeca(&Lista_Cabeca_1,&Lista_Cabeca_2,escolha_chave());
                                divided = TRUE;
                            }
                        }break;
                        //Sair
                        case 5:{
                            int sair = menu(4,2,divided,invalid,isClear)-1;
                            if(sair){
                                escolha_Lista = 0;
                                break;
                            }
                            tipo_De_Insercao = 0;
                            deletar_Tudo_Cabeca(&Lista_Cabeca_1);
                            deletar_Tudo_Cabeca(&Lista_Cabeca_2);
                            divided = FALSE;

                        }break;
                        default:{
                            invalid = TRUE;
                        }break;
                    }
                }
                escolha_Lista = 0;
            }break;
            //Lista Circular
            case 3:{
                s_Circular *Lista_Simples_1 = NULL;
                s_Circular *Lista_Simples_2 = NULL;
                while(escolha_Lista!=5){
                    escolha_Lista = menu(1,3,divided,invalid,isClear);
                    invalid = FALSE;
                    isClear = TRUE;
                    switch (escolha_Lista)
                    {
                        //Inserir
                        case 1:{
                            if(!tipo_De_Insercao) tipo_De_Insercao = escolha_Lista = menu(2,3,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (tipo_De_Insercao)
                            {
                                //Inicio
                                case 1:{
                                    adicionar_Circular(&Lista_Simples_1,escolha_chave());
                                }break;
                                //Qualquer Posição
                                case 2:{
                                    adicionar_Circular(&Lista_Simples_1,escolha_chave());
                                }break;
                                //Forma Crescente
                                case 3:{
                                    adicionar_Circular_Crescente(&Lista_Simples_1,escolha_chave());
                                }break;
                                //Retornar
                                case 4:{
                                    tipo_De_Insercao = 0;
                                }break;
                                default:{
                                    invalid = TRUE;
                                    tipo_De_Insercao = 0;
                                }break;
                            }
                            
                        }break;
                        //Remover
                        case 2:{
                            int remover = escolha_Lista = menu(3,3,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (remover)
                            {
                                //Qualquer Posição
                                case 1:{
                                    remover = escolha_chave();
                                    deletar_Circular(&Lista_Simples_1,remover);
                                    deletar_Circular(&Lista_Simples_2,remover);
                                }break;
                                //Toda a Lista
                                case 2:{
                                    deletar_Tudo_Circular(&Lista_Simples_1);
                                    deletar_Tudo_Circular(&Lista_Simples_2);
                                    divided = FALSE;
                                }break;
                                //Retornar
                                case 3:{
                                    
                                }break;
                                default:{
                                    invalid = TRUE;
                                }break;
                            }
                        }break;
                        //Imprimir
                        case 3:{
                            clear();
                            imprimir_Circular(Lista_Simples_1);
                            if(Lista_Simples_2){
                                printf("==========\n");
                                imprimir_Circular(Lista_Simples_2);
                            }
                            isClear = FALSE;
                        }break;
                        //Dividir em 2
                        case 4:{
                            if(!divided){
                                divided = TRUE;
                            }
                        }break;
                        //Sair
                        case 5:{
                            int sair = menu(4,3,divided,invalid,isClear)-1;
                            if(sair){
                                escolha_Lista = 0;
                                break;
                            }
                            tipo_De_Insercao = 0;
                            deletar_Tudo_Circular(&Lista_Simples_1);
                            deletar_Tudo_Circular(&Lista_Simples_2);
                            divided = FALSE;

                        }break;
                        default:{
                            invalid = TRUE;
                        }break;
                    }
                }
                escolha_Lista = 0;
            }break;
            //Lista Duplamente Encadeada
            case 4:{
                s_DEnc *Lista_DEnc1 = NULL;
                s_DEnc *Lista_Denc2 = NULL;
                while(escolha_Lista!=5){
                    escolha_Lista = menu(1,1,divided,invalid,isClear);
                    invalid = FALSE;
                    isClear = TRUE;
                    switch (escolha_Lista)
                    {
                        //Inserir
                        case 1:{
                            if(!tipo_De_Insercao) tipo_De_Insercao = escolha_Lista = menu(2,1,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (tipo_De_Insercao)
                            {
                                //Inicio
                                case 1:{
                                    adicionar_DEnc(&Lista_DEnc1,escolha_chave());
                                }break;
                                //Qualquer Posição
                                case 2:{
                                    adicionar_DEnc(&Lista_DEnc1,escolha_chave());
                                }break;
                                //Forma Crescente
                                case 3:{
                                    adicionar_DEnc_Crescente(&Lista_DEnc1,escolha_chave());
                                }break;
                                //Retornar
                                case 4:{
                                    tipo_De_Insercao = 0;
                                }break;
                                default:{
                                    invalid = TRUE;
                                    tipo_De_Insercao = 0;
                                }break;
                            }
                            
                        }break;
                        //Remover
                        case 2:{
                            int remover = escolha_Lista = menu(3,1,divided,invalid,isClear);
                            invalid = FALSE;
                            isClear = TRUE;
                            switch (remover)
                            {
                                //Qualquer Posição
                                case 1:{
                                    remover = escolha_chave();
                                    deletar_DEnc(&Lista_DEnc1,remover);
                                    deletar_DEnc(&Lista_Denc2,remover);
                                }break;
                                //Toda a Lista
                                case 2:{
                                    deletar_Tudo_DEnc(&Lista_DEnc1);
                                    deletar_Tudo_DEnc(&Lista_Denc2);
                                    divided = FALSE;
                                }break;
                                //Retornar
                                case 3:{
                                    
                                }break;
                                default:{
                                    invalid = TRUE;
                                }break;
                            }
                        }break;
                        //Imprimir
                        case 3:{
                            clear();
                            imprimir_Simples(Lista_DEnc1);
                            if(Lista_Denc2){
                                printf("==========\n");
                                imprimir_Simples(Lista_Denc2);
                            }
                            isClear = FALSE;
                        }break;
                        //Dividir em 2
                        case 4:{
                            if(!divided){
                                divide_Lista_DEnc(&Lista_DEnc1,&Lista_Denc2,escolha_chave());
                                divided = TRUE;
                            }
                        }break;
                        //Sair
                        case 5:{
                            int sair = menu(4,1,divided,invalid,isClear)-1;
                            if(sair){
                                escolha_Lista = 0;
                                break;
                            }
                            tipo_De_Insercao = 0;
                            deletar_Tudo_DEnc(&Lista_DEnc1);
                            deletar_Tudo_DEnc(&Lista_Denc2);
                            divided = FALSE;

                        }break;
                        default:{
                            invalid = TRUE;
                        }break;
                    }
                }
                escolha_Lista = 0;
            }break;
            //Sair do Programa
            case 5:{
                return;
            }break;
            default:{
                invalid = TRUE;
            }break;
        }
    }
    
}