/*
4) Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
*/
#include <stdio.h>
#include <stdlib.h>

int **patota(int L, int C)
{
    int **matriz = (int **)malloc(L * sizeof(int *));
    if (matriz == NULL)
    {
        printf("Erro ao alocar em L");
        exit(1);
    }
    else
    {
        for (int i = 0; i < L; i++)
        {
            matriz[i] = (int *)malloc(C * sizeof(int));
            if (matriz[i] == NULL)
            {
                printf("Erro ao alocar em L");
                exit(1);
            }
        }
    }
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = 0;
        }
    }

    return matriz;
}

int main()
{
    int L = 0, C = 0;
    printf("Linhas: ");
    scanf("%i", &L);
    printf("Colunas: ");
    scanf("%i", &C);
    int **mat = patota(L, C);
    printf("\n");

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {

            printf("%3i", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < L; i++)
    {
        free(mat[i]);
    }

    free(mat);
    return 0;
}