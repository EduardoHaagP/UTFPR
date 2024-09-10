//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Biblioteca necessaria para numero secreto mudar

//variaveis
int tentativa;
int numero_tentativas;
int numero_secreto;

int main() {
    srand(time(0)); // semente para a função rand()
    numero_secreto = rand() % 100 + 1; // gera um número aleatório entre 1 e 100

    printf("Bem-vindo ao jogo!\n Tente adivinhar o numero que estou pensando (entre 1 e 100).\n");

    while(numero_tentativas < 6) {
        printf("Digite sua tentativa: ");
            scanf("%d", &tentativa);

        if(tentativa == numero_secreto) {
            printf("Parabens! Você acertou o número!\n");
        }//if 
        else if(tentativa < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        }//else if 
        else {
            printf("Muito alto! Tente novamente.\n");
        }//else
        numero_tentativas++;
    }//while

    printf("Voce esgotou suas tentativas. O numero era %d.\n", numero_secreto);
    return 0;    
}//main

