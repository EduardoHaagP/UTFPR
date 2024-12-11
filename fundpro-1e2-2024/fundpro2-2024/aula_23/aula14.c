#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[21];
    int idade;
    float peso;
    float altura;
}Alunos;

int main()
{
    Alunos aluno1;

    Alunos engcomp[3];

    for (int i = 0; i < 3; i++)
    {

        printf("Digite seu nome: ");
        fgets(engcomp[i].nome, 20, stdin);
        engcomp[i].nome[strcspn(engcomp[i].nome, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite sua idade: ");
        scanf("%d", &engcomp[i].idade);

        printf("Digite sua peso: ");
        scanf("%f", &engcomp[i].peso);

        printf("Digite sua altura: ");
        scanf("%f", &engcomp[i].altura);
        setbuf(stdin, NULL);
        
        printf("%s\n %i\n %.2f\n %.2f\n", engcomp[i].nome, engcomp[i].idade, engcomp[i].peso, engcomp[i].altura);
    }

    printf("Digite seu nome: ");
    fgets(aluno1.nome, 20, stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite sua idade: ");
    scanf("%d", &aluno1.idade);

    printf("Digite sua peso: ");
    scanf("%f", &aluno1.peso);

    printf("Digite sua altura: ");
    scanf("%f", &aluno1.altura);

    printf("%s\n %i\n %.2f\n %.2f\n", aluno1.nome, aluno1.idade, aluno1.peso, aluno1.altura);
    return 0;
} // main
