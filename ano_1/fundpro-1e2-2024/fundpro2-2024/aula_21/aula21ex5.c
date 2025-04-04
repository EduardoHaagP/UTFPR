/*
5) Elabore um programa para calcular e exibir o número de
vezes que cada letra ocorre dentro de um arquivo texto.
Ignore as letras com acento. O usuário deverá informar o
nome do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // variaveis
    FILE *arq;
    char nomeArquivo[101], c;
    char quatidadeLetras[26];
    char letras[2][26];
    // preencher matriz
    for (int i = 0; i < 26; i++)
    {
        letras[0][i] = 'a' + i;
        letras[1][i] = 'A' + i;
        quatidadeLetras[i] = 0;
    }
    // pedir arquivo
    printf("Digite o nome do arquivo desejado: ");
    fgets(nomeArquivo, 100, stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';
    arq = fopen(nomeArquivo, "r"); // Abre o arquiv
    // verificar se o aquivo abriu
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // entrar letra por letra
    while ((c = fgetc(arq)) != EOF)
    {
        // for 26 letras no alfabeto
        for (int i = 0; i < 26; i++)
        {
            // comparar letras
            if (c == letras[0][i] || c == letras[1][i])
            {
                quatidadeLetras[i]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%2c|%3i\n", letras[1][i], quatidadeLetras[i]);
    }
    // fecha os arquivos
    fclose(arq);
    return 0;
} // main