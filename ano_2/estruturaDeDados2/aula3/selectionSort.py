
def selectionSort(vet, n, crescente):
    for i in range(0,n-1):
        menor = i
        for j in range(i, n):
            if crescente:
                if vet[menor] > vet[j]:
                    menor = j
            else:
                if vet[menor] < vet[j]:
                    menor = j
        if menor != i:
            vet[menor],vet[i]=vet[i],vet[menor]
        
    
    return vet


desordem = [-66 , -28, 41, -87, 51, -17, -92, -22, 18, 9]
print(desordem)
selectionSort(desordem, 10, True)
print(desordem)
selectionSort(desordem, 10, False)

print(desordem)