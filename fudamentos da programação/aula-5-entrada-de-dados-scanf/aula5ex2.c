/*2) Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//contante
#define Ano 2024

//variaveis
    int anoAniversario;
    int idade;

//funçao principal
int main(){
//pedir o ano de nascimento
    printf("Digite o ano que nasceu");
//ler o ano de nascimento
    scanf("%i",&anoAniversario); 
//calculo da idade
    idade = Ano - anoAniversario;
//falar a idade
    printf("Sua idade é:%i",idade);
    return 0;
}
