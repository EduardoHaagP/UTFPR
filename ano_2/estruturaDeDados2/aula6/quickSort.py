def quickSort(vetor, inicio, fim, op=False):
    if inicio < fim:
        pivo = particionaQuickSort(vetor, inicio, fim, op)
        print("pivo")
        print(vetor[pivo])
        print("vetor trocado")
        print(vetor)
        quickSort(vetor, inicio, pivo-1,op)
        quickSort(vetor, pivo+1, fim,op)    
    return
def particionaQuickSort(vetor, inicio, fim,op):
    
    
    esquerda = inicio
    direita = fim
    pivo = vetor[inicio]
    while esquerda < direita:
        if op:
            while esquerda <=fim and vetor[esquerda] >= pivo :
                esquerda += 1
            while  direita > inicio and vetor[direita] < pivo :
                direita -= 1
            if esquerda < direita:
                vetor[esquerda], vetor[direita] = vetor[direita],vetor[esquerda]
        else:
            while vetor[esquerda] <= pivo and esquerda <=fim:
                esquerda += 1
            while vetor[direita] > pivo and direita > inicio:
                direita -= 1
            if esquerda < direita:
                vetor[esquerda], vetor[direita] = vetor[direita],vetor[esquerda]
                print("troca")
                print(vetor)
    vetor[inicio], vetor[direita] = vetor[direita],pivo
    print("vetor")
    print(vetor)
    return direita
desordem = [-66 , -28, 41, -87, 51, -17, -92, -22, 18, 9]
quickSort(desordem, 0, len(desordem)-1)
print(desordem)
