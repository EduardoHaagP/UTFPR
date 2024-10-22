/*
2) Declare duas variáveis inteiras A e B e atribua valores
diferentes. Em seguida, efetue a troca dos valores de forma
que, a variável A passe a possuir o valor da variável B, e que a
variável B passe a possuir o valor da variável A. Apresente os
valores iniciais e finais de A e B.
*/
#include <stdio.h>
#include <stdlib.h>
    int a;  
    int b;

int main(){  
    a = 0b100101;
//0x2A hex 076 octal 0b100101 binario
    b = 10;

    printf("Hello World\n");
    printf("A: %i \n",a);
    printf("B: %i \n",b);

    a ^= b;
    b ^= a;
    a ^= b;
    
    printf("A: %i \n",a);
    printf("B: %i \n",b);
    return 0;
}