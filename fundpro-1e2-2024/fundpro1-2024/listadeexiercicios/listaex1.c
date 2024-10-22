/*
1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo, faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre:
a) O valor em reais de cada quilowatt;
b) O valor em reais a ser pago pelos quilowatts gasto;
c) O novo valor a ser pago por essa residência com um desconto de 12%;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float SalarioMinimo;
float ValorQuiloWatt;
float ValorAPagar;
float QuiloWattGastos;
float ValorAPagarComDesconto;

int main(){
     setlocale(LC_ALL, "");//texto do SO
    printf("Qual é o valor de um salario minimo?\n");
        scanf("%f",&SalarioMinimo);
    
    printf("Quantos QuiloWatts você gastou?\n");
        scanf("%f",&QuiloWattGastos);
    
    ValorQuiloWatt = (SalarioMinimo*0.25)/200;
    
    printf("O valor do QuiloWatt é: %.2f\n",ValorQuiloWatt);

    ValorAPagar = QuiloWattGastos*ValorQuiloWatt;

    printf("O valor a ser pago (sem desconto)é: %.2f\n",ValorAPagar);
    
    ValorAPagarComDesconto = ValorAPagar*0.88;

    printf("O valor a ser pago (com desconto)é: %.2f\n",ValorAPagarComDesconto);
    
    return 0;
}