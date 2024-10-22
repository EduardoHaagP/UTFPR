/*2) Reescreva o exercício anterior utilizando a estrutura horário (contendo hora, minuto e segundo) e passando a estrutura por 
referência. Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hor) 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hora;
    int min;
    int seg;
}Horario;


void converteHorario(int total_segundos, Horario* hor){
    hor->seg = total_segundos % 60; 
    hor->min = total_segundos/60;
    hor->hora = hor->min/60;
    hor->min = hor->min%60;


} 

int main(){
    Horario hor;
    int receberSegundos;
    printf("Digite uma quantitade de segundas ára serem convertidas: ");
    scanf("%i",&receberSegundos);
    converteHorario(receberSegundos, &hor);
    printf("%02i:%02i:%02i\n",hor.hora, hor.min, hor.seg);

}
