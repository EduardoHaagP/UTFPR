/*
2) Crie uma função que retorne x*y através de operação de soma. A função
recebe x e y por parâmetro
*/

#include <stdio.h>
#include <stdlib.h>

void mult(int fator1, int fator2,int *resultado){
    if (fator2 == 0)
    {
        return;
    }else{
        *resultado = *resultado + fator1;
        mult(fator1, (fator2-1),resultado);
    }
    

}

int main(){
    int fator1, fator2, resultado;
    printf("Digite os valores inteiro que deseja multiplicar (siga esse padrão n1xn2): ");
    scanf("%ix%i",&fator1,&fator2);
    mult(fator1,fator2,&resultado);
    printf("O resultado é: %i\n", resultado);
    return 0;
}
