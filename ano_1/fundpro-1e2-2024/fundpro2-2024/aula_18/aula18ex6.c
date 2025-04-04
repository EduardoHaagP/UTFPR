/*
6) Considere a funcaox abaixo. O que essa função faz? Escreva
uma função não-recursiva que resolve o mesmo problema

int funcaox(int a){
 if(a <= 0) return 0;
 else return a + funcaox(a-1);
}//funcaox

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0, soma = 0;
    printf("Digite um numero: ");
    scanf("%i",&n);

    if (n <= 0)
    {
        printf("O numero digitado é menor ou igual a 1\n");
    }else{
        for (int i = n; i > 0 ; i--)
        {
            soma += i;
        }   
        printf("A soma dos numeros interos entre %i e 1 é: %i\n",n,soma);
    }
    return 0;
}