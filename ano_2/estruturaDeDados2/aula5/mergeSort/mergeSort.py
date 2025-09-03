def mergeSort(vet,inicio, fim, op = False):
    if inicio < fim:
        meio = (inicio+fim)//2
        mergeSort(vet,inicio, meio,op)
        mergeSort(vet, meio+1, fim,op)
        
        merge(vet, inicio,meio, fim, op)
    return


def merge(vet, inicio,meio, fim, op):
    aux = []
    p1 = inicio
    p2 = meio + 1
    
    while p1 <= meio and p2 <= fim:
        if op:
            if vet[p1] > vet[p2]:
                aux.append(vet[p1])
                p1 += 1
            else:
                aux.append(vet[p2])
                p2 += 1
        else:
            if vet[p1] < vet[p2]:
                aux.append(vet[p1])
                p1 += 1
            else:
                aux.append(vet[p2])
                p2 += 1

    aux.extend(vet[p1:meio+1])
    aux.extend(vet[p2:fim+1])
        
    for i in range(len(aux)):
        vet[inicio + i] = aux[i]



desordem = [-66 , -28, 41, -87, 51, -17, -92, -22, 18, 9]
mergeSort(desordem, 0, len(desordem)-1, True)
print(desordem)


