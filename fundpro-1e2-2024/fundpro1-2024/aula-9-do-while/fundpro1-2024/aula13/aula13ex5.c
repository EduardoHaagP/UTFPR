/*
5) Faça um programa que receba uma frase e depois exiba quantas vezes
cada vogal aparece. Ele deve contar considerando o tamanho da String
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char frase[101];
int a = 0, e = 0, i = 0, o = 0, u = 0;

int main()
{
    printf("Digite uma frase\n");
    fgets(frase, 101, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    setbuf(stdin, NULL);
    for (int x = 0; x < 101; x++)
    {
        if (frase[x] == 'a'||frase[x] == 'A')
        {
            a++;
        }else if ( frase[x] == 'e'||frase[x] == 'E')
        {
            e++;
        }else if ( frase[x] == 'i'||frase[x] == 'I')
        {
            i++;
        }else if ( frase[x] == 'o'||frase[x] == 'O')
        {
            o++;
        }else if ( frase[x] == 'u'||frase[x] == 'U')
        {
            u++;
        }
    }
    printf("Apareceram\nA:%i\nE:%i\nI:%i\nO:%i\nU:%i\n",a,e,i,o,u);
    return 0;
}