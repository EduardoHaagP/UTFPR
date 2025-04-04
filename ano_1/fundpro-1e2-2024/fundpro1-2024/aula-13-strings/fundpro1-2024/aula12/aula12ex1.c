// 1) Crie uma matriz identidade com dimensões 5 x 5;
#include <stdio.h>
#include <stdlib.h>

int matrix[5][5];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 1;
            } // if
            else
            {
                matrix[i][j] = 0;
            } // else
        } // for j
    } // for i
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %4i", matrix[i][j]);
        } // for j
        printf("\n");
    } // for i
    return 0;
}