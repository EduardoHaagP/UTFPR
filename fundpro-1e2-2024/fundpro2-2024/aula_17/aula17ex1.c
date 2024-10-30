/*
1) Escreva um programa que receba um número inteiro
representando a quantidade total de segundos e, usando
passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e
Segundos. Imprima o resultado da conversão no formato
HH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)
*/
#include <stdio.h>
#include <stdlib.h>


void converteHora(int total_segundos, int* hora, int* min, int* seg)
{
    (*seg) = total_segundos % 60; 
    (*min) = total_segundos/60;
    (*hora) = (*min)/60;
    (*min) = (*min)%60;
    return;



}//converteHora

int main()
{
    int receberSegundos, hora, min, seg;
    printf("Digite uma quantitade de segundas ára serem convertidas: ");
    scanf("%i",&receberSegundos);
    converteHora(receberSegundos, &hora, &min, &seg);
    printf("%02i:%02i:%02i\n",hora, min, seg);

    return 0;
}//main
