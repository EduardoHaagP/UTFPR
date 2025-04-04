/*
4) Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus
valores multiplicado por 2. Em seguida, exiba o endereço de memória das
posições que contém valores pares.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batata[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %i do vetor: ", i);
        scanf("%i", &batata[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", batata[i] * 2);
    }
    for (int i = 0; i < 5; i++)
    {
        if ((batata[i] % 2) == 0)
        {
            printf("Esse é o endereço da possicao com o valor %i: %p\n", batata[i], (void *)&batata[i]);
        }
    }

    return 0;
}