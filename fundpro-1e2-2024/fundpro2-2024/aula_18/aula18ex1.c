/*
1) Crie uma função que retorne o fatorial de um número passado por 
parâmetro. A ideia do fatorial está abaixo:

fat -  1 se n = 0
fat - nxgat(n-1) se n > 0
*/


#include <stdio.h>
#include <stdlib.h>

void fat(int n, int *resultado)
{
    if (n == 1)
    {
        return;
    }
    else if (n == 0)
    {
        *resultado = 1;
    }
    else
    {
        *resultado *= n;
        fat(n - 1, resultado);
    }
    /// fflush(stdout); legal
}

int main()
{
    int n = 0, resultado = 1;
    printf("Digite o numero que deseja seu fatorial: ");
    scanf("%i", &n);
    while (n < 0)
    {
        printf("O valor digitado não é valido. Digite novamente: ");
        scanf("%i", &n);
    }
    fat(n, &resultado);
    printf("O fatorial do numero desejado é: %i\n", resultado);
    return 0;
}