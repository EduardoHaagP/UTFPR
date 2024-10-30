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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[21];
    char tipo[21];
    int numeroIntegrantes;
    int posicaoRanking;
} Bandas;

void preencherBanda(Bandas bandas[], int indice)
{
    printf("Digite o Nome da Banda: ");
    fgets(bandas[indice].nome, 21, stdin);
    bandas[indice].nome[strcspn(bandas[indice].nome, "\n")] = '\0';

    printf("Digite o Tipo de musica dessa Banda: ");
    fgets(bandas[indice].tipo, 21, stdin);
    bandas[indice].tipo[strcspn(bandas[indice].tipo, "\n")] = '\0';

    printf("Quantos integrantes essa banda tem: ");
    scanf("%i", &bandas[indice].numeroIntegrantes);
    setbuf(stdin,NULL); // Limpar buffer do enter

    int posicaoValida;
    do
    {
        posicaoValida = 1; // Assume que a posição é válida
        printf("Qual a posição dessa banda em seu top 5: ");
        scanf("%i", &bandas[indice].posicaoRanking);
        setbuf(stdin,NULL); // Limpar buffer do enter

        // Verifica se a posição já foi usada por outra banda
        for (int i = 0; i < indice; i++)
        {
            if (bandas[i].posicaoRanking == bandas[indice].posicaoRanking)
            {
                printf("Essa posição já está ocupada por outra banda! Por favor, escolha outra.\n");
                posicaoValida = 0; // Marca como inválida
                break;
            }
        }
    } while (!posicaoValida); // Continua pedindo até ser válida
}//preencherBanda

void exibirBandas(Bandas bandas[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nBanda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Tipo de Música: %s\n", bandas[i].tipo);
        printf("Número de Integrantes: %d\n", bandas[i].numeroIntegrantes);
        printf("Posição no Ranking: %d\n", bandas[i].posicaoRanking);
    }
}//exibirBandas

void exibirBandaPorRanking(Bandas bandas[], int tamanho, int ranking)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (bandas[i].posicaoRanking == ranking)
        {
            printf("\nBanda na posição %d:\n", ranking);
            printf("Nome: %s\n", bandas[i].nome);
            printf("Tipo de Música: %s\n", bandas[i].tipo);
            printf("Número de Integrantes: %d\n", bandas[i].numeroIntegrantes);
            return;
        }
    }
    printf("Não há banda na posição %d\n", ranking);
}//exibirBandaPorRanking

void exibirBandasPorTipo(Bandas bandas[], int tamanho, char tipo[])
{
    int encontrou = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(bandas[i].tipo, tipo) == 0)
        {
            printf("\nBanda do tipo %s:\n", tipo);
            printf("Nome: %s\n", bandas[i].nome);
            printf("Número de Integrantes: %d\n", bandas[i].numeroIntegrantes);
            printf("Posição no Ranking: %d\n", bandas[i].posicaoRanking);
            encontrou = 1;
        }
    }
    if (!encontrou)
    {
        printf("Nenhuma banda do tipo %s foi encontrada.\n", tipo);
    }
}//exibirBandasPorTipo

void verificarBandaFavorita(Bandas bandas[], int tamanho, char nome[])
{
    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(bandas[i].nome, nome) == 0)
        {
            printf("%s está entre suas bandas favoritas!\n", nome);
            return;
        }
    }
    printf("%s não está entre suas bandas favoritas.\n", nome);
}//verificarBandaFavorita

int main()
{
    Bandas bandas[5];
    int opcao, ranking;
    char tipo[21], nome[21];
    int preenchido = 0;

    do
    {
        printf("\nSistema de Gerenciamento de Bandas\n");
        printf("1. Preencher bandas\n");
        printf("2. Exibir todas as bandas\n");
        printf("3. Exibir banda por posição no ranking\n");
        printf("4. Exibir bandas por tipo de música\n");
        printf("5. Verificar se uma banda está entre as favoritas\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        setbuf(stdin,NULL); // Limpar o buffer do enter

        switch (opcao)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("\nPreenchendo a banda %d\n", i + 1);
                preencherBanda(bandas, i);
            }
            preenchido = 1;
            break;

        case 2:
            if (preenchido)
            {
                exibirBandas(bandas, 5);
            }
            else
            {
                printf("Primeiro preencha as bandas.\n");
            }
            break;

        case 3:
            if (preenchido)
            {
                printf("Digite a posição no ranking (1-5): ");
                scanf("%d", &ranking);
                exibirBandaPorRanking(bandas, 5, ranking);
            }
            else
            {
                printf("Primeiro preencha as bandas.\n");
            }
            break;

        case 4:
            if (preenchido)
            {
                printf("Digite o tipo de música: ");
                fgets(tipo, 21, stdin);
                tipo[strcspn(tipo, "\n")] = '\0';
                exibirBandasPorTipo(bandas, 5, tipo);
            }
            else
            {
                printf("Primeiro preencha as bandas.\n");
            }
            break;

        case 5:
            if (preenchido)
            {
                printf("Digite o nome da banda: ");
                fgets(nome, 21, stdin);
                nome[strcspn(nome, "\n")] = '\0';
                verificarBandaFavorita(bandas, 5, nome);
            }
            else
            {
                printf("Primeiro preencha as bandas.\n");
            }
            break;

        case 6:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
        }

    } while (opcao != 6);

    return 0;
}//main