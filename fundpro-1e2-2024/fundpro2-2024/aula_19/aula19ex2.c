/*
2) Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float batata[10];
    float *refbatata = batata;
    for (int i = 0; i < 10; i++)
    {
        printf("Endereço posição %i: %p\n", i, refbatata);
        refbatata++;
    }

    return 0;
}