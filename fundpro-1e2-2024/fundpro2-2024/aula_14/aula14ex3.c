/*
3) Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.media ≥ 7 → Aprovado;
3 ≤ media < 7 → Exame;
media < 3 → Reprovado;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[21];
    char curso[41];
    float notas[4];
    float media;
    char situacao[10];
} Alunos;

int main()
{
    Alunos aluno1;
    printf("Digite seu nome: ");
    fgets(aluno1.nome, 20, stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';
    setbuf(stdin, NULL);
    printf("Digite o nome do seu curso: ");
    fgets(aluno1.curso, 40, stdin);
    aluno1.curso[strcspn(aluno1.curso, "\n")] = '\0';
    setbuf(stdin, NULL);
    for (int i = 0; i < 4; i++)
    {
        printf("Digite sua nota da prova %i: ", i + 1);
        scanf("%f", &aluno1.notas[i]);
        if (aluno1.notas[i] > 10 || aluno1.notas[i] < 0)
        {
            printf("Nota invalida\n");
            i--;
        }// if para notas invalidas
        
    }//for para atribuir as notas ao vetor
    aluno1.media = (aluno1.notas[0] + aluno1.notas[1] + aluno1.notas[2] + aluno1.notas[3]) / 4;
    if (aluno1.media >= 7)
    {
        strcpy(aluno1.situacao, "Aprovado");
    }
    else if (aluno1.media >= 3)
    {
        strcpy(aluno1.situacao, "Exame");
    }
    else
    {
        strcpy(aluno1.situacao, "Exame");
    }
    return 0;
}