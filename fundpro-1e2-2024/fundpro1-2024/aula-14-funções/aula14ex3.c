/*
 3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.
*/
#include <stdio.h>
#include <stdlib.h>

int mediaA(int notas[3])
{
    int mediaA = (notas[0] + notas[1] + notas[2]) / 3;
    return mediaA;
} // media aritmetica

int mediaP(int notas[3])
{
    int mediaP = ((notas[0] * 5) + (notas[1] * 3) + (notas[2] * 2)) / 10;
    return mediaP;
} // media ponderada

int soma(int notas[3])
{
    int soma = notas[0] + notas[1] + notas[2];
    return soma;
} // soma

int main()
{
    int notas[3];
    char opcao;
    int resposta;
    printf("Digite suas 3 notas\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%i", &notas[i]);
    } // for
    setbuf(stdin, NULL);
    printf("O que deseja calcular?\nA- media aritmetica\nP- média ponderada (pesos: 5, 3 e 2)\n S- soma das notas");
    scanf("%c", &opcao);
    setbuf(stdin, NULL);
    while (opcao != 'A' && opcao != 'a' && opcao != 'P' && opcao != 'p' && opcao != 'S' && opcao != 's')
    {
        printf("Opcao invalida, digite novamente\nA- media aritmetica\nP- média ponderada (pesos: 5, 3 e 2)\nS- soma das notas\n");
        scanf(" %c", &opcao);
    } // while
    if (opcao == 'A' || opcao == 'a')
    {
        resposta = mediaA(notas);
        printf("A media aritimetica e:%i", resposta);
    } // if else
    else if (opcao == 'P' || opcao == 'p')
    {
        resposta = mediaP(notas);
        printf("A media ponderada e:%i", resposta);
    } // if else
    else if (opcao == 'S' || opcao == 's')
    {
        resposta = soma(notas);
        printf("A soma e:%i", resposta);
    } // if else
    return 0;
} // main