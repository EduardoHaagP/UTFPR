#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int** matriz = (int**) malloc(4 * sizeof(int*));
    for (int i = 0; i < 4; i++)
    {
        matriz[i] = (int*) malloc(6 * sizeof(int));
    }
    for (int c = 0; c < 4; c++)
    {
        for (int l = 0; l < 6; l++)
        {
            matriz[c][l] = c*l;
            printf("%3i",matriz[c][l]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    
    
    
    //int* vetor = (int*) malloc(100* sizeof(int));
    /*
    int* vetor = (int*) calloc(10, sizeof(int));
    if (vetor == NULL)
    {
        perror("Erro ao alocar memoria\n");
        exit(1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n",vetor[i]);
    }
    vetor = (int*) realloc(vetor, 50*sizeof(int));
    
    for (int i = 0; i < 50; i++)
    {
        vetor[i] = i;
    }
    for (int i = 0; i < 50; i++)
    {
        printf("%i\n",vetor[i]);
    }
    
    free(vetor);
    printf("%i\n",vetor[1]);
    */
    return 0;

}