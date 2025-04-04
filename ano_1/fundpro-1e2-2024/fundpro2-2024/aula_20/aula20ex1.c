/*
1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    int *vetor = malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        vetor[i - 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", vetor[i]);
    }
    free(vetor);
    return 0;
}