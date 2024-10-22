/*4) Tendo a Altura da pessoa definida como uma constante,
calcule seu peso ideal utilizando a seguinte fórmula:
 peso ideal = 72.7 x altura – 58*/

#include <stdio.h>
#include <stdlib.h>
    const float altura = 1.68;
    float pesoIdeal = 0;
    float a = 72.7;
    float b = -58;

int main(){
    printf("Hello World\n");
    pesoIdeal = a*altura+b;
    printf("O peso ideal é: %.2f \n",pesoIdeal);
    return 0;
}
