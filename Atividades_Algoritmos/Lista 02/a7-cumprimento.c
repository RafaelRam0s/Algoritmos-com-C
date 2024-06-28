/*
Elabore um algoritmo que efetue a leitura do nome e do sexo de uma pessoa, apresentando como saída uma das seguintes mensagens: “Ilmo Sr.”, para o sexo informado como masculino, ou a mensagem “Ilma Sra.”, para os sexo informado como feminino. Apresente também abaixo da mensagem impressa o nome da pessoa.
*/

#include <stdio.h>

/*
int main() {

    char primeiro_nome[10], sexo[1];

    printf("\nQual o seu primeiro nome? ");
    scanf("%s", primeiro_nome);

    char nome[10];
    int x;

    for (x = 0; primeiro_nome[x] != '\0'; x++) {
        nome[x] = primeiro_nome[x];
    }

    nome[x] = '\0';

    printf("\nQual o seu sexo? Digite \"M\" para masculino e \"F\" para feminino.");
    scanf("%s", sexo);

    if (sexo[0] == 'M' || sexo[0] == 'm') // homem
    {
        printf("\nIlmo Sr. %s", nome);
    }
    else if (sexo[0] == 'F' || sexo[0] == 'f') // mulher
    {
        printf("\nIlma Sra. %s", nome);
    }
    else
    {
        printf("\nValor de sexo invalido, %s", sexo);
    }

    return 0;
}
*/

int main() {

    char seu_nome[100], caracteres_digitados, sexo[2];
    int x = 0;

    printf("\nQual o seu primeiro nome? ");
    do {
        caracteres_digitados = getchar();
        seu_nome[x] = caracteres_digitados;
        ++x;
    } while (caracteres_digitados != '\n');
    seu_nome[x - 1] = '\0';

    printf("\nQual o seu sexo? Digite \"M\" para masculino e \"F\" para feminino.");

    x = 0;
    do {
        caracteres_digitados = getchar();
        sexo[x] = caracteres_digitados;
        ++x;
    } while (caracteres_digitados != '\n');
    sexo[x - 1] = '\0';

    if (sexo[0] == 'M' || sexo[0] == 'm') // homem
    {
        printf("\nIlmo Sr. %s", seu_nome);
    }
    else if (sexo[0] == 'F' || sexo[0] == 'f') // mulher
    {
        printf("\nIlma Sra. %s", seu_nome);
    }
    else
    {
        printf("\nValor de sexo invalido: %s", sexo);
    }

    return 0;
}

