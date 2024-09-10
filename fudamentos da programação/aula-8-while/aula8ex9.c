/*9) Faça um programa que simule um jogo, onde o usuário
deverá descobrir um número aleatório escolhido pelo
computador (de 1 a 100).
 O usuário poderá realizar até 6 tentativas, o programa deverá
retornar as mensagens “muito alto”, “muito baixo” até o usuário
acertar o número ou esgotar o número máximo de tentativas*/
//Pesquise sobre como gerar um numero aleatório utilizando a função rand da biblioteca stdlib.h

#include <stdio.h>
#include <stdlib.h>

int numero_aleatorio;
int numero;

int main(){
    numero_aleatorio = rand()%100;
    while (numero != numero_aleatorio){
        printf("escolha um numero\n");
            scanf("%i",&numero);
    }
    return 0;
}