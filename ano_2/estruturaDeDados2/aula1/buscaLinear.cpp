#include <iostream>

using namespace std;

int buscaLinear(int *vetor, int n){
    
    int tam = sizeof(vetor);

    for (int i = 0; i <= tam; i++)
    {
        if (vetor[i] == n)
        {
            return i;
        }
    }
    

    return -1;
}


int main()
{
    int vetor[5];
    vetor[1] = 2;
    vetor[2] = 2;
    vetor[3] = 2;
    vetor[4] = 2;
    vetor[0] = 2;

    int teste = buscaLinear(vetor, 3);
    cout<<teste<<endl;
    return 0;
}
