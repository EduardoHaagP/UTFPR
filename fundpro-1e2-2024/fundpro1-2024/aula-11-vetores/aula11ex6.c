/*6) Faça um programa que receba e armazene 20 números em
um vetor. Em seguida exiba:
 Quantos números são iguais a 30;
 Quantos números são maior que a média;
 Quantos números são iguais à media;*/
#include <stdio.h>
#include <stdlib.h>

int vet1[20];
int contador1 = 0;
int soma = 0;
int media = 0;
int contador2 = 0;
int contador3 = 0;

int main()
{
    printf("Digite 20 numeros\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%i",&vet1[i]);
        soma += vet1[i]; // Soma todos os elementos do vetor
    }
    media = soma / 20; // Calcula a média

    for (int i = 0; i < 20; i++)
    {
        if (vet1[i] == 30)
        {
            contador1++;
        }
        if (vet1[i] > media)
        {
            contador2++;
        }
        if (vet1[i] == media)
        {
            contador3++;
        }
    }

    printf("%i numeros digitados sao iguais a 30\n", contador1);
    printf("%i numeros digitados sao maiores que a media\n", contador2);
    printf("%i numeros digitados sao iguais a media\n", contador3);
    return 0;
}
