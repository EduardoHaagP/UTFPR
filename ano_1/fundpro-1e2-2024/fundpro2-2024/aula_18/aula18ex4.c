/*
4) Faça uma função recursiva que retorne o n-ésimo termo da sequência de
Fibonacci, sendo que n é recebido por parâmetro. Utilize essa função para
desenvolver um programa que mostre no main() os n termos dessa
sequência na tela, a partir do valor de n recebido pelo teclado. Sabe-se que
o 1º termo é 0 e o 2º termo é 1.
*/

#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0; // 1º termo
    } else if (n == 2) {
        return 1; // 2º termo
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Soma dos dois termos anteriores
    }
}

int main() {
    int n;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número positivo.\n");
        return 1;
    }

    printf("Os primeiros %d termos da sequência de Fibonacci são:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
