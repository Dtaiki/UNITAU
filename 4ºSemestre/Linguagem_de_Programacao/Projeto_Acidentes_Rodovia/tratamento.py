import os
import pandas as pd


def savedf(dataframe):
    pastatratado = f'{pasta}\\dadostratados\\datatran{ano}.csv'
    dataframe.to_csv(pastatratado, sep=';', index=False)


def kmdf(dataframe):
    dataframe['km'] = dataframe['km'].str.replace(',', '.')
    dataframe['km'] = dataframe['km'].str.replace(r'\(null\)', '0')
    dataframe['km'] = pd.to_numeric(dataframe['km'], errors='coerce')
    dataframe = dataframe[dataframe['uf'] == 'SP']
    dataframe = dataframe[dataframe['br'] == '116']
    dataframe = dataframe[(dataframe['km'] >= 99) & (dataframe['km'] < 230)]
    dataframe = dataframe.dropna()
    savedf(dataframe)


def corrigirdf(dataframe):
    if ano == 2016:
        dataframe['data_inversa'] = pd.to_datetime(dataframe['data_inversa'], format='%d/%m/%y')
        dataframe['data_inversa'] = dataframe['data_inversa'].dt.strftime('%Y-%m-%d')
    else:
        dataframe['data_inversa'] = pd.to_datetime(dataframe['data_inversa'], format='%Y-%m-%d')
    kmdf(dataframe)


def leituradf():
    codificacoes = ['utf-8', 'latin1', 'iso-8859-1', 'cp1252']
    colunas = ['id', 'data_inversa', 'dia_semana', 'horario', 'uf', 'br', 'km',
               'municipio', 'causa_acidente', 'tipo_acidente',
               'classificacao_acidente', 'fase_dia', 'sentido_via',
               'condicao_metereologica', 'tipo_pista', 'tracado_via', 'uso_solo',
               'pessoas', 'veiculos']
    tipos_coluna = {
        'id': 'int64',
        'uf': 'object',
        'br': 'object',
        'km': 'object',
        'pessoas': 'int8',
        'veiculos': 'int8'
    }
    if os.path.exists(path):
        print(ano)
        if ano < 2016:
            for cod in codificacoes:
                try:
                    dataframe = pd.read_csv(path, sep=';', encoding=cod, usecols=colunas, dtype=tipos_coluna,
                                            index_col=None)
                    corrigirdf(dataframe)
                    break
                except UnicodeDecodeError:
                    pass
        else:
            try:
                dataframe = pd.read_csv(path, sep=';', encoding='iso-8859-1', usecols=colunas, dtype=tipos_coluna,
                                        index_col=None)
                corrigirdf(dataframe)
            except UnicodeDecodeError:
                pass
    else:
        print(f'Arquivo para o ano {ano} não encontrado.')


os.system('cls')
pasta = os.getcwd()
for ano in range(2007, 2023):
    path = f'{pasta}\\dados\\datatran{ano}.csv'
    leituradf()
print('fim')
