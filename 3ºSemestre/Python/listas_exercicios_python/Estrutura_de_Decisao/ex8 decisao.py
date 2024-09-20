#   cria uma lista
lista = []
#   comeca um loop de 3 repeticoes para pedir ao usuario inserir o nome do produto e o valor usando split para separar
for n in range(3):
    x = input('digite o produto e o valor (ex: "bolo 60"):\n').split()
#   insere a lista de 2 valores na lista principal
    lista = lista+x
#   encontra o produto com menor preco utilizando min() e seguindo a lista de 2 em 2 para encontrar apenas os precos
mi = min(lista[1::2])
#   imprime o nome do produto utilizando index do menor preco e o preco do produto
print(f'produto: {lista[lista.index(mi)-1]} {lista[lista.index(mi)]}')
