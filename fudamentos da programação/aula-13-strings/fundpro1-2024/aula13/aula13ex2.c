/*
2)  Faça um programa que armazene o nome e salário de 5
empregados.  Em  seguida  calcule  um  aumento  de  8%  nos
salários e exiba a nova folha de pagamentos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float salario[5];
char nome[5][26];

int main()
{
    printf("Hello World!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do empragado %i: ", i + 1);
        fgets(nome[i], 26, stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        setbuf(stdin, NULL);
        printf("Agora digite o salario desse mesmo funcionario: ");
        scanf("%f", &salario[i]);
        setbuf(stdin, NULL);
    }//for
    for (int i = 0; i < 5; i++)
    {
        salario[i] = 1.08 * salario[i];
    }//for
    for (int i = 0; i < 5; i++)
    {
        printf("Nome %i: %s Salario: %.2f\n", i + 1, nome[i], salario[i]);
    }//for
    return 0;
}//main