/*4) Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variaveis
float numero1;
float numero2;
float numero3;
float numero4;
float media;

//função principal
int main(){
//pedir os numeros e associa-los a uma variavel
    printf("Digite o primeiro numero:");
    scanf("%f",&numero1);
    printf("Digite o segundo numero:");
    scanf("%f",&numero2);
    printf("Digite o terceiro numero:");
    scanf("%f",&numero3);
    printf("Digite o quarto numero:");
    scanf("%f",&numero4);
//calculo da media deles
    media = (numero1 + numero2 + numero3 + numero4)/4;
//exibir a media dos valores
    printf("A media dos 4 numeros é:%.2f\n",media);
    return 0;
}