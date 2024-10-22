/*2) Faça um programa que receba valores enquanto eles estiverem no
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
programa deverá parar de solicitar valores, exibir quantos valores
válidos foram digitados e finalizar.*/
#include <stdio.h>
#include <stdlib.h>

int numero;
int contador = -1;

int main(){
    do{
        printf("Digite um numero entre 500 e 1000\n");
            scanf("%i",&numero);
        contador++;
    }while(numero >= 500 && numero<=1000);
        if(contador == 0){
            printf("nenhum numero entre 500 e 1000 foi digitado\n");
        }else{
            printf("%i numeros entre 500 e 1000 foram digitados\n",contador);
        }
    return 0;
}