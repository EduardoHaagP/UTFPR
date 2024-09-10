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