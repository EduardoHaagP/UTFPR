/*2) Uma conta de caderneta de poupança foi aberta com um
depósito de R$ 500,00. Imagine que esta conta é remunerada
em 1% de juros ao mês. Qual será o valor da conta após três
meses? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float deposito = 500;
float juros = 0;
float montante = 0; 
// M= C*(1+0.01)^t
int main(){
    printf("Hello World\n");
    juros = pow(1.01,3);
    printf("%f\n",juros);
    montante = deposito*juros;
    printf("o montante foi de R$ %.2f\n",montante);
    return 0;
}