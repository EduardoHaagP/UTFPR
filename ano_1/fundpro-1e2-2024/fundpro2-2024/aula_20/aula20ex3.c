/*
3) Escreva uma função que receba como parâmetro dois vetores via referência( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
*/

#include <stdio.h>
#include <stdlib.h>

void change(int A[], int B[], int n, int **c){
    *c = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        (*c)[i] = A[i] * B[i];
    }
    
    return;
}


int main()
{
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%i", &n);
    int A[n];
    int B[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = i;
        B[i] = i;
    }
    int *c;
    change(A,B,n,&c);
    for (int i = 0; i < n; i++)
    {
        printf("%i\n",c[i]);
    }
    
    free(c);
    return 0;
}