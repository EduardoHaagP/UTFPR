/*
5) Elabora uma função que receba duas strings como parâmetros e
verifique se a segunda string está dentro da primeira. Para isso, utilize
apenas aritmética de ponteiros
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int acharbatata(char frase1[], char frase2[])
{
    char *letrafrase1 = frase1;
    char *letrafrase2 = frase2;
    int size1 = strlen(frase1);
    int size2 = strlen(frase2);
    int contador = 0;

    for (int i = 0; i < size1; i++)
    {
        if (*(letrafrase1 + i) == *letrafrase2)
        {
            for (int j = 0; j < size2; j++)
            {
                if (*(letrafrase1 + i + j) == *(letrafrase2 + j))
                {
                    contador++;
                }
                else
                {
                    contador = 0;
                    j = size2;
                }
            }
        }
    }

    if (contador == size2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char frase1[50];
    char frase2[50];

    printf("Digite a primeira frase: ");
    fgets(frase1, 49, stdin);
    frase1[strcspn(frase1, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite a segunda frase: ");
    fgets(frase2, 49, stdin);
    frase2[strcspn(frase2, "\n")] = '\0';
    setbuf(stdin, NULL);

    int simOUnao = acharbatata(frase1, frase2);

    if (simOUnao == 1)
    {
        printf("A frase 2 esta dentro da frase 1\n");
    }
    else
    {
        printf("A frase 2 nao esta dentro da frase 1\n");
    }

    return 0;
}