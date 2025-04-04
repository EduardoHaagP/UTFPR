/*
2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.
*/
#include <stdio.h>
#include <stdlib.h>

void potato(int n, int **ptr)
{
    if (n <= 0)
    {
        *ptr = NULL;
    }
    else
    {
        *ptr = malloc(n * sizeof(int));
    }
    return;
}

int main()
{
    int *ptr;
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%i", &n);
    potato(n, &ptr);
    for (int i = 1; i <= n; i++)
    {
        ptr[i - 1] = i;
    }
    if (ptr == NULL)
    {
        printf("O ponteiro é nulo\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%i\n", ptr[i]);
        }
    }
    free(ptr);
    return 0;
}