#   pede ao usuario inserir um numero 3 vezes criando uma lista de inteiros de tamanho 3
notas = [int(input('Digite uma nota: ')) for n in range(3)]
#   calcula a media dos valores da lista usando sum() e dividindo pela quantidade de valores da lista usando len()
media = sum(notas)/len(notas)
#   decide qual e a situacao do aluno decidindo se a nota e igual a 10, maior ou igual a 7 e caso nao seja nenhuma
#   dessas opcoes o aluno e reprovado
if media == 10:
    print('Aprovado com Distinção')
elif media >= 7:
    print('Aprovado')
else:
    print('Reprovado')
