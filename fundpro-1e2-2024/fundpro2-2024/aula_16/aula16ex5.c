/*
5) Crie uma função que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse número.*/
#include <stdio.h>
#include <stdlib.h>

double fatorial(int n)
{
    double resultado = 1; // Usando unsigned long long para suportar valores grandes

    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    } // for

    return resultado;
} // fatorial

int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%i", &n);
    double resultado = fatorial(n);
    printf("o fatoria de %i e:\n%.lf", n, resultado);
} // main