/*1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.*/
#include <stdio.h>
#include <stdlib.h>

// variaveis
int nota1Aluno1, nota2Aluno1;                                                            // aluno1
int nota1Aluno2, nota2Aluno2;                                                            // aluno2
int nota1Aluno3, nota2Aluno3;                                                            // aluno3
int nota1Aluno4, nota2Aluno4;                                                            // aluno4
int nota1Aluno5, nota2Aluno5;                                                            // aluno5
float mediaTodosAlunos, mediaAluno1, mediaAluno2, mediaAluno3, mediaAluno4, mediaAluno5; // todos

int main()
{
    // aluno 1
    do
    {
        printf("Digite as notas do primeiro aluno\n Siga o padrao N1 N2\n");
        scanf("%i %i", &nota1Aluno1, &nota2Aluno1);
    } while (nota1Aluno1 < 0 || nota1Aluno1 > 10 || nota2Aluno1 < 0 || nota2Aluno1 > 10);
    mediaAluno1 = (float)(nota1Aluno1 + nota2Aluno1) / 2;
    printf("A media do primeiro aluno é:%.2f\n", mediaAluno1);
    // aluno 22
    do
    {
        printf("Digite as notas do segundo aluno\n Siga o padrao N1 N2\n");
        scanf("%i %i", &nota1Aluno2, &nota2Aluno2);
    } while (nota1Aluno2 < 0 || nota1Aluno2 > 10 || nota2Aluno2 < 0 || nota2Aluno2 > 10);
    mediaAluno2 = (float)(nota1Aluno2 + nota2Aluno2) / 2;
    printf("A media do segundo aluno é:%.2f\n", mediaAluno2);
    // aluno 3
    do
    {
        printf("Digite as notas do terceiro aluno\n Siga o padrao N1 N2\n");
        scanf("%i %i", &nota1Aluno3, &nota2Aluno3);
    } while (nota1Aluno3 < 0 || nota1Aluno3 > 10 || nota2Aluno3 < 0 || nota2Aluno3 > 10);
    mediaAluno3 = (float)(nota1Aluno3 + nota2Aluno3) / 2;
    printf("A media do terceiro aluno é:%.2f\n", mediaAluno3);
    // aluno 4
    do
    {
        printf("Digite as notas do quarto aluno\n Siga o padrao N1 N2\n");
        scanf("%i %i", &nota1Aluno4, &nota2Aluno4);
    } while (nota1Aluno4 < 0 || nota1Aluno4 > 10 || nota2Aluno4 < 0 || nota2Aluno4 > 10);
    mediaAluno4 = (float)(nota1Aluno4 + nota2Aluno4) / 2;
    printf("A media do quarto aluno é:%.2f\n", mediaAluno4);
    // aluno 5
    do
    {
        printf("Digite as notas do quinto aluno\n Siga o padrao N1 N2\n");
        scanf("%i %i", &nota1Aluno5, &nota2Aluno5);
    } while (nota1Aluno5 < 0 || nota1Aluno5 > 10 || nota2Aluno5 < 0 || nota2Aluno5 > 10);
    mediaAluno5 = (float)(nota1Aluno5 + nota2Aluno5) / 2;
    printf("A media do quinto aluno é:%.2f\n", mediaAluno5);
    // todos os alunos
    mediaTodosAlunos = (mediaAluno1 + mediaAluno2 + mediaAluno3 + mediaAluno4 + mediaAluno5) / 5;
    printf("A media dos 5 alunos e:%.2f\n", mediaTodosAlunos);
    return 0;
}
