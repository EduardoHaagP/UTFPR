#include <stdio.h>
#include <stdlib.h>

    int a = 10;
    int b = 3;
    float divisaoReal = 0;

    int main(){
    divisaoReal = (float) a/b;
    printf("divisão real é %f\n", divisaoReal);
    int contador = 0;
    printf("%i\n",contador);
    contador = contador + 1;
    contador++;//linha 13 = 14
    contador = contador - 1;
    contador--;//linha 15 = 16
    printf("contador= %i\n",contador);
    int saida;
    saida= ++contador;
    printf("saida= %i\n",saida);
    printf("contador= %i\n",contador);
    saida= contador++;
    printf("saida= %i\n",saida);
    printf("contador= %i\n",contador);
    contador = contador + 5;
    contador +=5 ;//linha 25 = 26
    printf("contador= %i\n",contador);
    contador = contador - 5;
    contador -=5 ;//linha 25 = 26
    return 0;
    }