/*
1)Faça um algoritmo que exiba todos números de 1 a 100.
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variavel
int numero = 1;

int main(){
    while (numero <= 100){
        printf("%i\n",numero);
        numero++;
    }//while    
    return 0;
}//main