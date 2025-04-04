/*3) Escreva um programa para converter o conteúdo de um arquivo
texto em caracteres maiúsculos. O programa deverá ler do usuário o
nome do arquivo a ser convertido e o nome do arquivo a ser salvo.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variaveis
    FILE *min, *max;
    char c;
    // abrir arquivos
    min = fopen("min.txt", "r");
    // verificar se abriu
    if (min == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // abrir arquivos
    max = fopen("max.txt", "w");
    // verificar se abriu
    if (max == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    // entrar letra por letra
    while ((c = fgetc(min)) != EOF)
    {
        if (c > 'a' && c < 'z')
        {
            fputc(c - 32, max);
        }
        else
        {
            fputc(c, max);
        }
    }
    // fechar arquivos
    fclose(min);
    fclose(max);

    return 0;
}