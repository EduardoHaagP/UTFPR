/*2) Faça um programa que receba um número e determine se ele é um número par ou ímpar.  Obs.: Utilize o operador % que retorna o resto da divisão)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;
int resto;

int main(){
    setlocale(LC_ALL, "");//texto do SO
    printf("Digite um número\n");
    scanf("%i",&numero);
    resto = numero%2;
    if(resto == 1){
        printf("esse numero é impar\n");
    }//fim if
    else{
        printf("esse numero é par\n");
    }//fim else
    return 0;
}