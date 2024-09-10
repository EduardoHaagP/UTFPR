/*
 4) Faça uma função que receba a média final de um aluno
por parâmetro e retorne o seu conceito, conforme a tabela
abaixo:
{9-10} A
{7-9{ B
{5-7{ C
{0-5{ D
*/

#include <stdio.h>
#include <stdlib.h>

int conceito(int nota)
{
    char avaliacao;
    if (nota >= 9)
    {
        avaliacao = 'A';
    }
    else if (nota >= 7)
    {
        avaliacao = 'B';
    }
    else if (nota >= 5)
    {
        avaliacao = 'C';
    }
    else
    {
        avaliacao = 'D';
    } // if e else
    return avaliacao;

} // conceito

int main()
{
    int nota;
    printf("digite sua nota ");
    scanf("%i", &nota);
    while (nota < 0 && nota > 10)
    {
        printf("nota invalida, digite novamente\n");
        scanf("%i", &nota);
    } // while
    char avaliacao = conceito(nota);
    printf("Seu conceito e: %c\n", avaliacao);
    return 0;
} // main