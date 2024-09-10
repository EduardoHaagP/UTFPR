/*
1) Crie um programa para armazenar 10 nomes  em um vetor
e imprimir uma lista numerada
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char nome[10][26];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o nome %i: ",i+1);
        fgets(nome[i], 26, stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        setbuf(stdin, NULL);
    }//for
    for (int i = 0; i < 10; i++)
    {
        printf("Nome %i: %s\n",i+1,nome[i]);
    }//for
    return 0;
}//main