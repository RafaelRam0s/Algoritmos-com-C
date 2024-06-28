#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *arq;
    arq = fopen("arquivo-teste.txt", "a");
    /* 
        fopen, efetua a abertura de um arquivo, 
            Parâmetro 1: nome do arquivo, 
            Parâmetro 2: modo de abertura, opções: 
                r, (read) abre um arquivo, se existir, e coloca um ponteiro no início do documento
                w, (write) se o arquivo existe ele é recriado, se não existe ele é criado
                a, (append) abre um arquivo, se existir, e coloca um ponteiro no fim do documento, se ele não existir ele cria um
    */

    if (arq == NULL)
    {
        printf("Erro na arbetura do arquivo \n");
        exit(1); // Fecha 
    }

    char texto[] = "Testando escrita pelo programa c \n";
    fputs(texto, arq);
    /*
        fputs, em um arquivo aberto como append ele adiciona um texto
            Parâmetro 1: String que deseja adicionar
            Parâmetro 2: Arquivo que deve ser alterado
    */
    
    //fprintf(arq, texto);
    /*
        fprintf, em um arquivo aberto como append ele adiona um texto
            Parâmetro 1: Arquivo que deve ser alterado
            Parâmetro 2: String que deseja adicionar
    */

    fclose(arq);
    /*
        fclose, toda vez que escrever um fopen no seu código é preciso colocar um fclose ao terminar de editar o arquivo
            Parâmetro 1: variável com o endereço do arquivo
    */

    FILE *arq_r;
    arq_r = fopen("arquivo-teste.txt", "r");
    char texto_no_arquivo[100];
    fscanf(arq_r, "%s", texto_no_arquivo);
    /*
        fscanf, leitura e associação da informação à uma variável
            Parâmetro 1: variável do arquivo
            Parâmetro 2: tipo de dado lido
            Parâmetro 3+: variáveis que irão receber os dados
    */

    printf("Texto escrito dentro do arquivo: %s\n", texto_no_arquivo);

    fclose(arq_r);

    printf("Hello world!");

    return 0;
}
