#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i=10;
int a2;
int a3;

int main(){
    while (i != 0){
        usleep(1000);
             i--;
             if(i == 5){
                continue;
             }
             printf("valor de i:%i\n",i);
    }//while
    printf("Acabou\n");
    return 0;
}//main