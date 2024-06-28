
/*
    @@@ Na linha 15 o visual studio code reclama que o tamanho do vetor não deve ser definido por uma variavel, contudo ao rodar o código no GDB Online o código compila sem problemas.
*/

#include <stdio.h>

int main() {

    int numero_de_posicoes_no_vetor;
    
    printf("\nQuantos espacos o vetor deve ocupar? ");
    scanf("%d", &numero_de_posicoes_no_vetor);
    
    int vetor[numero_de_posicoes_no_vetor];

    for (int i = 0; i < numero_de_posicoes_no_vetor; i++) {
        printf("\n\nDigite um numero inteiro para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
        
        printf("\nO valor gravado na posicao %d e: %d", i, vetor[i]);
    }

    return 0;
}
