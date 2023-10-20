# cria uma lista vazia
alunos = []
# cria uma variavel = 0
medias = 0
# cria um loop
for n in range(10):
    # cria uma lista que pede 4 notas
    notas = [int(input(f'Nota {nota} do aluno {n}: ')) for nota in range(4)]
    # calcula se a media e maior que 7, caso seja acrescenta +1 na variavel contador medias
    if sum(notas)/4 >= 7:
        medias += 1
    # adiciona a lista com notas no final da lista de alunos
    alunos.append(notas)
# imprime a quantidade de alunos acima da media
print(f'{medias} alunos ficaram acima da media')
