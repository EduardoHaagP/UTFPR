/*

Simulado P2
Condições de conclusão
Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar. Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.
Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e gerar os relatórios para os técnicos responsáveis por reestabelecer os serviços.

Para isso, a central da Amazon está recebendo as notificações de falhas ao redor do mundo. Você devera implementar um sistema para salvar e processar essas notificações. Para isso:

a) (5 pontos) Aloque dinamicamente um vetor de Notificações de tamanho 5. Cada Notificação é uma estrutura que contém:
* Pais (string tam: 20):
* Cidade(string tam: 20):
* Quantidade de Servidores UP - ativos (inteiro)
* Quantidade de Servidores Down - com problemas (inteiro)

Os países possíveis são: Brasil, EUA, França, Inglaterra, China e Japão

b) (10 pontos) Receba os dados de diversas notificações de falhas e vá armazenando neste vetor de Notificações. A cada vez que o tamanho do vetor se tornar insuficiente, realoque seu tamanho aumentando o vetor em 5 unidades.
Ao receber o valor "fim" como entrada de um pais, o sistema de entradas deverá parar e o vetor tamanho do vetor ajustado ao tamanho exato da quantidade de relatórios.

c) (5 pontos) Salve os dados em um aquivo BINÁRIO chamado "notifications.dat". Feche o arquivo e libere a memória utilizada pelo vetor;

d) (5 pontos) Abra o arquivo gerado anteriormente, carregue os dados em um vetor de Relatórios alocado dinamicamente.

e) (5 pontos) Calcule o total de servidores ativos e com problemas em cada país. Exiba os dados na tela e gere um arquivo MODO TEXTO chamado "report.txt" no seguinte formato:
PAIS       |  UP |DOWN |  RATE|
Brasil     |   80|   30|   25%|
EUA        |  200|   50|   20%|
França     |   80|    5|    6%|
Inglaterra |  100|   12|   11%|
China      |  117|    3|    3%|
Japão      |   45|    5|   10%|


Obs: Caso você tenha problemas com a alocação dinâmica, faça um vetor estático de tamanho 10 e prossiga nos códigos, você perderá os pontos dessa parte mas prosseguirá normalmente com a nota da parte de arquivos.

Dados de exemplo:


PAIS       |CIDADE      |UP  |DOWN |
EUA        |New York    | 100|   30|
Brasil     |Sao Paulo   |  50|   20|
Inglaterra |Londres     |  70|    8|
Brasil     |Brasilia    |  20|    5|
Brasil     |Fortaleza   |  10|    5|
Japão      |Tokyo       |  45|    5|
EUA        |Boston      |  25|    5|
EUA        |Los Angeles |  50|   10|
França     |Paris       |  50|    4|
China      |Pequim      | 117|    3|
França     |Nice        |  30|    1|
Londres    |Manchester  |  30|    4|
EUA        |Orlando     |  25|    5|
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum paises
{
    FIM = 0,
    BRASIL,
    EUA,
    FRANCA,
    INGLATERRA,
    CHINA,
    JAPAO
};
typedef struct
{
    char pais[21];
    char cidade[21];
    int quantidadeServersUP;
    int quantidadeServersDown;
} Notificacoes;


void pais(char nomePais[21])
{
    int npais;
    printf("Qual o Pais que o problema se encontra:\n1 - Brasil\n2 - EUA\n3- França\n4 - Inglaterra\n5 - China\n6 - Japão\n0 - Fim\nDigite aqui: ");
    scanf("%i", &npais);
    while (npais >= 6 || npais < 0)
    {
        printf("Valor invalido\nDigite novamente: ");
        scanf("%i", &npais);
    }

    switch (npais)
    {
    case FIM:
        strcpy(nomePais, "Fim");
        break;
    case BRASIL:
        strcpy(nomePais, "Brasil");
        break;

    case EUA:
        strcpy(nomePais, "EUA");
        break;

    case FRANCA:
        strcpy(nomePais, "Franca");
        break;

    case INGLATERRA:
        strcpy(nomePais, "Inglaterra");
        break;
    case CHINA:
        strcpy(nomePais, "China");
        break;
    case JAPAO:
        strcpy(nomePais, "Japão");
        break;
    }
    return;
}
void cidade(char ncidade[21])
{
    printf("Digite o nome da cidade que aconteceu: ");
    fgets(ncidade, 21, stdin);
    ncidade[strcspn(ncidade, "\n")] = '\0';
    setbuf(stdin, NULL);

    return;
}

int qntServerUP()
{
    int qntServerUP;
    printf("Quantos servers estão ativos: ");
    scanf("%i", &qntServerUP);
    return qntServerUP;
}

int qntServerDown()
{
    int qntServerDown;
    printf("Quantos servers estão ativos: ");
    scanf("%i", &qntServerDown);
    return qntServerDown;
}

int receberNotificacoes(Notificacoes **p)
{
    int contador = 0, n = 1;

    while (contador < (5*n) )
    {
        if (contador == 4)
        {
            p = realloc(p, (contador+6) * sizeof(Notificacoes));
        }
        char npais[21];
        pais(npais);
        if (strcmp("Fim", npais) == 0)
        {
            return 0;
        }
        strcpy((*p)[contador].pais, npais);

        char ncidade[21];
        cidade(ncidade);
        strcpy((*p)[contador].cidade, ncidade);

        (*p)[contador].quantidadeServersUP = qntServerUP();
        (*p)[contador].quantidadeServersDown = qntServerDown();
        contador++;
        n++;

        
        
    }

    return contador;
}

int main()
{
    Notificacoes *p = malloc(5 * sizeof(Notificacoes));
    if (p == NULL)
    {
        printf("Erro: Memória Insuficiente!\n");
        exit(1);
    }
    int r = 0;
    r = receberNotificacoes(&p);

    p = realloc(p, r * sizeof(Notificacoes));

    free(p);
    return 0;
}