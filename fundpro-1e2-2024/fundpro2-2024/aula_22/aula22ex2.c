/*
2) Elabore um programa que leia um arquivo binário contendo
100 números. Mostre na tela a soma desses números.
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int vetNumAlt[100];
    int soma;
    FILE *arq = fopen("arquivo.dat","rb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    fread(vetNumAlt,sizeof(float),100,arq);
    for (int i = 0; i < 100; i++)
    {
        soma = soma+vetNumAlt[i];
    }
    printf("%i\n",soma);
    fclose(arq);
    return 0;
    return 0;
}