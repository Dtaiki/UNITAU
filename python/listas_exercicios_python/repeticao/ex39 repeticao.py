dic = {}
for n in range(10):
    numero = input('Digite o nome: ')
    altura = float(input('Insira a altura: '))
    dic.update({numero: altura})
alto = max(dic, key=lambda nome: dic[nome])
baixo = min(dic, key=lambda nome: dic[nome])
print(f'Aluno mais alto = {alto}, {dic[alto]}\nAluno mais baixo = {baixo}, {dic[baixo]}')
