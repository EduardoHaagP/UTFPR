/*1) Faça um programa que receba a altura de uma pessoa e
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variaveis
    float pesoIdeal;
    float altura;
    float a = 72.7;
    float b = -58;

//funçao principal
int main(){
    printf("Hello World");
//pedir a altura
    printf("Digite a sua altura em metros:"); 
//ler a altura
    scanf("%f",&altura);
//calculo do peso ideal
    pesoIdeal = a*altura+b;
//falar o peso ideal
    printf("Seu peso ideal é: %.2f kg",pesoIdeal);
    return 0;
}
