/*3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a;
double b;
double c;
double x1;
double x2;
double aux;

// baskara -b+ ou - raiz de b² -4xaxc  /2xa
// variavel = pow(base,expoente); potecia
// sqrt(valor) raiz

int main(){
    printf("Digite A para o calculo de baskara");
    scanf("%lf",&a);

    printf("Digite B para o calculo de baskara");
    scanf("%lf",&b);

    printf("Digite C para o calculo de baskara");
    scanf("%lf",&c);
    aux = (sqrt(pow(b,2)) + ((-4)*a*c));

    if(a == 0 || aux < 0){
        printf("resultado nao possivel");
    }//fim if
    else{
        x1 = ((-b)+(sqrt(pow(b,2)) + ((-4)*a*c)))/(2*a);
        x2 = ((-b)-(sqrt(pow(b,2)) + ((-4)*a*c)))/(2*a);

    printf("As respostas possiveis de x são:\nx1:%lf\n x2:%lf\n",x1,x2);
    }//fim else
}
