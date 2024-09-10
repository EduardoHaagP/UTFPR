#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade;
float peso;

int main(){
    setlocale(LC_ALL, "");//texto do SO
    printf("digite sua idade\n");
    scanf("%i",&idade);
    /*
    printf("digite seu peso\n");
    scanf("%f",&peso);

    if(idade >= 18 && idade <= 65 && peso >=50){
        printf("voce pode doar sangue\n");
    }//fim if
    else{
        printf("voce nao pode doar sangue\n");
    }
    */
    if(idade < 12 ){
        printf("voce é criança\n");   
    }
    else{ 
        if (idade < 18) 
        {
            printf("voce é adolecente\n");
        }else{
            if( idade < 65){
                printf("voce é adulto\n");   
            }
            else{
                printf("voce é idoso\n");
            }
        }
    }

    if(idade < 12 ){
        printf("voce é criança\n");   
    }
    else if (idade < 18)
        printf("voce é adolecente\n");
            else if( idade < 65)
            printf("voce é adulto\n");   
                else
                printf("voce é idoso\n");
    //iguais so que com menos chaves
    return 0;

}//main