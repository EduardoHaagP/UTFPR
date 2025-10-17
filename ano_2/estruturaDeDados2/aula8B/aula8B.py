# -*- coding: utf-8 -*-

import csv

"""
Script completo que implementa os 6 algoritmos do arquivo pseudo.pdf
E ADICIONALMENTE o método de padding dinâmico solicitado.
VERSÃO SEM A BIBLIOTECA PANDAS.
"""

# --- 1. Carregamento do Dataset via Módulo CSV ---

def carrega_animes(nome_arquivo):
    """
    Carrega os dados do arquivo CSV usando o módulo 'csv' do Python
    e retorna uma lista de dicionários.
    """
    print(f"Carregando dados de '{nome_arquivo}' (sem pandas)...\n")
    dataset = []
    try:
        with open(nome_arquivo, mode='r', newline='', encoding='utf-8') as f:
            # DictReader lê cada linha como um dicionário, usando o cabeçalho como chaves
            leitor_csv = csv.DictReader(f)
            for linha in leitor_csv:
                # Converte o número de episódios para inteiro para consistência
                try:
                    linha['episodios'] = int(linha['episodios'])
                    dataset.append(linha)
                except (ValueError, KeyError):
                    print(f"Aviso: Linha com dados inválidos ignorada: {linha}")
    except FileNotFoundError:
        print(f"ERRO: O arquivo '{nome_arquivo}' não foi encontrado. Verifique se ele está na mesma pasta.")
        return None
        
    return dataset


# --- 2. Implementação das Funções do 'pseudo.pdf' ---

def escrita_tamanho_fixo(arquivo_nome, dataset):
    """Método 1: Registros de Tamanho Fixo (campos definidos)."""
    with open(arquivo_nome, 'w', encoding='utf-8') as f:
        for item in dataset:
            nome = str(item['nome']).ljust(30)
            estudio = str(item['estudio']).ljust(25)
            episodios = str(item['episodios']).ljust(5)
            linha = nome + estudio + episodios
            f.write(linha + '\n')
    print(f"-> Arquivo '{arquivo_nome}' gerado (Tamanho Fixo por Campo).")


def escrita_qtde_campos(arquivo_nome, dataset):
    """Método 2: Número Fixo de Campos com Delimitador."""
    with open(arquivo_nome, 'w', encoding='utf-8') as f:
        for item in dataset:
            linha = f"{item['nome']}|{item['estudio']}|{item['episodios']}\n"
            f.write(linha)
    print(f"-> Arquivo '{arquivo_nome}' gerado (Qtde de Campos).")


def escrita_qtde_bytes(arquivo_nome, dataset):
    """Método 3: Indicador de Tamanho do Registro."""
    with open(arquivo_nome, 'w', encoding='utf-8') as f:
        for item in dataset:
            registro = f"{item['nome']}|{item['estudio']}|{item['episodios']}"
            tamanho = len(registro)
            f.write(str(tamanho) + " " + registro)
    print(f"-> Arquivo '{arquivo_nome}' gerado (Qtde de Bytes).")


def escrita_arquivo_indices(arq_dados, arq_indices, dataset):
    """Método 4: Arquivo de Índices."""
    with open(arq_dados, 'w', encoding='utf-8') as f_dados, \
         open(arq_indices, 'w', encoding='utf-8') as f_indices:
        posicao = 0
        for item in dataset:
            f_indices.write(str(posicao) + '\n')
            registro = f"{item['nome']}|{item['estudio']}|{item['episodios']}\n"
            f_dados.write(registro)
            posicao += len(registro.encode('utf-8'))
    print(f"-> Arquivos '{arq_dados}' e '{arq_indices}' gerados (Índices).")


def escrita_delimitadores(arquivo_nome, dataset):
    """Método 5: Delimitadores de Registro."""
    with open(arquivo_nome, 'w', encoding='utf-8') as f:
        for item in dataset:
            registro = f"{item['nome']}|{item['estudio']}|{item['episodios']}"
            f.write(registro + "#")
    print(f"-> Arquivo '{arquivo_nome}' gerado (Delimitadores).")


# --- 3. Implementação da PARTE de Padding Dinâmico ---

def escrita_padding_dinamico(arquivo_csv_entrada, arquivo_txt_saida):
    """
    Implementa o método de padding baseado no maior registro do arquivo.
    """
    try:
        # Passo 1: Descobrir o maior registro
        tamanho_maximo_registro = 0
        with open(arquivo_csv_entrada, mode='r', newline='', encoding='utf-8') as f:
            leitor = csv.reader(f)
            for linha_lista in leitor:
                linha_str = "|".join(linha_lista)
                if len(linha_str) > tamanho_maximo_registro:
                    tamanho_maximo_registro = len(linha_str)
        
        # Passo 2: Criar o novo arquivo com padding
        with open(arquivo_csv_entrada, mode='r', newline='', encoding='utf-8') as f_entrada, \
             open(arquivo_txt_saida, mode='w', encoding='utf-8') as f_saida:
            
            leitor = csv.reader(f_entrada)
            for linha_lista in leitor:
                linha_atual_str = "|".join(linha_lista)
                qtde_padding = tamanho_maximo_registro - len(linha_atual_str)
                
                linha_final = linha_atual_str
                if qtde_padding > 0:
                    padding = '*' * qtde_padding
                    linha_final += padding
                
                f_saida.write(linha_final + '\n')
                
        print(f"-> Arquivo '{arquivo_txt_saida}' gerado (Padding Dinâmico).")
    except FileNotFoundError:
        print(f"ERRO: O arquivo '{arquivo_csv_entrada}' não foi encontrado para o método de padding dinâmico.")


# --- 4. Função de Leitura e Execução Principal ---

def leitura_tamanho_fixo(arquivo_nome):
    """Lê o arquivo criado pelo método 1."""
    registros_lidos = []
    with open(arquivo_nome, 'r', encoding='utf-8') as f:
        TAM_REGISTRO = 60
        while True:
            bloco = f.read(TAM_REGISTRO).strip('\n')
            if not bloco:
                break
            nome = bloco[0:30].strip()
            estudio = bloco[30:55].strip()
            episodios = bloco[55:60].strip()
            registros_lidos.append({'nome': nome, 'estudio': estudio, 'episodios': episodios})
    return registros_lidos


def main():
    """
    Função principal que orquestra a execução de todas as tarefas.
    """
    arquivo_csv = 'animes.csv'
    
    # Carrega o dataset a partir do arquivo CSV
    dataset_carregado = carrega_animes(arquivo_csv)
    
    # Se o dataset não foi carregado (ex: arquivo não encontrado), para a execução.
    if dataset_carregado is None:
        return

    print("--- Iniciando a geração de arquivos (métodos do pseudo.pdf) ---")
    escrita_tamanho_fixo('animes_fixo.txt', dataset_carregado)
    escrita_qtde_campos('animes_campos.txt', dataset_carregado)
    escrita_qtde_bytes('animes_bytes.txt', dataset_carregado)
    escrita_arquivo_indices('animes_dados.txt', 'animes_indices.txt', dataset_carregado)
    escrita_delimitadores('animes_delimitador.txt', dataset_carregado)
    
    print("\n--- Iniciando a geração do arquivo (método de padding dinâmico) ---")
    escrita_padding_dinamico(arquivo_csv, 'metodo1.txt')
    
    print("\n--- Testando a leitura do arquivo 'animes_fixo.txt' ---")
    dados_lidos = leitura_tamanho_fixo('animes_fixo.txt')
    print("Conteúdo lido:")
    for registro in dados_lidos:
        print(registro)
        
    print("\n--- Processo finalizado com sucesso ---")


if __name__ == "__main__":
    main()