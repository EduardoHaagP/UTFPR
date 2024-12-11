/*
4) Crie um programa para calcular e exibir o número de palavras
contido em um arquivo texto. O usuário deverá informar o nome do
arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // variaveis
    FILE *arq;
    int contador = 0;
    int empalavra = 0;
    char nomeArquivo[101], c;
    // pedir arquivo
    printf("Digite o nome do arquivo desejado: ");
    fgets(nomeArquivo, 100, stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';
    arq = fopen(nomeArquivo, "r"); // Abre o arquivo
    // verificar se o aquivo abriu
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // entrar letra por letra
    while ((c = fgetc(arq)) != EOF)
    {
        // verifica se passou uma palavra
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (empalavra == 1)
            {
                contador++;
                empalavra = 0;
            }
        }
        else
        {
            empalavra = 1;
        }
    }
    if (empalavra == 1)
    {
        contador++;
    }

    printf("O arquivo tem %i palavras\n", contador);
    // fecha os arquivos
    fclose(arq);
    return 0;
}
