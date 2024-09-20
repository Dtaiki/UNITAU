# -*- coding: utf-8 -*-
"""
Created on Sat Nov 11 20:52:10 2023

@author: ukita
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
#from sklearn.linear_model import Perceptron

# importando dataset iris
from sklearn import datasets
# obtendo os dados do dataset
irisdata = datasets.load_iris()
#
# transformando em um dataframe
iris = pd.DataFrame(irisdata.data)
iris.head()
#
# corrigindo nomes das colunas
iris.columns = irisdata.feature_names
iris.head()
#
# Adicionando a coluna Target (alvo) ao DataFrame
iris['target'] = irisdata.target
#
# Contando a quantidade de cada um dos targets
iris['target'].value_counts()
#
# Retirando Target = 2
iris = iris[iris.target != 2]
#
# Contando novamente a quantidade de cada um dos targets
iris['target'].value_counts()
#
# relação entre as variáveis
pd.plotting.scatter_matrix(iris)
#
# using seaborn
#
sns.pairplot(iris,hue='target')
#
# traçando um scatte das colunas 'petal length (cm)' e 'petal width'
fig, ax = plt.subplots()
#
x = iris['sepal length (cm)']
y = iris['sepal width (cm)']
#
ax.scatter(x, y, c=iris.target, cmap='seismic')
#
# construindo uma reta
x_reta = [4,7.25]
y_reta = [1.5,5.5]
ax.plot(x_reta, y_reta)
#
plt.show()
#
# CONSTRUIR OUTRAS RETAS
#-------------------------#
def reta_base(x):
    return -x + 3
#----------------------#
x_reta1 = np.arange(0,5)
y_reta1 = reta_base(x_reta1)
#.....
#
ax.plot(x_reta1, y_reta1, 'r-')
#
# colocando um ponto no grafico
#
# Criando um modelo de classificação
def classifica_modelo(x,y):
    y_equacao = -x + 3
    y_ponto = y
    #
    if y_ponto > y_equacao:
        return 1
    elif y_ponto < y_equacao:
        return 0
    else:
        return -1
#########################
#
# Agora vamos usar o Scikit-Learn
#
# importando o perceptron
from sklearn.linear_model import Perceptron
clf = Perceptron(tol=1e-3, random_state=0)
#
# Selecionando o X e o Y
Xclf = iris[['sepal length (cm)', 'sepal width (cm)']]
yclf = iris.target
#
# Fazendo o fit com o modelo
clf.fit(Xclf,yclf)
#
clf.coef_
#
clf.intercept_
#
# Com os coeficientes e o modelo perceptron podemos traçar a reta do modelo
#
# # Aqui fazemos o grafico de dispersão para os dados
fig, ax  =  plt.subplots()
ax.scatter(x, y, c = iris.target, cmap ='PiYG')
#
# Aqui estamos fazendo um grafico de uma reta manual
x_reta3 = np.arange(4,7.50,0.25)
y_reta3 = x_reta3 -2.3
ax.plot(x_reta3,y_reta3)
#
# Grafico de linha usando o modelo
x_perc = np.arange(4,7.50,0.25)
y_perc = (-clf.intercept_ - clf.coef_[0][0] * x_perc)/clf.coef_[0][1]
ax.plot(x_perc, y_perc, c = 'blue')
