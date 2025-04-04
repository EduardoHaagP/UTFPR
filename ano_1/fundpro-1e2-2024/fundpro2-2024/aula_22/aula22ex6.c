/*
6) Considerando a estrutura ranking do exercício anterior,
escreva um programa que leia o arquivo gerado contendo
os dados dos 5 jogadores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5

typedef struct
{
    char nome[21];
    int pontuacao;
} jogador;

int main()
{
    FILE *arq = fopen("arquivo.txt", "r");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    jogador coldzera[NUM];
    for (int i = 0; i < NUM; i++)
    {
        fscanf(arq, "%[^,],%i\n",coldzera[i].nome,&coldzera[i].pontuacao);
        printf("%s|%i\n",coldzera[i].nome,coldzera[i].pontuacao);
    }


    return 0;
}