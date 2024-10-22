#include <stdio.h>
#include <stdlib.h>

/*void incrementa(int numero){
    printf("%d\n",numero);
    numero++;
    printf("%d\n",numero);
    
    return;
}
void incrementaPorReferencia(int *numero){
    printf("%d\n",*numero);
    (*numero)++;
    printf("%d\n",*numero);
    
    return;
}*/

void divisao(int dividendo, int divisor, int* quociente, int* resto){
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
    return;
}

int main(){
    int numero = 15;
    
    //int *ponteiro = &numero;
    //incrementaPorReferencia(ponteiro);

    // incrementa(numero);
    // incrementaPorReferencia(&numero);
    // printf("%d\n",numero);
    int quocienteMain;
    int restoMain;
    
    divisao(13, 15, &quocienteMain, &restoMain);
    
    return 0;
}