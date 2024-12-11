/*
4) Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e tempo ativo por dia (real, em horas).
Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[16];
    float potencia;
    float tempoAtivoPorDia;
    int diasUsados;
    float consumo;
} Eletrodomesticos;

Eletrodomesticos eletrodomesticos_casa[5];
float consumoTotal = 0;

int main()
{
    printf("Coloque os eletrodomesticos da sua casa:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do eletrodomestico %i: ", i + 1);
        fgets(eletrodomesticos_casa[i].nome, 15, stdin);
        eletrodomesticos_casa[i].nome[strcspn(eletrodomesticos_casa[i].nome, "\n")] = '\0';
        setbuf(stdin, NULL);
        printf("Agora digite a potencia desse eletrodomestico: ");
        scanf("%f",&eletrodomesticos_casa[i].potencia);
        printf("Agora digite o tempo ativo diario desse eletrodomestico em horas: ");
        scanf("%f",&eletrodomesticos_casa[i].tempoAtivoPorDia);
        printf("Agora digite a quantidade de dias que usa esse eletrodomestico por mes:");
        scanf("%i",&eletrodomesticos_casa[i].diasUsados);
        eletrodomesticos_casa[i].consumo =eletrodomesticos_casa[i].potencia*eletrodomesticos_casa[i].tempoAtivoPorDia*eletrodomesticos_casa[i].diasUsados ;
        setbuf(stdin, NULL);
    }

    for (int i = 0; i < 5; i++)
    {
        consumoTotal += eletrodomesticos_casa[i].consumo;
    }
    
    printf("%20s|%8s|%16s|%8s|%16s\n","Nome","Potencia","Tempo ativo por dia", "Consumo", "ConsumoxTotal");
    for (int i = 0; i < 5; i++)
    {
        printf("%20s|%8.2f kW|%16.2f H|%8.2f| %16.2f%%\n",eletrodomesticos_casa[i].nome,eletrodomesticos_casa[i].potencia, eletrodomesticos_casa[i].tempoAtivoPorDia, eletrodomesticos_casa[i].consumo, eletrodomesticos_casa[i].consumo/consumoTotal *100);
    }
    return 0;
}