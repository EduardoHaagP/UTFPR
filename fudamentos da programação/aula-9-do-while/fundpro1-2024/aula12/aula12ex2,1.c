/* 2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária*/
#include <stdio.h>
#include <stdlib.h>

int matrix[3][3];
int somaPrincipal, somaSecundaria;

// 00 01 02
// 10 11 12
// 20 21 22
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o numero da linha %i e coluna %i\n", (i), (j));
            scanf("%i", &matrix[i][j]);
        } // for j leitura
    } // for i leitura
    somaPrincipal = matrix[0][0] + matrix[1][1] + matrix[2][2];
    somaSecundaria = matrix[0][2] + matrix[1][1] + matrix[2][0];
    printf("Soma digonal principal = %i\nSoma digonal secundaria = %i\n", somaPrincipal, somaSecundaria);
    return 0;
}
