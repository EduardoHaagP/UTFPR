/*
4)Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa mais velha;
a idade da pessoa mais nova e a média das 3 idades.
 O programa deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.
*/
#include <stdio.h>
#include <stdlib.h>

int idade_pessoa1;
int idade_pessoa2;
int idade_pessoa3;
int maior_idade;
int menor_idade;



int main(){
    printf("digite a primeira idade\n");
        scanf("%i",&idade_pessoa1);
            if(idade_pessoa1 < 0){
                while (idade_pessoa1 < 0){
                    printf("Idade invalida");
                    printf("digite a primeira idade\n");
                        scanf("%i",&idade_pessoa1);
                }
            }
            else{ 
                printf("digite a segunda idade\n");
                    scanf("%i",&idade_pessoa2);
                        if(idade_pessoa2 < 0){
                            while (idade_pessoa2 < 0){
                                printf("Idade invalida");
                                printf("digite a primeira idade\n");
                                    scanf("%i",&idade_pessoa2);
                            }
                        }
                        else{
                            printf("digite a terceira idade\n");
                                scanf("%i",&idade_pessoa3);
                                    if(idade_pessoa3 < 0){
                                        while (idade_pessoa3 < 0){
                                            printf("Idade invalida");
                                            printf("digite a primeira idade\n");
                                                scanf("%i",&idade_pessoa3);
                                        }   
                                    }
        
                            }
                    }
                    menor_idade= idade_pessoa1;
                    maior_idade= idade_pessoa1;
                    if (idade_pessoa2 < menor_idade)
                    {
                        menor_idade = idade_pessoa2;
                    }else if (idade_pessoa2 > maior_idade){
                        maior_idade = idade_pessoa2;
                    }
                    

                    if(idade_pessoa3 > maior_idade){
                        maior_idade = idade_pessoa3;
                    }else if(idade_pessoa3 < menor_idade) {
                        menor_idade = idade_pessoa3;
                    }

                    if (maior_idade == menor_idade)
                    {
                        printf("as 3 idades são iguais");
                    }else if(idade_pessoa1 == idade_pessoa2 || idade_pessoa1 == idade_pessoa3 || idade_pessoa2 == idade_pessoa3){
                        printf("Duas pessoas tem a memsma idade\n");
                        printf("A maior idade é:%i\n", maior_idade);
                        printf("A menor idade é:%i\n", menor_idade);
                    }else{
                        printf("as 3 pessoas tem idades diferentes\n");
                        printf("A maior idade é:%i\n", maior_idade);
                        printf("A menor idade é:%i\n", menor_idade);
                    }
                    
                    
return 0;
}