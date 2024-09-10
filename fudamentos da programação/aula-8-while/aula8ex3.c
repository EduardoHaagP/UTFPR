/*
3) Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variaveis
int numero = 1;
int resto;

int main(){
    while (numero<= 322){
        resto = numero%3; //conta para exibir os numeros multiplos de 3
        if(resto == 0){
            printf("%i\n",numero);
        }
        numero++;
    }//while
    
    return 0;
}//main