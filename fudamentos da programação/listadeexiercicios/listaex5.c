/*5) Faça um programa que receba 2 números referentes ao numerador e denominador de uma fração e informe se é uma fração própria, imprópria, ou aparente*/

// impropria de cima maior que o de baixo
//propria de cima menor que o de baixo
//aparente de cima multiplo do de baixo

#include <stdio.h>
#include <stdlib.h>

int numerador, denominador,resto;

int main(){
    printf("Digite uma fração\nSiga o propria numerador/denominador\n");
    scanf("%i/%i",&numerador,&denominador);
    resto = numerador % denominador;
    if(resto == 0){
        printf("essa fração é aparente");
    }else{
        printf("essa fração não é aparente");
    }
    if(numerador > denominador){
        printf(" e é impropria\n");
    }else{
        printf(" e é propria\n");
    }
    return 0;
}