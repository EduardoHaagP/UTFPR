
def grep(arq_registros, stringConsulta):
    arq_registros_open = open(arq_registros, 'r')
    ret = list()
    contador = 0
    for linha in arq_registros_open:
        if stringConsulta in linha:
            ret.append(contador)
        contador += 1
    return ret

def grep2(arq_registros, stringConsulta):
    arq_registros_open = open(arq_registros, 'r')
    ret = list()
    contador = 0
    for linha in arq_registros_open:
        if stringConsulta in linha:
            ret.append(linha)
        contador += 1
    return ret

ret = grep('teste.txt','Naruto')
print(f"{ret}")

ret2 = grep2('teste.txt','Naruto')
print(f"{ret2}")
