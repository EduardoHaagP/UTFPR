// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// variaveis
int contadorAlunos, contadorAlunosAprovados, contadorAlunosReprovados = 0;
float notas, mediaDosAlunos;

int main()
{
    printf("HELLO WORLD\n");
    while (notas <= 10 && notas >= 0)
    {
        contadorAlunos++;
        printf("Qual a nota do aluno %i\n", contadorAlunos);
        scanf("%f", &notas);
        if (contadorAlunos == 1 && notas >= 0 && notas <= 10)
        {
            mediaDosAlunos = notas;
        } // if
        else if (notas <= 0 && notas >= 10)
        {
            mediaDosAlunos = (mediaDosAlunos + notas) / 2;
        } // else if
        if (notas >= 6 && notas <= 10)
        {
            contadorAlunosAprovados++;
        } // if
        else if (notas >= 0 && notas < 6)
        {
            contadorAlunosReprovados++;
        } // else if
    }     // while
    if (contadorAlunos == 1)
    {
        printf("nenhuma nota valida foi digitada\n");
    } // if
    else
    {
        printf("%i alunos foram aprovados\n", contadorAlunosAprovados);
        printf("%i alunos foram reprovados\n", contadorAlunosReprovados);
        printf("A media desses alunos foi: %.2f\n", mediaDosAlunos);
    } // else
    return 0;
} // main