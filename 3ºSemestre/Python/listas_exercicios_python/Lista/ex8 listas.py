# cria uma lista vazia
dados = []
# loop para inserir dados no final da lista
for n in range(5):
    idade = int(input(f'Digite a idade da pessoa {n+1}: '))
    altura = float(input(f'Digite a altura da pessoa {n + 1}: '))
    dados.append([idade, altura])
# imprime a lista do final para o comeco
print(dados[::-1])
