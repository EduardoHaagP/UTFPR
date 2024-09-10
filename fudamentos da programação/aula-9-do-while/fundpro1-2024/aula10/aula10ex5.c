#include <stdio.h>
#include <stdlib.h>

int numero, fatorial;

int main(){
    printf("Digite um numero\n");
    scanf("%i",&numero);
    for (fatorial = 1;numero > 1; numero--)
    {
        fatorial = fatorial*numero;
    }
    printf("O fatorial do numero digitado e:%i\n",fatorial);
    return 0;
}