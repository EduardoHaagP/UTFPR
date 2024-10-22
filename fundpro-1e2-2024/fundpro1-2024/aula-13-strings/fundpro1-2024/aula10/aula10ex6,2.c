#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int contador;
double numero, potencia;

int main()
{
    for (contador = 1; contador < 11; contador++)
    {
        printf("Digite um numero\n");
        scanf("%lf", &numero);
        potencia = numero*numero;
        printf("A potencia do numeor digitado é: %.2lf\n", potencia);
    }
    return 0;
}