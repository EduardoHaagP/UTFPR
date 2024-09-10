/*Multiplicação de matrizes
Condição: o número de colunas da matriz da esquerda é o mesmo número de
linhas da matriz da direita
Se A é uma matriz m por n e D é uma matriz n por p, então seu produto AD é a
matriz m por p (m linhas e p colunas)
Fórmula:   ADx,y = Ax,0D0,y + Ax,1D1,y + Ax,2D2,y  + Ax,3D3,y....
Exercício 6 ) Faça um programa que multiplique as matrizes A e D
abaixo gerando matriz AD */
#include <stdio.h>
#include <stdlib.h>

int matrixA[2][3];
int matrixD[3][2];
int matrixAD[2][2];

int main()
{
    printf("Para matrix A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MatrizA[%i][%i]\n", i, j);
            scanf("%i", &matrixA[i][j]);
        } // for j leitura matrix A
    }     // for i leitura matrix A
    printf("Para matrix D\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("MatrizD[%i][%i]\n", i, j);
            scanf("%i", &matrixD[i][j]);
        } // for j leitura matrix D
    }     // for i leitura matrix D
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {

                matrixAD[j][k] += matrixA[j][i] * matrixD[i][k];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %4i", matrixAD[i][j]);
        } // for j
        printf("\n");
    } // for i
    return 0;
}
