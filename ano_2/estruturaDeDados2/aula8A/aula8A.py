class Pessoa:
    def __init__(self, nome, sobrenome, endereco, cidade, estado, cep):
        self.nome = nome
        self.sobrenome = sobrenome
        self.endereco = endereco
        self.cidade = cidade
        self.estado = estado
        self.cep = cep

def escritaTamanhoFixo(arquivo, p1):
    f = open(arquivo, 'a')
    linha = f"{p1.nome:<10}{p1.sobrenome:<10}{p1.endereco:<15}{p1.cidade:<15}{p1.estado:<2}{p1.cep:<9}"
    print(f'{linha}\n')
    f.write(linha)
    f.close()
    
def escritaTamanhoCampos(arquivo, p1):
    f = open(arquivo, 'a')
    infos = [p1.nome, p1.sobrenome, p1.endereco, p1.cidade, p1.estado, p1.cep]
    linha = ''
    for i in infos: linha = linha + f"{len(i):02}{i}"
    print(f'{linha}\n')
    f.write(linha)
    f.close()
    
def escritaDelimitador(arquivo, p1):
    f = open(arquivo, 'a')
    infos = [p1.nome, p1.sobrenome, p1.endereco, p1.cidade, p1.estado, p1.cep]
    linha=''
    for i in infos:
        linha = linha + f"{i}|"
    print(f'{linha}\n')
    f.write(linha)
    f.close()

def escritaKeywords(arquivo, p1):
    f = open(arquivo, 'a')
    infos = {'nome=': p1.nome,'sobrenome=': p1.sobrenome,'endereco=': p1.endereco,'cidade=': p1.cidade,'estado=': p1.estado,'cep=': p1.cep}
    linha=''
    for p,v in infos.items(): linha = linha + f"{p}{v}|"
    print(f'{linha}\n')
    f.write(linha)
    f.close()

p1 = Pessoa("Dirceu", "Junior", "rua dos picas", "apucacity", "pr", "800000-00")

print('Tamanho Fixo:')
escritaTamanhoFixo('teste.txt', p1)
print('Tamanho Campos:')
escritaTamanhoCampos('teste.txt', p1)
print('Delimitador:')
escritaDelimitador('teste.txt', p1)
print('Keywords:')
escritaKeywords('teste.txt', p1)