#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq;
    char texto[100];
    int tamanho = 0, contador = 0,contador1 = 0;
    arq = fopen("../aula21.txt", "r"); // Abre o arquivo
    if (arq == NULL)
    {
        perror("Erro na abertura do arquivo\n");
        exit(1); // Finaliza o programa
    } // if

    if (fgets(texto, 100, arq) == NULL) // Lê o texto do arquivo
    {
        printf("Erro na leitura\n");
    }else{
        tamanho = strlen(texto);
        printf("%s\n%i\n", texto, tamanho);
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (texto[i]=='a' ||texto[i]=='e'||texto[i]=='i'||texto[i]=='o'||texto[i]=='u')
        {
            contador++;
            printf("%i %c\n",contador, texto[i]);
        }
        if (texto[i]>='A' && texto[i]<='Z')
        {
            contador1++;
            printf("%i %c\n",contador1, texto[i]);
        }
        
    }
    

    fclose(arq); // Fecha o arquivo

    return 0;
}
