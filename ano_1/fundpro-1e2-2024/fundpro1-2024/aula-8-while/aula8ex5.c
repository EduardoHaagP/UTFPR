/*5) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variaveis
double numero;
int contador = 1;
double o_quadrado_do_numero;


int main(){
    while (contador<=10){
        printf("digite um numero\n");
            scanf("%lf",&numero);
        o_quadrado_do_numero = pow(numero,2);
        printf("O quadrado desse numero e:%lf\n",o_quadrado_do_numero);
        contador++;
    }//while
    return 0;
}//main