/*3) Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:
- O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.*/
#include <stdio.h>
#include <stdlib.h>

int matrix[5][5];
int maior;
int maiorLinha,maiorColuna;

// 00 01 02
// 10 11 12
// 20 21 22
int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           printf("Digite o numero da linha %i e coluna %i\n",i,j);
           scanf("%i",&matrix[i][j]); 
        }//for j leitura    
    }//for i leitura
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j]>maior)
            {
                maior = matrix[i][j];
                maiorLinha = i;
                maiorColuna = j;
            }
            
        }//for j comparação    
    }//for i comparação
    printf("o maior numero e = %i\n Sua localizacao e [%i][%i]\n",maior,maiorLinha,maiorColuna);
    return 0;
}