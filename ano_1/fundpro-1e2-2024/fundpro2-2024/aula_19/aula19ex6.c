/*
6) Considere a seguinte declaração:
 int a, *b, **c, ***d;
 Escreva um programa que receba o valor de a, calcule e exiba:
 O dobro do valor a, utilizando o ponteiro b
 O triplo do valor a, utilizando o ponteiro c
 O quadruplo do valor a, utilizando o ponteiro d
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *b = &a, **c = &b, ***d = &c;
    printf("digite o valor de A: ");
    scanf("%i",&a);
    printf("O dobro de A é: %i\n",(*b)*2);
    printf("O triplo de A é: %i\n",(**c)*3);
    printf("O quadruplo de A é: %i\n",(***d)*4);
    
    return 0;
}