#   pede para o usuario inserir uma nota 2 vezes criando uma lista de tamanho 2
nota = [int(input('Digite uma nota: ')) for n in range(2)]
#   decide qual o nivel de aprovacao do aluno utilizando a funcao sun() para somar as notas da lista feita anteriormente
if sum(nota) == 10:
    print('Aprovado com Distinção')
elif sum(nota) > 7:
    print('Aprovado')
else:
    print('Reprovado')
