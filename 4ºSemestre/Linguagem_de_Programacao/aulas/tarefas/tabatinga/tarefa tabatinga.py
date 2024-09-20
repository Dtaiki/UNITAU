# -*- coding: utf-8 -*-
"""
Created on Sun Nov 12 14:31:02 2023

@author: ukita
"""
#%% bibliotecas
import os
import pandas as pd
import matplotlib.pyplot as plt

#%% pega o diretorio da pasta atual
path = os.getcwd()

#%% mostra u grafico com o conteudo do arquivo TABATINGA20230814Q.csv
tabatinga = pd.read_csv(f'{path}/TABATINGA20230814Q.csv')
tabatinga['DataHora'] = pd.to_datetime(tabatinga['DataHora'], format='%Y-%m-%d')
for coluna in tabatinga:
    if coluna != 'DataHora':
        plt.plot(tabatinga['DataHora'], tabatinga[coluna])
plt.xlabel('Dias')
plt.xticks(tabatinga['DataHora'][::5], rotation=45)
plt.ylabel('Nivel')
plt.title('Niveis Tabatinga')
plt.show()

#%% le o nivel do rio Tabatinga
# cria uma df vazia
dftotal = pd.DataFrame()
# le e adiciona linhas do mes 8 e adiciona na dftotal
for dia in range(13, 32):
    data = pd.read_csv(f'{path}/Qglofas_TABATINGA_202308{dia}.csv', sep=',')
    data['datetime'] = pd.to_datetime(data['datetime'], format='%Y-%m-%d')
    dftotal = pd.concat([dftotal, data], axis=0, ignore_index=True)
    for coluna in data:
        if coluna != 'datetime':
            plt.plot(data['datetime'], data[coluna], c='b')
# le e adiciona linhas do mes 9 e adiciona na dftotal
for dia in range(1, 14):
    if dia < 10:
        data = pd.read_csv(f'{path}/Qglofas_TABATINGA_2023090{dia}.csv', sep=',')
    else:
        data = pd.read_csv(f'{path}/Qglofas_TABATINGA_202309{dia}.csv', sep=',')
    data['datetime'] = pd.to_datetime(data['datetime'], format='%Y-%m-%d')
    dftotal = pd.concat([dftotal, data], axis=0, ignore_index=True)
    for coluna in data:
        if coluna != 'datetime':
            plt.plot(data['datetime'], data[coluna], c='g')
#%% faz a media do nivel de cada ponto
# cria uma lista vazia
niveis_media = []
# calcula a media diaria de cada rio e adiciona na lista
for mes in range(8,11):
    for dia in range(1,32):
        if dia==31 and mes==9:
            continue
        if mes == 8 and dia < 13:
            continue
        if mes == 10 and dia > 13:
            continue
        dfdia = dftotal[dftotal['datetime'] == f'2023-{mes:02d}-{dia:02d}']
        ponto = {'datetime': f'2023-{mes:02d}-{dia:02d}'}
        for coluna in dfdia:
            if coluna != 'datetime':
                dia_media = dfdia[coluna].mean()
                ponto[coluna] = dia_media
        niveis_media.append(ponto)
        # transforma a lista em uma df
dftotal = pd.DataFrame(niveis_media)
dftotal['datetime'] = pd.to_datetime(dftotal['datetime'], format='%Y-%m-%d')
#%% cria e mostra o grafico
for coluna in dftotal:
    if coluna != 'datetime':
        plt.plot(dftotal['datetime'], dftotal[coluna], c='r')
plt.xlabel('Dias')
plt.xticks(dftotal['datetime'][::5], rotation=45)
plt.ylabel('Nivel')
plt.title('Niveis Tabatinga')
plt.show()

#%% mostra o nivel do rio Tabatinga no mes 8
# le os aruivos do mes 8
print(data)
for dia in range(13, 32):
    data = pd.read_csv(f'{path}/Qglofas_TABATINGA_202308{dia}.csv', sep=',')
    data['datetime'] = pd.to_datetime(data['datetime'], format='%Y-%m-%d')
    for coluna in data:
        if coluna != 'datetime':
            plt.plot(data['datetime'], data[coluna], c='b')
# cria e mostra o grafico
plt.xlabel('Dias')
plt.xticks(rotation=45)
plt.ylabel('Nivel')
plt.title('Niveis Tabatinga mes 8')
plt.show()

#%% mostra o nivel do rio Tabatinga no mes 9
for dia in range(1, 14):
    if dia < 10:
        data = pd.read_csv(f'{path}/Qglofas_TABATINGA_2023090{dia}.csv', sep=',')
    else:
        data = pd.read_csv(f'{path}/Qglofas_TABATINGA_202309{dia}.csv', sep=',')
    data['datetime'] = pd.to_datetime(data['datetime'], format='%Y-%m-%d')
    for coluna in data:
        if coluna != 'datetime':
            plt.plot(data['datetime'], data[coluna], c='g')
# cria e mostra o grafico
plt.xlabel('Dias')
plt.xticks(rotation=45)
plt.ylabel('Nivel')
plt.title('Niveis Tabatinga mes 9')
plt.show()

#%% mostra a media dos niveis
for coluna in dftotal:
    if coluna != 'datetime':
        plt.plot(dftotal['datetime'], dftotal[coluna], c='r')
plt.xlabel('Dias')
plt.xticks(dftotal['datetime'][::5], rotation=45)
plt.ylabel('Nivel')
plt.title('Niveis Tabatinga')
plt.show()