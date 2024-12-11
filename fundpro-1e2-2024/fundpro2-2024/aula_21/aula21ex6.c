/*
6) Elabore um programa no qual o usuário informe o nome
de um arquivo texto e uma palavra, e o programa informe o
número de vezes que aquela palavra aparece
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variaveis
    FILE *arq;
    char nomeArquivo[101], palavra[21], c;
    int repetições = 0, tamanho, empalavra = 0, letra = 0;
    //pedir arquivo
    printf("Digite o nome do arquivo desejado: ");
    fgets(nomeArquivo, 100, stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';
    //abrir arquivo
    arq = fopen(nomeArquivo, "r"); // Abre o arquivo
    //verificar se arquivo abriu
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    //pedir palavra
    printf("informe a palavra: ");
    fgets(palavra, 20, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    //saber o tamanho da palavra
    tamanho = strlen(palavra);

    //entrar letra por letra
    while ((c = fgetc(arq)) != EOF)
    {   //verificar palavras
        if ((c == palavra[0] && empalavra == 0 )|| (c == palavra[0]-32 && empalavra == 0 ))
        {
            letra++;
            empalavra = 1;
        }
        else if ((c == palavra[letra] && empalavra == 1 )||( c == palavra[letra]-32 && empalavra == 1))
        {
            letra++;
        }
        else if (letra == tamanho)
        {
            repetições++;
            letra = 0;
            empalavra = 0;
        }else{
            empalavra = 0;
            letra = 0;
        }
    }
    if (letra == tamanho)
    {
        repetições++;
    }
    //exibir palavra
    printf("%s repete %i vezes\n", palavra, repetições);

    //fechar os arquivos
    fclose(arq);
    return 0;
}//main