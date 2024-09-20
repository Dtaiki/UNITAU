qnt = int(input('digite a quantidade de eleitores: '))
print('Numero do candidato / candidato\n1 para candidato 1\n2 para candidato 2\n3 para candidato 3')
votos = {'candidato1': 0, 'candidato2': 0, 'candidato3': 0}
for n in range(qnt):
    voto = int(input('Digite o numero do seu candidato: '))
    if voto == 1:
        votos['candidato1'] = votos['candidato1'] + 1
    elif voto == 2:
        votos['candidato2'] = votos['candidato2'] + 1
    elif voto == 3:
        votos['candidato3'] = votos['candidato3'] + 1
    else:
        print('esse candidato nao existe')
vencedor = max(votos, key=votos.get)
print(f'O vencedor e o {vencedor} com {votos[vencedor]} votos')
