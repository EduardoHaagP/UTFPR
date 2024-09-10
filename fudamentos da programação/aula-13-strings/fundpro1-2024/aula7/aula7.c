#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char cores;
    
    printf("Menu de Programa\n");
    printf("A - Azul\n");
    printf("V - Verde\n");
    printf("B - Branco\n");        
    printf("P - Preto\n");
    printf("C - Cinza\n");

    printf("Digite sua opção: ");
    scanf("%c",&cores);
    switch (cores)
    {
    //intervalo 3 ... 10
        case 'A':
        case 'a'://usuario burro
            printf("Voce escolheu Azul\n");
            break;
        
        case 'V' :
        case 'v' :
            printf("Voce escolheu Verde\n");
            break;
        

        case 'B':
        case 'b':
            printf("Voce escolheu Branco\n");
            break;
        
        case 'P':
        case 'p':
            printf("Voce escolheu Preto\n");
            break;
        
        case 'C':
        case 'c':
            printf("Voce escolheu Cinza\n");
            break;
        
        default:
            printf("opcao invalida\n");
        break;
        
    }

    return 0; 
}