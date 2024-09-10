/* 1) Escreva um programa para determinar a quantidade de litros
de combustível gastos em uma viagem por um automóvel que
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
é de 35 min e a velocidade média do automóvel é 80 km/h. */

#include <stdio.h>
#include <stdlib.h>

float kmPorlitro = 12;
float minutos = 35;
float velocidadeMedia = 80;
float horas = 0;
float litrosGastos = 0;

int main(){
    printf("Hello World\n");
    horas = minutos/60;
    litrosGastos = (velocidadeMedia * horas)/kmPorlitro;
    printf("O carro utilizou %.2f litros\n",litrosGastos);
    return 0;
}