#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i=10;
int a2;
int a3;

int main(){
    while (i != -1){
        usleep(1000000);
             printf("valor de i:%i\n",i);
             i--;
    }//while
    printf("Acabou\n");
    return 0;
}//main