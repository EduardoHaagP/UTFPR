/*
3) Crie uma função que retorne x elevado a y através de operação de
multiplicação. A função recebe x e y por parâmetro
*/
#include <stdio.h>
#include <stdlib.h>

int potenciacao(int e, int n){
    if (n == 0)
    {
        return 1;
    }else{
        return e * potenciacao(e, n-1);
    }
    

}
int main(){
    int base, expoente;
    printf("Digite a base e o expoente (siga esse padrao b e): ");
    scanf("%i %i",&base,&expoente);
    int resultado = potenciacao(base,expoente);
    printf("%i\n",resultado);
    return 0;
}

