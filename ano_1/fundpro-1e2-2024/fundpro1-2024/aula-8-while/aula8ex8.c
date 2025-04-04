/*
Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.
*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//variavel
int numero;

int main(){
    while (numero != 3){
        printf("Menu do programa:\n1 - Teste 1\n2 - Teste 2\n3 - Sair do programa\nSelecione sua opcao:\n");
            scanf("%i",&numero);
        switch (numero)
        {
        case 1:
            printf("Teste 1\n");
            break;
        case 2:
            printf("Teste 2\n");
            break;        
        default: printf("Erro\n");
            break;
        }//switch
    }//while
    printf("O programa acabou\n");
    return 0;    
}//main