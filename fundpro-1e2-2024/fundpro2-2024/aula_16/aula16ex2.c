/*
2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7*/
#include <stdio.h>
#include <stdlib.h>

float pesoH(float altura)
{
    return (72.7 * altura) - 58;
} // peso homem

float pesoM(float altura)
{
    return (62.1 * altura) - 44.7;
} // peso mulher

int main()
{
    char sexo;
    float altura;
    float peso_ideal;

    printf("Digite H para homem ou M para mulher: ");
    scanf(" %c", &sexo);

    while (sexo != 'M' && sexo != 'm' && sexo != 'H' && sexo != 'h')
    {
        printf("Sexo inválido, digite novamente (H para homem ou M para mulher): ");
        scanf(" %c", &sexo);
    } // while

    printf("Qual sua altura (em metros)? ");
    scanf("%f", &altura);

    if (sexo == 'H' || sexo == 'h')
    {
        peso_ideal = pesoH(altura);
    } // if
    else if (sexo == 'M' || sexo == 'm')
    {
        peso_ideal = pesoM(altura);
    } // else if

    printf("Seu peso ideal e: %.2f kg\n", peso_ideal);

    return 0;
} // main
