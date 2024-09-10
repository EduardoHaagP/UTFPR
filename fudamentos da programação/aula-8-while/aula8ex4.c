/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variaveis
int numero = 240;
int resto;

int main(){
    while (numero<= 730){
        resto = numero%2;//conta para mostrar os numeros pares 
        if(resto == 0){
            printf("%i\n",numero);
        }//if
        numero++;
    }//while
    return 0;
}//main