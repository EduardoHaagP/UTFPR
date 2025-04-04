/*1) Faça um programa que receba como entrada a nota de um aluno. O programa deve exibir “aprovado” caso a nota seja igual ou superior a 6, ou exibir “reprovado” caso contrário.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int nota_aluno;

int main(){
    setlocale(LC_ALL, "");//texto do SO
    printf("qual foi sua nota?\n");
    scanf("%i",&nota_aluno);
    if(nota_aluno>=6){
        printf("aprovado\n");
    }
    else{
        printf("reprovado\n");
    }
    return 0;
}