/*
3) Faça um programa que solicite o tamanho de um quadrado e mostre a borda de um quadrado utilizando o caracter #.
Exemplo:
Digite o tamanho desejado: 10

#	#	#	#	#	#	#	#	#	#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#	#	#	#	#	#	#	#	#	#
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x;
    printf("Digite o lado?");
    scanf("%i", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == 0 ||i == x-1||j==0||j == x-1)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}