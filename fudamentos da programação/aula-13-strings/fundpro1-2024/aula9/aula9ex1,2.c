/*1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.*/
#include <stdio.h>
#include <stdlib.h>

// variaveis
int nota1, nota2, contador;    // aluno1
float mediaTodosAlunos, media; // todos

int main()
{
    contador = 1;
    do
    {
        do
        {
            printf("Digite as notas do aluno %i\n Siga o padrao N1 N2\n", contador);
            scanf("%d %d", &nota1, &nota2);
            if (contador == 1 && (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10))
            {
                media = (float)(nota1 + nota2)/ 2;
                mediaTodosAlunos = media;
                printf("media aluno%i:%.2f\n",contador, media);
                contador++;
            }
            else if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
            {
                media = (float)(nota1 + nota2)/ 2;
                mediaTodosAlunos = (float)(mediaTodosAlunos + media) / 2;
                printf("media aluno%i:%.2f\n", contador, media);
                contador++;
            }else
            continue;
        } while (nota1 < 0 || nota2 > 10 || nota1 < 0 || nota2 > 10);
    } while (contador <= 5);
    printf("Media dos 5 alunos : %.2f\n", mediaTodosAlunos);

    return 0;
}