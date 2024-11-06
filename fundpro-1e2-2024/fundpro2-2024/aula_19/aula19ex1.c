/*
 1) Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int batata1 = 1, batata2 = 2;
    printf("digite a variavel numero 1:");
    scanf("%i", &batata1);
    printf("digite a variavel numero 2:");
    scanf("%i", &batata2);
    int *batata1ref = &batata1, *batata2ref = &batata2;
    if (batata1ref > batata2ref)
    {
        printf("Conteudo: %i\nEndereço: %p\n", batata1, batata1ref);
    }
    else
    {
        printf("Conteudo: %i\nEndereço: %p\n", batata2, batata2ref);
    }

    return 0;
}