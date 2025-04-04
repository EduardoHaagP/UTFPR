/*
Um programa usa structs que representam retângulos que possuem três campos: largura, altura, área e perímetro.

Crie uma função que recebe como entrada um ponteiro para uma struct como mencionada acima, e preencha os dampos perímetro e área usando os campos altura e largura. 
*/

#include <stdio.h>

// struct representando o retângulo
typedef struct{
    float largura;
    float altura;
    float perimetro;
    float area;
} retangulo;

// função a ser preenchida
void preenche_retangulo(retangulo *r){
    (*r).perimetro = 2*((*r).altura) + 2*((*r).largura);
    printf("Perimetro: %.2fm\n",(*r).perimetro);
    (*r).area = ((*r).altura)*((*r).largura);
    printf("Area: %.2fm²\n",(*r).area);
    return;
}

int main(){
    retangulo r = {2, 1, 0, 0};
    preenche_retangulo(&r);
    return 0;
}