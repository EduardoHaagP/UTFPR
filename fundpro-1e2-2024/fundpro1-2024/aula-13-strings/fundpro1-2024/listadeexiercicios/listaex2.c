/*
2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano, através da seguinte fórmula:

d=√(x2−x1)^2+(y2−y1)^2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double coordenadaX1;
double coordenadaY1;
double coordenadaX2;
double coordenadaY2;
double distanciaEntreOsDoisPontos;

int main(){
    printf("digite as coordenadas do primeiro ponto (siga o padrao (x1,y1) )\n");
        scanf("(%lf,%lf)",&coordenadaX1,&coordenadaY1);  

    setbuf(stdin,NULL);

    printf("digite as coordenadas do segundo ponto (siga o padrao (x2,y2) )\n");
        scanf("(%lf,%lf)",&coordenadaX2,&coordenadaY2);

    distanciaEntreOsDoisPontos= sqrt(pow((coordenadaX2-coordenadaX1),2)+pow((coordenadaY2-coordenadaY1),2));

    printf("A distancia entre os dois pontos e: %.2lf",distanciaEntreOsDoisPontos);

    return 0;
}