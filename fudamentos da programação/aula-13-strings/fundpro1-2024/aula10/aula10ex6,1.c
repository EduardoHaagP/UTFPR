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
        potencia = pow(numero, 2);
        printf("A potencia do numeor digitado é: %lf\n", potencia);
    }
    return 0;
}