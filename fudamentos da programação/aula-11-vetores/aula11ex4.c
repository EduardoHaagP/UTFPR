/*4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado.*/
#include <stdio.h>
#include <stdlib.h>

int vet1[8];
int soma;

int main()
{
    printf("Digite os 8 numeros\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%i", &vet1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        soma += vet1[i];
    }
    printf("A soma de todos os elementos do vetor é: %d\n", soma);
    return 0;
}
