/*
3) Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[5][26];
long int telefone[5];
int x;

int main()
{
    printf("Hello World!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome %i: ", i);
        fgets(nome[i], 26, stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        setbuf(stdin, NULL);
        printf("Agora digite o telefone dessa mesma pessoa: \n");
        scanf("%li", &telefone[i]);
        setbuf(stdin, NULL);
    } // for
    do
    {
        printf("Digite a posição do contato desejado\n");
        scanf("%i", &x);
        if (x < 0 || x > 5)
        {
            printf("contato digitado não definido\n");
        }
        else
        {
            printf("%i - %s de numero %li\n", x, nome[x], telefone[x]);
        }
    } while (x != -1); // do while
    return 0;
} // main
