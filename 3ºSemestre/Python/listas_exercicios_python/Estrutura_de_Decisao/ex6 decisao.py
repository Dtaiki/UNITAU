#   pede para o usuario inserir um valor 3 vezes, criando uma lista de inteiros com tamanho 3
x = [int(input('Digite tres valores: ')) for n in range(3)]
#   encontra o maior numero da lista usando a funcao max() e imprime
print(max(x))
