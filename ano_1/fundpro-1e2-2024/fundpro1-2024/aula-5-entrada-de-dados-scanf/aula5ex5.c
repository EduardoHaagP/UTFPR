/*5) Sabendo que a função sqrt(valor), que está na biblioteca math.h retorna a raiz quadrada do valor, calcule a raiz quadrada de um número que o usuário digitar.*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variaveis
double numero1;
double raizdonumero1;

//função principal
int main(){
//pedir e associar valor a uma cariavel
    printf("Digite um numero:\n");
    scanf("%lf",&numero1);
//calculo da raiz do numero
    raizdonumero1 = sqrt(numero1);
//exibir a raiz do numero
    printf("A raiz do numero digitado é:%lf\n",raizdonumero1);
    return 0;
}