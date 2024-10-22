/*
7) Escreva um programa que receba uma sigla de um estado da região
Sul ou Sudeste e exiba o nome completo do estado correspondente.
*/
// SP/MG/ES/RJ
// PR/SC/RS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome_estado[26];

int main()
{
    printf("Digite a sigla de um estado do sul o do sudeste\n");
    fgets(nome_estado, 26, stdin);
    nome_estado[strcspn(nome_estado, "\n")] = '\0';
    setbuf(stdin, NULL);
    if (strcasecmp(nome_estado, "MG") == 0)
    {
        printf("Minas Gerais\n");
    } // if MG
    else if (strcasecmp(nome_estado, "SP") == 0)
    {
        printf("Sao Paulo\n");
    } // if SP
    else if (strcasecmp(nome_estado, "ES") == 0)
    {
        printf("Espirito Santo\n");
    } // if ES
    else if (strcasecmp(nome_estado, "RJ") == 0)
    {
        printf("Rio de Janeiro\n");
    } // if RJ
    else if (strcasecmp(nome_estado, "PR") == 0)
    {
        printf("Parana\n");
    } // if PR
    else if (strcasecmp(nome_estado, "SC") == 0)
    {
        printf("Santa Catarina\n");
    } // if SC
    else if (strcasecmp(nome_estado, "RS") == 0)
    {
        printf("Rio Grande do Sul\n");
    } // if RS
    return 0;
} // main