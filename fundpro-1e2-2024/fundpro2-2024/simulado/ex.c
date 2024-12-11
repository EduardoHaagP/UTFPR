/*
Você foi contratado pela Riot Games para elaborar partes do sistema sistema de Ranking do League of Legends. Para isso:

a) Defina um tipo e estrutura para salvar os dados de jogadores para um Ranking.
Cada jogador possui: nome, vitórias, derrotas, tier(nível) e pontos.

Os tiers são: Bronze, Prata, Ouro, Platina, Diamante e Desafiante. Para organizar os níveis utilize uma enumeração.

b) Receba do teclado e armazene os dados de 6 jogadores. Não devem ser permitidos valores negativos, novos valores devem ser solicitados caso necessário.

c) Exiba uma tabela alinhada com o nome e a taxa de vitórias (winrate) de cada jogador
  winrate = vitórias / (vitórias+derrotas) * 100.
  Cada calculo deve ser feito por meio de uma função adicional que recebe o número de vitórias e derrotas via cópia e retorna o winrate.

d) Exiba uma tabela com os líderes (maior número de pontos) de cada um dos níveis. Para isso, faça uma função extra que receba um tier e retorne uma estrutura do tipo Jogador com os dados do líder.

e) Faça a busca de um jogador pelo nome digitado. A busca deve ser feita por uma função adicional que recebe o nome e retorna os dados de vitórias, derrotas, tier e pontos via referência.

f) Utilizando uma função recursiva, calcule a soma de todas as partidas (vitórias e derrotas) de todos os jogadores.

Cada um dos itens de B a E deve ser implementada em uma função diferente.
Não é permitido o uso de variáveis globais.
Nas funções extras, caso necessário, utilize parâmetros adicionais.

Texto de resposta Questão 1
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// A
typedef enum
{
    BRONZE = 1,
    PRATA,
    OURO,
    PLATINA,
    DIAMANTE,
    DESAFIANTE
} Nivel;
typedef struct
{
    char nome[21];
    int vitorias;
    int derrotas;
    Nivel tier;
    int pontos;
} Jogador;

// Receba do teclado e armazene os dados de 6 jogadores. Não devem ser permitidos valores negativos, novos valores devem ser solicitados caso necessário.
void informacoesJodoresNome(Jogador *jogadores, int i)
{
    printf("Digite o nome do jogador %d: ", i);
    fgets(jogadores->nome, 20, stdin);
    jogadores->nome[strcspn(jogadores->nome, "\n")] = '\0';
    setbuf(stdin, NULL);
    return;
}
void informacoesJodoresVitorias(Jogador *jogadores)
{
    printf("Digite quantas vitorias esse jogador tem: ");
    scanf("%i", &jogadores->vitorias);
    setbuf(stdin, NULL);
    while (jogadores->vitorias < 0)
    {
        printf("Valor invalido! Digite novamente:");
        scanf("%i", &jogadores->vitorias);
        setbuf(stdin, NULL);
    }
    return;
}
void informacoesJodoresDerrotas(Jogador *jogadores)
{
    printf("Digite quantas derrotas esse jogador tem: ");
    scanf("%i", &jogadores->derrotas);
    setbuf(stdin, NULL);
    while (jogadores->derrotas < 0)
    {
        printf("Valor invalido! Digite novamente:");
        scanf("%i", &jogadores->derrotas);
        setbuf(stdin, NULL);
    }
    return;
}
void informacoesJodoresTier(Jogador *jogadores)
{
    int tier;
    printf("Qual o tier desse jogador sendo:\n1 - Bronze\n2 - PRATA\n3 - OURO\n4 - PLATINA\n5 - DIAMANTE\n6 - DESAFIANTE\nDigite aqui: ");
    scanf("%d", &tier);
    setbuf(stdin, NULL);
    while (tier < 1 || tier > 6)
    {
        printf("Valor invalido! Digite novamente: ");
        scanf("%d", &tier);
        setbuf(stdin, NULL);
    }
    jogadores->tier = tier;
}

void informacoesJodoresPontos(Jogador *jogadores)
{
    printf("Digite quantos pontos esse jogador tem: ");
    scanf("%i", &jogadores->pontos);
    setbuf(stdin, NULL);
    while (jogadores->pontos < 0)
    {
        printf("Valor invalido! Digite novamente: ");
        scanf("%i", &jogadores->pontos);
        setbuf(stdin, NULL);
    }
}

// C
float calculoWinRate(float win, float lose)
{
    return (float)(win / (win + lose) * 100);
}
void exibirWinRate(Jogador *jogadores, int i)
{
    if (i == 0)
    {
        printf("%22s|%s\n", "Nome", "Winrate");
    }
    float winRate = calculoWinRate((float)jogadores->vitorias, (float)jogadores->derrotas);
    printf("%22s|%.2f\n", jogadores->nome, winRate);
}

int main()
{
    printf("Hello World!\n");
    Jogador jogadores[2];
    for (int i = 0; i < 2; i++)
    {
        informacoesJodoresNome(&jogadores[i], i);
        informacoesJodoresVitorias(&jogadores[i]);
        informacoesJodoresDerrotas(&jogadores[i]);
        informacoesJodoresTier(&jogadores[i]);
        informacoesJodoresPontos(&jogadores[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        exibirWinRate(&jogadores[i], i);
    }
}
