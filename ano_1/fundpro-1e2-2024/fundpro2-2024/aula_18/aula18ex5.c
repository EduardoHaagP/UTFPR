/*
5) Um problema típico em ciência da computação consiste em
converter um número da sua forma decimal para binária. Crie um
algoritmo recursivo para resolver esse problema.
 Solução trivial: x=0 quando o número inteiro já foi convertido para
binário
 Passo da recursão: saber como x/2 é convertido. Depois, imprimir um
dígito (0 ou 1) dado o sucesso da divisão.
*/
#include <stdio.h>
#include <stdlib.h>




#include <stdio.h>

void decimalParaBinario(int x) {
    if (x > 0) {
        decimalParaBinario(x / 2);  // Passo da recursão
        printf("%d", x % 2);        // Imprime o dígito (0 ou 1)
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("0"); 
    } else {
        decimalParaBinario(numero);
    }

    printf("\n");

    return 0;
}
