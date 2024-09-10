/*
2) Faça um algoritmo que exiba todos números de 100 a 1
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variaveis
int numero = 100;

int main(){
    while (numero >= 1){
        printf("%i\n",numero);
        numero--;
    }//while    
    return 0;
}//main