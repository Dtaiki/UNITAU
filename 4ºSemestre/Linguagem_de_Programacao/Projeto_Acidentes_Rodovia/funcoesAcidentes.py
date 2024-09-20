# -*- coding: utf-8 -*-
"""
Created on Thu Nov 23 15:10:20 2023

@author: ukita
"""
import os
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np


def grafico_de_picos(df, legenda):
    kms = np.arange(99, 230)
    hrs = np.arange(0, 24)
    z = np.zeros((len(kms), len(hrs)))

    for i, km in enumerate(kms):
        for j, hora in enumerate(hrs):
            filtro = (df['km'] >= km) & (df['km'] < km + 1) & (df['horario'] >= f'{hora:02d}:00:00') & (
                    df['horario'] < f'{hora + 1:02d}:00:00')
            z[i, j] = len(df[filtro])
            
    x, y = np.meshgrid(hrs, kms)
    kms = np.arange(99, 230, 5)
    
    plt.contour(y, x, z, cmap='jet')
    plt.colorbar()
    plt.grid(True)
    plt.title(f'Picos de Acidentes x Kms({legenda})')
    plt.xlabel('Kms')
    plt.xticks(kms, rotation='vertical')
    plt.ylabel('Horas')
    plt.yticks(hrs)


def graficohr_linha_hr(df, legenda, cor, filt):
    listaHorarios = []
    hr = [h for h in range(24)]

    for x in range(0, 24):
        filtro = (df['horario'] >= f'{x:02d}:00:00') & (df['horario'] < f'{x + 1:02d}:00:00')
        listaHorarios.append(df[filtro])
        hrlens = [len(hora) for hora in listaHorarios]
    if filt['linhas_grafico'] != 1:
        plt.plot(hr, hrlens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
    else:
        if filt['anos'][0] ==  filt['anos'][1]:
            plt.plot(hr, hrlens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
        else:
            legenda = f'{filt["anos"][0]}~{filt["anos"][1]}'
            plt.plot(hr, hrlens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=f'{filt["anos"][0]}~{filt["anos"][1]}')
    
    plt.tight_layout()
    plt.legend()
    plt.grid(True)
    plt.title(f'Acidentes por Horas({filt["nomes"][0]}, {filt["nomes"][1]}, {filt["nomes"][2]})')
    plt.xlabel('Horas')
    plt.xticks(hr)
    plt.ylabel('Quantidade de acidentes')
    plt.legend()
       
     
def graficohr_barra_hr(df, legenda, cor, filt):
    listaHorarios = []
    hr = [h for h in range(24)]

    for x in range(0, 24):
        filtro = (df['horario'] >= f'{x:02d}:00:00') & (df['horario'] < f'{x + 1:02d}:00:00')
        listaHorarios.append(df[filtro])
    hrlens = [len(hora) for hora in listaHorarios]
    if filt['linhas_grafico'] == 1:
        plt.bar(hr, hrlens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
    else:
        if filt['anos'][0] ==  filt['anos'][1]:
            plt.bar(hr, hrlens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
        else:
            legenda = f'{filt["anos"][0]}~{filt["anos"][1]}'
            plt.bar(hr, hrlens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=legenda)
    
    plt.tight_layout()
    plt.legend()
    plt.grid(True)
    plt.title(f'Acidentes por Horas({filt["nomes"][0]}, {filt["nomes"][1]}, {filt["nomes"][2]})')
    plt.xlabel('Horas')
    plt.xticks(hr)
    plt.ylabel('Quantidade de acidentes')
    plt.legend()


def grafico_linha_km(df, legenda, cor, filt):
    dflens = []
    kms = [km for km in range(99, 230)]
    for km in kms:
        dfaux = df[(df['km'] >= km) & (df['km'] < km + 1)]
        dflens.append(len(dfaux))
    if filt['linhas_grafico'] != 1:
        plt.plot(kms, dflens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
    else:
        if filt['anos'][0] ==  filt['anos'][1]:
            plt.plot(kms, dflens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
        else:
            legenda = f'{filt["anos"][0]}~{filt["anos"][1]}'
            plt.plot(kms, dflens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=f'{filt["anos"][0]}~{filt["anos"][1]}')
    kms = np.arange(99, 231, 5)

    plt.tight_layout()
    plt.legend()
    plt.grid(True)
    plt.title(f'Acidentes por Quilômetro({filt["nomes"][0]}, {filt["nomes"][1]}, {filt["nomes"][2]})')
    plt.xlabel('Kms')
    plt.xticks(kms)
    plt.ylabel('Quantidade de acidentes')
    

def grafico_barra_km(df, legenda, cor, filt):
    dflens = []
    kms = [km for km in range(99, 230)]

    for km in kms:
        dfaux = df[(df['km'] >= km) & (df['km'] < km + 1)]
        dflens.append(len(dfaux))
    if filt['linhas_grafico'] != 1:
        plt.bar(kms, dflens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
    else:
        if filt['anos'][0] ==  filt['anos'][1]:
            plt.bar(kms, dflens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=str(legenda))
        else:
            legenda = f'{filt["anos"][0]}~{filt["anos"][1]}'
            plt.bar(kms, dflens, color=(cor[0] / 255, cor[1] / 255, cor[2] / 255), label=f'{filt["anos"][0]}~{filt["anos"][1]}')
    kms = np.arange(99, 231, 5)

    plt.tight_layout()
    plt.legend()
    plt.grid(True)
    plt.title(f'Acidentes por Quilômetro({filt["nomes"][0]}, {filt["nomes"][1]}, {filt["nomes"][2]})')
    plt.xlabel('Kms')
    plt.xticks(kms)
    plt.ylabel('Quantidade de acidentes')


def separa(df, filtros):
    climas = ('Sol', 'Nublado', 'Ceu Claro', '(null)', 'Ignorada', 'Vento', 'Céu Claro', 'Ignorado')
    final_semana = ('Sábado', 'Domingo', 'sábado', 'domingo')
    dfaux = df.copy()
    if filtros['filtro_clima'] == 1:
        dfaux = dfaux[~dfaux['condicao_metereologica'].isin(climas)]
    elif filtros['filtro_clima'] == 2:
        dfaux = dfaux[dfaux['condicao_metereologica'].isin(climas)]
    if filtros['filtro_sentido'] == 1:
        dfaux = dfaux[dfaux['sentido_via'] != 'Decrescente']
    elif filtros['filtro_sentido'] == 2:
        dfaux = dfaux[dfaux['sentido_via'] == 'Decrescente']
    if filtros['filtro_semana'] == 1:
        dfaux = dfaux[~dfaux['dia_semana'].isin(final_semana)]
    elif filtros['filtro_semana'] == 2:
        dfaux = dfaux[dfaux['dia_semana'].isin(final_semana)]
    return dfaux


def le_arquivos(ano):
    tipos = {
        'horario': 'str',
        'pessoas': 'int8',
        'veiculos': 'int8'
    }
    pasta = os.getcwd()
    dfano = pd.read_csv(f'{pasta}\\dadostratados\\datatran{str(ano)}.csv', sep=';', dtype=tipos)
    dfano['data_inversa'] = pd.to_datetime(dfano['data_inversa'])
    return dfano


def escolhas():
    tipo_do_grafico = [0, 0]
    anos = [0, 0]
    """
    anos[0] = int(input('\nDigite os ano de inicio(2007~2022): '))
    if anos[0] < 2007:
        print('Escolha fora do range.')
        escolhas()
    anos[1] = int(input('Digite os ano final(2007~2022): '))
    if (anos[1] > 2022) or (anos[0] > anos[1]):
        print('Escolha fora do range ou maior que o ano inicial.')
        escolhas()
    tipo_do_grafico[0] = int(input('\nFormato do grafico\n1 - Linhas\n2 - Barras\n3 - Contornos\nEscolha: '))
    if 1 < tipo_do_grafico[0] > 3:
        print('Escolha fora do range.')
        escolhas()
    if tipo_do_grafico[0] != 3:
        tipo_do_grafico[1] = int(input('\nTipo do grafico\n1 - Acidentes x Kms\n2 - Acidentes x Hrs\nEscolha: '))
        if 1 < tipo_do_grafico[1] > 2:
            print('Escolha fora do range.')
            escolhas()
        linhas_grafico = int(input('\nLinhas do grafico por ano\n1 - Linhas separadas por ano\n2 - Apenas umas linha total\nEscolha: '))
        if 1 < linhas_grafico > 2:
            print('Escolha fora do range.')
            escolhas()
    else:
        linhas_grafico = 2
    filtro_clima = int(input('\nFiltro de clima\n1 - Dias chuvosos\n2 - Dias sem chuva\n3 - Todos os dias\nEscolha: '))
    if 1 < filtro_clima > 3:
        print('Escolha fora do range.')
        escolhas()
    filtro_sentido = int(input('\nFiltro do sentido da via\n1 - Crescente\n2 - Decrescente\n3 - Todos os sentidos\nEscolha: '))
    if 1 < filtro_sentido > 3:
        print('Escolha fora do range.')
        escolhas()
    filtro_semana = int(input('\nFiltro da semana\n1 - Dias da semana(segunda~sexta)\n2 - Finais de semana(sabado e domingo)\n3 - Todos os dias\nEscolha: '))
    if 1 < filtro_semana > 3:
        print('Escolha fora do range.')
        escolhas()
    if tipo_do_grafico[0] != 3:
        mostrar_grafico = int(input('\n1 - Mostrar grafico\n2 - Sobrepor mais um grafico\nEscolha: '))
        if 1 < mostrar_grafico > 2:
            print('Escolha fora do range.')
            escolhas()
    """
    tipo_do_grafico = [2,2]
    linhas_grafico = 2
    filtro_clima = 3
    filtro_sentido = 3
    filtro_semana = 3
    mostrar_grafico = 1
    anos = [2007, 2012]
    filtro_nomes = [['Dias chuvosos', 'Dias sem chuva', 'Dias com e sem chuva'], ['crescente', 'decrescente', 'todos os sentidos'], ['dias da semana(segunda~sexta)', 'finais de semana(sabado e domingo)', 'todos os dias']]
    nomes = [filtro_nomes[0][filtro_clima-1], filtro_nomes[1][filtro_sentido-1], filtro_nomes[2][filtro_semana-1]]
    return tipo_do_grafico, linhas_grafico, filtro_clima, filtro_sentido, filtro_semana, mostrar_grafico, anos, nomes
