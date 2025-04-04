/*3) Faça um programa com 2 variáveis, A e B, onde A terá
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
AxB e A/B. Em seguida, faça B incrementar de uma
unidade e repita as 4 operações.*/

#include <stdio.h>
#include <stdlib.h>

    int a = 40;  
    int b = -1;
    int aux = 0;

int main(){  
    printf("Hello World\n");
    aux = a + b;
    printf("A + B = %i\n", aux);
    aux = a - b;
    printf("A - B = %i\n", aux);
    aux = a * b;
    printf("A x B = %i\n",aux);
    aux = a / b;
    printf("A / B = %i\n",aux);
    b = b +1;
    printf("B = %i\n",b);
    aux = a + b;
    printf("A + B = %i\n", aux);
    aux = a - b;
    printf("A - B = %i\n", aux);
    aux = a * b;
    printf("A x B = %i\n",aux);
    aux = a / b;
    printf("A / B = %i\n",aux);
    return 0;
}