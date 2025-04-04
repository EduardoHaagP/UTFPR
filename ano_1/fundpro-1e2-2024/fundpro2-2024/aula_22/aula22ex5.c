/*
5) Crie uma estrutura representando um ranking. Essa
estrutura deve conter o nome do jogador e sua pontuação.
Em seguida, escreva um programa que leia os dados de 5
jogadores e os armazene em um arquivo utilizando a
técnica de Dados formatados.
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

void nomeAtleta(char *nome)
{
    printf("Digite o nome do jogador: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setbuf(stdin, NULL);
    return;
}

int pontuacaoJogador()
{
    int pontuacao;
    printf("Digite a pontuacao do jogador: ");
    scanf("%i", &pontuacao);
    setbuf(stdin, NULL);
    return pontuacao;
}

jogador lerDadosAtleta()
{
    jogador fallen;
    char nome[21];
    nomeAtleta(nome);
    strcpy(fallen.nome, nome);
    fallen.pontuacao = pontuacaoJogador();
    return fallen;
}

int main()
{
    FILE *arq = fopen("arquivo.txt", "w");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    jogador coldzera[NUM];
    for (int i = 0; i < NUM; i++)
    {
        coldzera[i] = lerDadosAtleta();
        fprintf(arq, "%s,%i\n", coldzera[i].nome,coldzera[i].pontuacao);
    }

    return 0;
}