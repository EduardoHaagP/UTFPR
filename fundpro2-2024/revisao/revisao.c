#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomes [21];
    printf ("Digite seu nome:");
    fgets (nomes, 20, stdin);
    nomes [strcspn (nomes, "\n")] = '\0';
    setbuf (stdin,NULL);
    printf ("%s\n", nomes);

    /*int idades[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite sua idade:\n");
        scanf("%d", &idades[i]);
        printf("Você tem %d anos.\n", idades[i]);
    }
    return 0;
    */
   return 0;

}