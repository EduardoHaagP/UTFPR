    /*
    1) Faça um algoritmo que implemente uma função que receba 3 números
    inteiros e retorne o maior valor;
    */
    #include <stdlib.h>
    #include <stdio.h>

    int numeros[3];

    int maior(int numerosComparar[3])
    {
        int maior = numerosComparar[0];
        for (int i = 0; i < 3; i++)
        {
            if (numerosComparar[i] > maior)
            {
                maior = numerosComparar[i];
            }//if
        }//for
        return maior;
    }//maior

    int main()
    {
        printf("Digite 3 numeros\nSiga o padrao\nn1\nn2\nn3\n");
        for (int i = 0; i < 3; i++)
        {
            scanf("%i",&numeros[i]);
        }//for
        int maiorN = maior(numeros);
        printf("O maior numero e: %i\n",maiorN);
        return 0;
    }//main