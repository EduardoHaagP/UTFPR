/*1) Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma; */
#include <stdlib.h>
#include <stdio.h>

int vet1[5];
int vet2[5];
int vetSoma[5];
int soma = 0;

int main()
{
    printf("Digite os 5 numeros do 1° vetor\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &vet1[i]);
    }
    printf("Digite os 5 numeros do 2° vetor\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &vet2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        vetSoma[i] = vet1[i] + vet2[i];
        printf("%i ", vetSoma[i]);
    }
    return 0;
}