/*
3) Crie uma estrutura representando um atleta. Essa estrutura
deve conter o nome do atleta, seu esporte, idade e altura. Agora,
escreva um programa que leia os dados de cinco atletas e os
armazene em um arquivo binário.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NUM 5

typedef struct
{
    char nome[21];
    char esporte[21];
    int idade;
    float altura;
} atleta;

void nomeAtleta(char *nome)
{
    printf("Digite o Nome do Atleta: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setbuf(stdin, NULL);
    return;
}

void esporteAtleta(char *esporte)
{
    printf("Digite o esporte do Atleta: ");
    fgets(esporte, 20, stdin);
    esporte[strcspn(esporte, "\n")] = '\0';
    setbuf(stdin, NULL);
    return;
}

int idadeAtleta()
{
    int idade;
    printf("Digite a idade do Atleta: ");
    scanf("%i", &idade);
    setbuf(stdin, NULL);
    return idade;
}

float alturaAtleta()
{
    float altura;
    printf("Digite a altura do Atleta: ");
    scanf("%f", &altura);
    setbuf(stdin, NULL);
    return altura;
}

atleta lerDadosAtleta()
{
    atleta messi;
    char nome[21];
    nomeAtleta(nome);
    strcpy(messi.nome, nome);

    char esporte[21];
    esporteAtleta(esporte);
    strcpy(messi.esporte, esporte);
    messi.idade = idadeAtleta();
    messi.altura = alturaAtleta();
    return messi;
}

int main()
{
    FILE *arq = fopen("arquivo.dat", "wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    atleta cr7[NUM];
    for (int i = 0; i < NUM; i++)
    {
        cr7[i] = lerDadosAtleta();
    }
    fwrite(cr7, sizeof(atleta), NUM, arq);
    fclose(arq);

    return 0;
}
