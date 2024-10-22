/*
3) Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes
passos:
a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que
posição do ranking essa banda está dentre as suas 5 bandas favoritas;
b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo
passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking.
e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está
entre suas bandas favoritas ou não;
f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e
todas as opções das questões passadas.

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[21];
    char tipo[21];
    int numeroIntegrantes;
    int posicaoRanking;
} Bandas;


void preencherBanda(Bandas *banda)
{
    printf("Digite o Nome da Banda: ");
    fgets(banda->nome, 20, stdin);
    banda->nome[strcspn(banda->nome, "\n")] = '\0';
    setbuf(stdin, NULL);


    printf("Digite o Tipo de musica dessa Banda: ");
    fgets(banda->tipo, 20, stdin);
    banda->tipo[strcspn(banda->tipo, "\n")] = '\0';
    setbuf(stdin, NULL);


    printf("Quantos integrantes essa banda tem: ");
    scanf("%i",&banda->numeroIntegrantes);


    printf("Qual a possição dessa banda em top 5: ");
    scanf("%i",&banda->posicaoRanking);    
}

int main()
{
    Bandas banda[5];
    preencherBanda(&banda[0]);
    //for (int i = 0; i < 5; i++)
    //{
       // preencherBanda(&banda[i]);
    //}
    printf("%s\n",banda[0].nome);
    printf("%s\n",banda[0].tipo);

    printf("%d\n",banda[0].numeroIntegrantes);
    printf("%d\n",banda[0].posicaoRanking);

}