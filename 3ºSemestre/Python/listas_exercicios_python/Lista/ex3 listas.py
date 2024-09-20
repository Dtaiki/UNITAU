# cria uma lista que pede para inserir um numero 4 vezes
lista = [float(input('insira um numero: ')) for n in range(4)]
# imprime a lista e a media da lista calculando o total e dividindo pelo tamanho da lista
print(f'lista = {lista}, media = {sum(lista)/len(lista)}')
