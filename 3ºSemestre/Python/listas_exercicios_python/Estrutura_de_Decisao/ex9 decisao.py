#   pede ao usuario inserir um numero 3 vezes criando uma lista de inteiros de tamanho 3
x = [int(input('Digite um numero: ')) for n in range(3)]
#   reorganiza a lista usando a funcao sort() e faz com que seja do maior ao menor usando o reverse=True
x.sort(reverse=True)
#   imprime a lista
print(x)
