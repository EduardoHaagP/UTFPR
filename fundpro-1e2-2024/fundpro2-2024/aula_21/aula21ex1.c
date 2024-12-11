/*
1) Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //variaveis
    FILE *arq;
    int contador = 1;
    char nomeArquivo[101], c;
    //pedir arquivo
    printf("Digite o nome do arquivo desejado: ");
    fgets(nomeArquivo, 100, stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';
    arq = fopen(nomeArquivo, "r"); // Abre o arquivo
    //testa se abriu
    if (arq == NULL)
    {
        perror("Erro na abertura do arquivo\n");
        exit(1); // Finaliza o programa
    } // if
    // entrar letra por letra
    while ((c = fgetc(arq)) != EOF)
    {
        //conta linha
        if (c == '\n')
        {
            contador++;
        }
    }
    printf("O arquivo tem %i linhas\n",contador);
    //fecha arquivo
    fclose(arq);
    return 0;
}
