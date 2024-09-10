/*
4) Faça um programa que receba um nome, ele deve perguntar
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[26];
int tamanho_nome = 0;
int x = 0;

int main()
{
    printf("digite um nome\n");
    scanf("%s", nome);
    tamanho_nome = strlen(nome);
    if (tamanho_nome < 5)
    {
        printf("Seu nome realmente tem menos de 5 caracteres\n");
        printf("Digite 1 para sim, 2 para nao\n");
        scanf("%i",&x);
    }
    if(x==2){
        printf("digite um nome novamente\n");
        scanf("%s", nome);
    }else{
        printf("%s\n",nome);
    }
    return 0;
}