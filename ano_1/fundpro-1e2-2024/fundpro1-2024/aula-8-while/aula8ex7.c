/*
7) Faça um programa que calcule o fatorial de um número a ser
digitado.
*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variaveis
int numero, aux;
int fatorial = 1;

int main(){
    printf("digite um numero\n");
        scanf("%i",&numero);
    aux = numero;
        while (aux >=1)
        {fatorial *= aux;
            if(aux == 1){
                printf("O fatorial desse numero e:%i\n",fatorial);
            }//if
        aux--;
        }//while
    return 0;
}//main

