#include <stdio.h>
#include <stdlib.h>

int opcao;
int numero; 
int resto;
int idade;


int main(){
    printf("Menu do programa:\n");
    printf("1 - verificar par/impar\n");
    printf("2 - verificar maior/menor de idade\n");
    printf("Escolha a sua opção:\n");
    scanf("%i",&opcao);
    switch(opcao){
        case 1:
            printf("voce escolheu a opção 1\n");
                printf("digite um numero\n");
                scanf("%i",&numero);
                resto = numero % 2;
                if (resto == 1)
                {printf("esse numero e impar\n");
                    }else{
                        printf("esse numero e par\n");
                        }break;
        case 2:
            printf("voce escolheu a opção 2\n");
                printf("Digite sua idade\n");
                scanf("%i",&idade);
                if (idade >= 18)
                {
                    printf("voce e maior de idade\n");
                }else{
                    printf("voce e menor de idade\n");
                    }break;
        default:
                printf("opção diferente de 1 e 2\n");
            break;
    }
    return 0;
}