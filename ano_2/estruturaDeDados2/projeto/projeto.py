from random import randint
import ordenadores

"""
ler arquivo e identificar os parametro...
"""


def lerArquivo():
    try:
        f = open("C:\\code\\UTFPR\\ano_2\\estruturaDeDados2\\projeto\\input.txt","r")
        numero = int(f.readline().strip())
        caractere = f.readline().strip()
        f.close()
        info = (numero,caractere)
        return info
    except FileNotFoundError:
        print('não existe o arquivo')

def gerarVetor(vetor, tamanho_vetor, modo_geracao):
    
    if modo_geracao in "cCdDrR":
        
        if modo_geracao in "cC":    
            for i in range(0,tamanho_vetor):
                vetor.append(i)
        if modo_geracao in "dD":
            for i in range(tamanho_vetor,0,-1   ):
                vetor.append(i)
        if modo_geracao in "rR":
            for i in range(0,tamanho_vetor):
                vetor.append(randint(0,32000))         
    else:
        print("O modo de geração indicado não está conforme o padrão pedido no projeto")
        exit(0)
    
    return vetor


#"main"
tamanho_vetor, modo_geracao = lerArquivo()

vetor = []
print(f"{modo_geracao,tamanho_vetor}")
gerarVetor(vetor, tamanho_vetor, modo_geracao)
vetor, comparacoes, time = ordenadores.bubbleSort(vetor[:])

print(vetor)
