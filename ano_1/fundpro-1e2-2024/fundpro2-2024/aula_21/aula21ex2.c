/*
2) Escreva um programa que leia do usuário os nomes de dois
arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos
dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
segundo).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // variaveis
    FILE *arq1, *arq2, *arq3;
    char nomeArquivo1[101],nomeArquivo2[101],nomeArquivo3[101] = "arquivo3.txt",c;

    // pedir arquivo
    printf("Digite o nome do 1° arquivo desejado: ");
    fgets(nomeArquivo1, 100, stdin);
    nomeArquivo1[strcspn(nomeArquivo1, "\n")] = '\0';
    // abrir arquivo
    arq1 = fopen(nomeArquivo1, "r");
    // verificar se abriu
    if (arq1 == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // pedir arquivo
    printf("Digite o nome do 2° arquivo desejado: ");
    fgets(nomeArquivo2, 100, stdin);
    nomeArquivo2[strcspn(nomeArquivo2, "\n")] = '\0';
    // abrir arquivo
    arq2 = fopen(nomeArquivo2, "r");
    // verificar se abriu
    if (arq2 == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // abrir arquivo
    arq3 = fopen(nomeArquivo3, "w");
    // verificar se abriu
    if (arq3 == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // entrar letra por letra
    while ((c = fgetc(arq1)) != EOF)
    {
        //associar caracter por caracter
        fputc(c, arq3);
    }
    // entrar letra por letra
    while ((c = fgetc(arq2)) != EOF)
    {
        //associar caracter por caracter
        fputc(c, arq3);
    }

    //fechar arquivos
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    return 0;
}