def quick(vetor,inicio,fim):
    if inicio < fim:
        pivo = particiona(vetor,inicio,fim)
        quick(vetor,inicio,pivo-1)
        quick(vetor,pivo+1,fim)

def particiona(vetor,inicio,fim):
    esquerda = inicio
    direita = fim
    pivo = vetor[inicio]
    while esquerda < direita:
        while vetor[esquerda] <= pivo and esquerda <= fim:
            esquerda+=1
            while vetor[direita] > pivo and direita > inicio:
                direita-=1
            if esquerda < direita:
                vetor[esquerda],vetor[direita]=vetor[direita],vetor[esquerda]

    vetor[inicio],vetor[direita]=vetor[direita],vetor[inicio]
    return direita

desordem=[19,3,245,23,4,32]
quick(desordem,0,len(desordem)-1)
print(desordem)