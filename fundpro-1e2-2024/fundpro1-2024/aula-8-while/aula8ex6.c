/*6) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero.*/
//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variaveis
double numero = 1;
double o_quadrado_do_numero;

int main(){
    while (numero >0){
        printf("digite um numero\n");
            scanf("%lf",&numero);
        o_quadrado_do_numero = pow(numero,2);
        printf("O quadrado desse numero e:%lf\n",o_quadrado_do_numero);
    }//while
    return 0;
}//main