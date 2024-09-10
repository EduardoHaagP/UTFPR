/*3) Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//constante
#define Salario 1200

//variaveis
    float totalVendas;
    float comissão;
    float salarioTotal;

//funçao principal
int main(){
//pedir o montante vendido
    printf("Quantos reais você vendeu?");
//ler o montante vendido e associar a uma variavel
    scanf("%f",&totalVendas); 
//calcular comissão
    comissão = 0.1 * totalVendas;
//calcular salario total
    salarioTotal = Salario + comissão;
//falar o salario
    printf("Esse mês voce recebeu R$%.2f\n",salarioTotal);
    return 0;
}