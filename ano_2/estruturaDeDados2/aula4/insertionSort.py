def insertionSort(vet, op=False):
    for i in range(1,len(vet)):
        k = i - 1
        aux = vet[i]
        if op == False:
            while k >= 0 and aux < vet[k]:
                vet[k+1] = vet[k]
                k -= 1
        elif op == True:
             while k >= 0 and aux > vet[k]:
                vet[k+1] = vet[k]
                k -= 1
        vet[k + 1] = aux
    return vet


desordem = [-66 , -28, 41, -87, 51, -17, -92, -22, 18, 9]
insertionSort(desordem)
print(desordem)
