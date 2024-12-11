/*
1) Faça um programa que gere 100 números aleatórios. Esse
programa deverá, em seguida,armazenar esses números em um
arquivo binário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int vetNumAlt[100];
    FILE *arq = fopen("arquivo.dat","wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    for (int i = 0; i < 100; i++)
    {
        vetNumAlt[i] = rand();
    }
    fwrite(vetNumAlt,sizeof(int),100,arq);
    fclose(arq);
    return 0;
}
