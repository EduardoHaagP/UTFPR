/*
4) Considerando a estrutura atleta do exercício anterior, escreva
um programa que leia um arquivo binário contendo os dados de
cinco atletas. Calcule e exiba o nome do atleta mais alto e do
mais velho.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5

typedef struct
{
    char nome[21];
    char esporte[21];
    int idade;
    float altura;
} atleta;

int main()
{
    FILE *arq = fopen("arquivo.dat", "rb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    atleta cr7[NUM];
    fread(cr7, sizeof(atleta), NUM, arq);
    int everest = 0, idoso = 0;
    for (int i = 0; i < NUM; i++)
    {
        if (cr7[i].idade > cr7[idoso].idade)
        {
            idoso = i;
        }
        if (cr7[i].altura > cr7[everest].altura)
        {
            everest = i;
        }
    }
    printf("%s é o mais alto\n%s é o mais velho",cr7[everest].nome,cr7[idoso].nome);
    return 0;
}