#   pede para o usuario inserir um valor 3 vezes, criando uma lista de inteiros com tamanho 3
x = [int(input('Digite tres valores: ')) for n in range(3)]
#   enconta o maior valor usando a funcao max() e a menor usando min() e imprime ambas
print(f'maior = {max(x)}\nmenor = {min(x)}')
