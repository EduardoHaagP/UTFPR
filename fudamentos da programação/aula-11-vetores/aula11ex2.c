/*2) Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A*/
#include <stdlib.h>
#include <stdio.h>

int vetA[10];
int vetB[10];

int main()
{
    printf("Digite os 10 numeros do vetor A\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vetA[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        vetB[i] = vetA[i] * vetA[i];
    }
    printf("A B\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vetA[i]);
        printf("%i\n", vetB[i]);
    }
    return 0;
}