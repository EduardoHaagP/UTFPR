/*5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça
um programa em C que imprima todos os elementos comuns
aos dois vetores.*/
#include <stdlib.h>
#include <stdio.h>

int vetA[4];
int vetB[5];

int main(){
    printf("Digite os 4 numeros do vetor A\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%i",&vetA[i]);
    }
    printf("Digite os 5 numeros do vetor B\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i",&vetB[i]);
    }
    for (int j = 0; j < 4; j++)
    {   
    for (int i = 0; i < 5; i++)
    {
        if (vetA[j]==vetB[i])
        {
            printf("%i",vetA[j]);
        }
    }
    }
     
}