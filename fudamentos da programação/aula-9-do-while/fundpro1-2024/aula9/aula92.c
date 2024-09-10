#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i=100;
int a2;
int a3;

int main(){
    while (i != -1){
        usleep(1000);
             printf("valor de i:%i\n",i);
             i--;
             if(i == 5){
                break;
             }
    }//while
    printf("Acabou\n");
    return 0;
}//main