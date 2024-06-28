/*
15. O codigo de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo String: a ligeira raposa marrom saltou sobre o cachorro cansado 
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/

#include <stdio.h>

int main() {

    char texto1[100], texto2[100];

    printf("\nDigite um texto: ");
    fgets(texto1, 100, stdin);

    for (int contador = 0; texto1[contador] != 0; contador++)
    {
        texto2[contador] = (texto1[contador] + 3);
    }

    printf("Texto codificado: %s", texto2);

    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// void ToUp ( char *p )
// {
//     while( *p )
//     {
//         *p=toupper( *p );
//         p++;
//     }
// }

// int main() {

//     char texto1[100], texto2[100];

//     printf("\nDigite um texto: ");
//     fgets(texto1, 100, stdin);

//     ToUp(texto1);
    
//     for (int contador = 0; texto1[contador] != 0; contador++)
//     {
//         if (texto1[contador] == ' ')
//         {
//             texto2[contador] = ' ';
//         } else {
//             texto2[contador] = (texto1[contador] + 3);
//         }
//     }

//     printf("Texto codificado: %s", texto2);

//     return 0;
// }