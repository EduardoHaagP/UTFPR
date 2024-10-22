/*3) Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int vetorIdade[10];

int main(){
    printf("Digite as 10 idades\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i",&vetorIdade[i]);
    }
    printf("essas idades sao superiores a 35 anos\n");
    for (int i = 0; i < 10; i++)
    {
        if (vetorIdade[i]>35)
        {
            printf("%i\n",vetorIdade[i]);
        }
    }
    return 0;
}
