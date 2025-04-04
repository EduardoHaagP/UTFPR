/*
3) Crie um programa que contenha uma matriz (3x3) de float. Imprima o
endereço de cada posição dessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float batata[3][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    float(*refbatata)[3] = batata;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enderco da posição %ix%i da Matriz batata: %p\n", i, j, refbatata);

            refbatata++;
        }
    }

    return 0;
}