#include <stdio.h>
#include <stdlib.h>

void batatn(int n, int *soma){
    if (n == 0)
    {
        
    }else
    {
        *soma += n;
        batatn(n-1, soma);
    }
    /// fflush(stdout); legal
}


int main(){
    int n = 5;
    int soma = 0;
        setbuf(stdout,NULL);
    batatn(n, &soma);
    printf("%i\n",soma);
    return 0;
}