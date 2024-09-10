/*4) Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução
*/

//de 0,00 até 1.903,98 isento 0,00
//de 1.903,99 até 2.826,65 0,075 142,80
//de 2.826,66 até 3.751,05 0,15 354,80
//de 3.751,06 até 4.664,68 0,225 636,13
//a partir de 4.664,68 0,275 869,36
#include <stdio.h>
#include <stdlib.h>
float salario, imposto;

int main(){
printf("Digite seu salario (Use ponto como indicador da casa decimal)");
scanf("%f",&salario);
if (salario<=1903.98)
{
    imposto = 0;
}else if (salario<=2826.65)
{
    imposto = salario*0.075;
}else if (salario<=3751.05)
{
    imposto = salario*0.15;
}else if (salario<=4664.68)
{
    imposto = salario*0.225;
}else{
    imposto = salario*0.275;
}
printf("O valor a ser pago em imposto por mes e: %.2f",imposto);
return 0; 
}