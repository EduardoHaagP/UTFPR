def maxHeapfy(lista, i, n, op):
    esquerda = 2 * i + 1
    direita = 2 * i + 2
    maior = i

    if op:  # Min-Heap
        if esquerda < n and lista[esquerda] < lista[maior]:
            maior = esquerda
        if direita < n and lista[direita] < lista[maior]:
            maior = direita
    else:   # Max-Heap
        if esquerda < n and lista[esquerda] > lista[maior]:
            maior = esquerda
        if direita < n and lista[direita] > lista[maior]:
            maior = direita

    if maior != i:
        lista[i], lista[maior] = lista[maior], lista[i]
        maxHeapfy(lista, maior, n, op)


def buildMaxHeap(lista, op):
    n = len(lista)
    for i in range((n // 2) - 1, -1, -1):
        maxHeapfy(lista, i, n, op)


def heapSort(lista, op=False):
    n = len(lista)
    buildMaxHeap(lista, op)
    for i in range(n - 1, 0, -1):
        lista[0], lista[i] = lista[i], lista[0]
        maxHeapfy(lista, 0, i, op)
    return lista




desordem = [-66, -28, 41, -87, 51, -17, -92, -22, 18, 9]
print(heapSort(desordem, False))  
print(heapSort(desordem, True))   