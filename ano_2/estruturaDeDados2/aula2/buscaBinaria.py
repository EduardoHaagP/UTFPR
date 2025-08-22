def buscaBinaria(array, n):
    inicio = 0
    fim = len(array) -1
    while inicio <= fim :
        meio = (inicio + fim)//2
        if array[meio] == n:
            return meio
        elif array[meio] < n:
            inicio = meio -1
        else:
            fim = meio + 1
    return -1

def bubbleSort(lista, opcao = False):
    troca = True
    j = len(lista)-1
    while(troca):
        troca = False
        for i in  range(j):
            if opcao:
                if lista[i] > lista[i+1]:
                    lista[i],lista[i+1] = lista[i+1], lista[i]
                    troca = True
            else:
                if lista[i] < lista[i+1]:
                    lista[i],lista[i+1] = lista[i+1], lista[i]
                    troca = True
        j -= 1
    return lista


desordem = [-66 , -28, 41, -87, 51, -17, -92, -22, 18, 9]
bubbleSort(desordem, True)
print(desordem)
print(buscaBinaria(desordem, -28))