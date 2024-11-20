#include <stdio.h>

unsigned long long int fatorial(int n) {
    unsigned long long int resultado = 1; // Usando unsigned long long para suportar valores grandes

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não está definido para números negativos.\n");
    } else {
        unsigned long long int resultado = fatorial(numero);
        printf("O fatorial de %d é %llu.\n", numero, resultado);
    }

    return 0;
}
