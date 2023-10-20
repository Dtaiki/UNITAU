# lista com o nome dos sistemas
sistemas = ['Windows Server', 'Unix          ', 'Linux         ', 'Netware       ', 'Mac OS        ', 'Outro         ']
# lista com 6 casas
votos = [0]*6
# cria um loop para inserir votos ate o voto ser 0
while True:
    voto = int(input('insira o numero do voto: '))
    if voto == 0:
        break
    # caso o voto esteja fora do range imprime uma mensagem
    elif 0 > voto > 6:
        print('voto invalido')
        continue
    # adiciona +1 na casa do voto
    votos[voto-1] += 1
por = []
# loop para calcular a porcentagem de votos
for n in range(len(sistemas)):
    por.append(votos[n]*100/sum(votos))
print('-------------------          -----          ---')
print('Sistema Operacional          Votos          %')
# imprime os dados finais
for n in range(len(sistemas)):
    print(f'{sistemas[n]}               {votos[n]}              {por[n]}')
print('-------------------          -----          ---')
print(f'Total          {len(votos)}')
