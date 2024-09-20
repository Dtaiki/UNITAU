# cria 2 listas com 10 numeros e uma vazia
lista1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
lista2 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
lista3 = []
# loop para adicionar as listas no final da lista vazia
for n in range(10):
    lista3.append(lista1[n])
    lista3.append(lista2[n])
