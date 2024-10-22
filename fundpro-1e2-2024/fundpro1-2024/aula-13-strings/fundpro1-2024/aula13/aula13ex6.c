/*
6) Faça um programa que receba um nome e um sobrenome. Ele deve
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[26];
char sobrenome[26];
char formato_americano[60];
char virgula[4] = ", ";

int main()
{
    printf("Digite seu nome\n");
    fgets(nome, 26, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setbuf(stdin, NULL);
    printf("Digite seu sobrenome\n");
    fgets(sobrenome, 26, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
    setbuf(stdin, NULL);
    strcat(sobrenome, virgula);
    strcat(sobrenome, nome);
    strcat(formato_americano, sobrenome);
    printf("Seu nome no formato americano fica:\n%s\n", formato_americano);
    return 0;
} // main