#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //formata a linguagem
int dia, mes, ano;


int main(){
    setlocale(LC_ALL, "");//texto do SO
    printf("Digite uma é data(dd/mm/aaaa)");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    printf("%02d/%02d/%04d\n",dia,mes,ano);
    return 0; 
}