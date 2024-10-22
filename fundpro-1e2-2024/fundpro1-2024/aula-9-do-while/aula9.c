#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int nota;

int main(){
    do{
        printf ("Digite sua nota");
        scanf("%i",&nota);
        }while (nota >= 0 && nota <= 10);
        //while
    return 0;
}//main