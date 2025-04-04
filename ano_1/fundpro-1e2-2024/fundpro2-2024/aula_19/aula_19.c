#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 15;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;

    printf("%p\n", **&ptr2);
        printf("%p\n", *&ptr2);
            printf("%p\n", &ptr2);
    return 0;
}