/*
3) Faça um programa que tenha como entrada: o número de horas, minutos e segundos atuais, informe quantos segundos faltam para chegar terminar o dia.
*/

#include <stdlib.h>
#include <stdio.h>

int horas;
int minutos;
int segundos;
int horasRestantes;
int minutosRestantes;
int segundosRestantes;


int main(){
    printf("Digite que horas são:\nSiga o padrao HH:MM:SS\nSendo HH para horas, MM para minutos e SS para segundos\n");
       scanf("%02i:%02i:%02i",&horas,&minutos,&segundos);
    
    while (horas > 24 || minutos > 60 || segundos > 60){
        printf("Os numeros digitados são invalidos\n");
        printf("Redigite que horas são:\n Siga o padrao HH:MM:SS\n sendo HH para horas, MM para minutos e SS para segundos\n");
            scanf("%02i:%02i:%02i",&horas,&minutos,&segundos);
    }   
        horasRestantes= 24 - horas;
        minutosRestantes= 60 - minutos;
        segundosRestantes= 60 - segundos;
        printf("Faltam %i:%i:%i para acabar o dia\n",horasRestantes,minutosRestantes,segundosRestantes);
        return 0;
}
