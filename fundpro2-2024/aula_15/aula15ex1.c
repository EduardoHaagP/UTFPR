/*
 1) Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Meses;
int main()
{
    int valorMes;
    Meses mes;
    printf("Digite o numero do mes:");
    scanf("%i", &valorMes);
    mes = valorMes;

    switch (mes)
    {
    case JANEIRO:
        printf("Janeiro ");
        printf("31dias\n");
        break;
    case FEVEREIRO:
        printf("Fevereiro ");
        printf("28/29dias\n");
        break;
    case MARCO:
        printf("Marco ");
        printf("31dias\n");
        break;
    case ABRIL:
        printf("Abril ");
        printf("30dias\n");
        break;
    case MAIO:
        printf("Maio ");
        printf("31dias\n");
        break;
    case JUNHO:
        printf("Junho ");
        printf("30dias\n");
        break;
    case JULHO:
        printf("Julho ");
        printf("31dias\n");
        break;
    case AGOSTO:
        printf("Agosto ");
        printf("30dias\n");
        break;
    case SETEMBRO:
        printf("Setembro ");
        printf("31dias\n");
        break;
    case OUTUBRO:
        printf("Outubro ");
        printf("31dias\n");
        break;
    case NOVEMBRO:
        printf("Novembro ");
        printf("31dias\n");
        break;
    case DEZEMBRO:
        printf("Dezembro ");
        printf("31dias\n");
        break;

    default:
        break;
    }

    return 0;
}