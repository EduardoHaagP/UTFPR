/* Somando/Subtraindo duas matrizes
 Para somar/subtrair 2 matrizes A e B, ambas devem ter o mesmo número
de linhas e colunas (mesma ordem). A matriz resultante C tem a mesma
ordem.
 A soma/subtração ocorre entre os elementos correspondentes da célula A
com a célula B ( mesma coordenada)
Cx,y = Ax,y ± Bx,y
 Exercício 5) Faça um programa que some as matrizes A e B,
gerando C*/

#include <stdio.h>
#include <stdlib.h>

int matrixA[2][3];
int matrixB[2][3];
int matrixC[2][3];

int main()
{
    printf("Para matrix A\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o numero da linha %i e coluna %i\n", i, j);
            scanf("%i", &matrixA[i][j]);
        } // for j leitura matrix A
    } // for i leitura matrix A
    printf("Para matrix B\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o numero da linha %i e coluna %i\n", i, j);
            scanf("%i", &matrixB[i][j]);
        } // for j leitura matrix B
    } // for i leitura matrix B
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        } // for j Soma
    } // for i Soma
    printf("A matrix C é:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %4i", matrixC[i][j]);
        } // for j
        printf("\n");
    } // for i
return 0;
}