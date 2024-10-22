/*
1) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float coordenadaX;
    float coordenadaY;
} Coordenadas;

int main()
{
    Coordenadas coordenada[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite a coordenada X do ponto %i: ", i);
        scanf("%f", &coordenada[i].coordenadaX);
        printf("Digite a coordenada Y do ponto %i: ", i);
        scanf("%f", &coordenada[i].coordenadaY);
    }
    float aux = (coordenada[0].coordenadaX - coordenada[1].coordenadaX) + (coordenada[0].coordenadaY - coordenada[1].coordenadaY);
    if (aux < 0)
    {
        aux = (coordenada[1].coordenadaX - coordenada[0].coordenadaX) + (coordenada[1].coordenadaY - coordenada[0].coordenadaY);
    }
    float distancia = sqrt(aux);
    printf("A distancia entre esses dois pontos é de: %.2f\n", distancia);

    return 0;
} // main

// gcc ex.c -o ex -lm