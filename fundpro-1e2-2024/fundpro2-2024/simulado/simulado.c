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
    BRASIL = 0,
    EUA,
    FRANCA,
    INGLATERRA,
    CHINA,
    JAPAO,
    FIM
};
typedef struct
{
    char pais[21];
    char cidade[21];
    int quantidadeServersUP;
    int quantidadeServersDown;
} Notificacoes;

void formarRelatorio(Notificacoes **relatorio, int quantidade, FILE **arq2)
{
    int problemasTotaisPorPais[6] = {0, 0, 0, 0, 0, 0}, ativosTotaisPorPais[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < quantidade; i++)
    {
        if (strcmp((*relatorio)[i].pais, "Brasil") == 0)
        {
            problemasTotaisPorPais[BRASIL] += (*relatorio)[i].quantidadeServersDown;
            ativosTotaisPorPais[BRASIL] += (*relatorio)[i].quantidadeServersUP;
        }
        else if (strcmp((*relatorio)[i].pais, "EUA") == 0)
        {
            problemasTotaisPorPais[EUA] += (*relatorio)[i].quantidadeServersDown;
            ativosTotaisPorPais[EUA] += (*relatorio)[i].quantidadeServersUP;
        }
        else if (strcmp((*relatorio)[i].pais, "Franca") == 0)
        {
            problemasTotaisPorPais[FRANCA] += (*relatorio)[i].quantidadeServersDown;
            ativosTotaisPorPais[FRANCA] += (*relatorio)[i].quantidadeServersUP;
        }
        else if (strcmp((*relatorio)[i].pais, "Inglaterra") == 0)
        {
            problemasTotaisPorPais[INGLATERRA] += (*relatorio)[i].quantidadeServersDown;
            ativosTotaisPorPais[INGLATERRA] += (*relatorio)[i].quantidadeServersUP;
        }
        else if (strcmp((*relatorio)[i].pais, "China") == 0)
        {
            problemasTotaisPorPais[CHINA] += (*relatorio)[i].quantidadeServersDown;
            ativosTotaisPorPais[CHINA] += (*relatorio)[i].quantidadeServersUP;
        }
        else if (strcmp((*relatorio)[i].pais, "Japao") == 0)
        {
            problemasTotaisPorPais[JAPAO] += (*relatorio)[i].quantidadeServersDown;
            ativosTotaisPorPais[JAPAO] += (*relatorio)[i].quantidadeServersUP;
        }
    }
    printf("%11s|%5s|%5s|%6s\n", "PAIS", "UP", "DOWN", "RATE");

    for (int i = 0; i < 6; i++)
    {
        float totalServers = (float)(ativosTotaisPorPais[i] + problemasTotaisPorPais[i]);
        float rate = 0.0;
        if (totalServers > 0)
        {
            rate = (float)(problemasTotaisPorPais[i] * 100) / totalServers;
        }

        if (i == BRASIL)
        {
            printf("%11s|%5i|%5i|%%%6.1f\n", "Brasil", ativosTotaisPorPais[BRASIL], problemasTotaisPorPais[BRASIL], rate);
            fprintf(*arq2, "%11s|%5i|%5i|%%%6.1f\n", "Brasil", ativosTotaisPorPais[BRASIL], problemasTotaisPorPais[BRASIL], rate);
        }
        else if (i == EUA)
        {
            printf("%11s|%5i|%5i|%%%6.1f\n", "EUA", ativosTotaisPorPais[EUA], problemasTotaisPorPais[EUA], rate);
            fprintf(*arq2, "%11s|%5i|%5i|%%%6.1f\n", "EUA", ativosTotaisPorPais[EUA], problemasTotaisPorPais[EUA], rate);
        }
        else if (i == FRANCA)
        {
            printf("%11s|%5i|%5i|%%%6.1f\n", "Franca", ativosTotaisPorPais[FRANCA], problemasTotaisPorPais[FRANCA], rate);
            fprintf(*arq2, "%11s|%5i|%5i|%%%6.1f\n", "Franca", ativosTotaisPorPais[FRANCA], problemasTotaisPorPais[FRANCA], rate);
        }
        else if (i == INGLATERRA)
        {
            printf("%11s|%5i|%5i|%%%6.1f\n", "Inglaterra", ativosTotaisPorPais[INGLATERRA], problemasTotaisPorPais[INGLATERRA], rate);
            fprintf(*arq2, "%11s|%5i|%5i|%%%6.1f\n", "Inglaterra", ativosTotaisPorPais[INGLATERRA], problemasTotaisPorPais[INGLATERRA], rate);
        }
        else if (i == CHINA)
        {
            printf("%11s|%5i|%5i|%%%6.1f\n", "China", ativosTotaisPorPais[CHINA], problemasTotaisPorPais[CHINA], rate);
            fprintf(*arq2, "%11s|%5i|%5i|%%%6.1f\n", "China", ativosTotaisPorPais[CHINA], problemasTotaisPorPais[CHINA], rate);
        }
        else if (i == JAPAO)
        {
            printf("%11s|%5i|%5i|%%%6.1f\n", "Japao", ativosTotaisPorPais[JAPAO], problemasTotaisPorPais[JAPAO], rate);
            fprintf(*arq2, "%11s|%5i|%5i|%%%6.1f\n", "Japao", ativosTotaisPorPais[JAPAO], problemasTotaisPorPais[JAPAO], rate);
        }
    }
    return;
}
// b
void pais(char nomePais[21])
{
    int npais;
    printf("Qual o Pais que o problema se encontra:\n0 - Brasil\n1 - EUA\n2- Franca\n3 - Inglaterra\n4 - China\n5 - Japao\n6 - Fim\nDigite aqui: ");
    scanf("%i", &npais);
    setbuf(stdin, NULL);
    while (npais > 6 || npais < 0)
    {
        printf("Valor invalido\nDigite novamente: ");
        scanf("%i", &npais);
        setbuf(stdin, NULL);
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
        strcpy(nomePais, "Japao");
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
    printf("Quantos servers estao ativos: ");
    scanf("%i", &qntServerUP);
    setbuf(stdin, NULL);
    return qntServerUP;
}

int qntServerDown()
{
    int qntServerDown;
    printf("Quantos servers estao inativos: ");
    scanf("%i", &qntServerDown);
    setbuf(stdin, NULL);
    return qntServerDown;
}

int receberNotificacoes(Notificacoes **p)
{
    int contador = 0, n = 1;

    while (contador < (5 * n))
    {
        if (contador == ((5 * n) - 1))
        {
            *p = realloc(*p, (contador + 6) * sizeof(Notificacoes));
            if (*p == NULL)
            {
                printf("Erro: Memória insuficiente!\n");
                exit(1);
            }
            n++;
        }
        char npais[21];
        pais(npais);
        if (strcmp("Fim", npais) == 0)
        {
            return contador;
        }
        strcpy((*p)[contador].pais, npais);

        char ncidade[21];
        cidade(ncidade);
        strcpy((*p)[contador].cidade, ncidade);

        (*p)[contador].quantidadeServersUP = qntServerUP();
        (*p)[contador].quantidadeServersDown = qntServerDown();
        contador++;
    }

    return contador;
}

int main()
{
    // a
    Notificacoes *p = malloc(5 * sizeof(Notificacoes));
    if (p == NULL)
    {
        printf("Erro: Memória Insuficiente!\n");
        exit(1);
    }
    // b
    int r = 0;
    r = receberNotificacoes(&p);
    p = realloc(p, r * sizeof(Notificacoes));

    // c
    FILE *arq = fopen("notifications.dat", "wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    fwrite(p, sizeof(Notificacoes), r, arq);
    fclose(arq);
    free(p);

    // d
    FILE *arq2 = fopen("notifications.dat", "rb");
    if (arq2 == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1); // finaliza o programa
    }
    Notificacoes *relatorio = malloc(r * sizeof(Notificacoes));
    if (relatorio == NULL)
    {
        printf("Erro: Memória Insuficiente!\n");
        exit(1);
    }
    fread(relatorio, sizeof(Notificacoes), r, arq2);

    // e
    FILE *arq3 = fopen("report.txt", "w");
    formarRelatorio(&relatorio, r, &arq3);

    free(relatorio);
    fclose(arq2);
    return 0;
}