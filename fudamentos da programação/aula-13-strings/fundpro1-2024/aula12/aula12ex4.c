/*Multiplicando uma matriz por um escalar
Uma matriz C é criada com seus elementos gerados a partir da
multiplicação de cada célula da matriz A pelo número escalar
C x,y = A x,y * escalar
 Exercício 4) Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C
*/
#include <stdio.h>
#include <stdlib.h>

int matrixA[2][3];
int matrixC[2][3];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o numero da linha %i e coluna %i\n", i, j);
            scanf("%i", &matrixA[i][j]);
        } // for j leitura
    } // for i leitura
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixC[i][j] = 5 * (matrixA[i][j]);
        } // for j multiplicação escalar
    } // for i multiplicação escalar
    printf("A matrix C é:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %4i", matrixC[i][j]);
        } // for j
        printf("\n");
    } // for i
}