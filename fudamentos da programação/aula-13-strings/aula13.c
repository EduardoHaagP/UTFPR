// strings
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char nome1[21];

int main()
{
    // char nome[26]="Eduardo";
    printf("Hello World!\n");
    printf("Digite seu nome: ");
    fgets(nome1, 21, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    setbuf(stdin, NULL);
    printf("Bem Vindo %s \n", nome1);

    return 0;
} // main