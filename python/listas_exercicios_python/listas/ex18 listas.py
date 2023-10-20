# lista com 23 casas para armazenar votos
jogadores = [0]*23
votos = []
# loop para inserir os votos
while True:
    x = int(input('Digite a camisa do jogador: '))
    # caso a camisa seja 0 sai do loop de votos
    if x == 0:
        break
    # ignora o voto caso a camisa nao esteja no range desejado
    elif 0 > x > 23:
        print('Camisa inexistente')
        continue
    # adiciona o numero do voto no final da lista
    votos.append(x)
    # adiciona +1 na lista de votos
    jogadores[x] += 1
# variavel com a quantidade de votos
qnt = len(votos)
# imprime a quantidade de votos
print(qnt)
# loop para imprimir os jogadores e seu voto caso nao seja 0
for n in range(len(jogadores)):
    if jogadores[n] != 0:
        print(f'jogador {n} = {jogadores[n]}')
# lista com 23 casas para calculo da porcentagem
per = [0]*23
# loop para calcular a porcentagem de votos dos jogadores
for n in range(len(jogadores)):
    if jogadores[n] != 0:
        per[n] = jogadores[n] / len(votos) * qnt
# variavem com o numero da casa do melhor jogador
melhor = jogadores[jogadores.index(max(jogadores))]
# imprimer os resultados finais
print(melhor, max(jogadores), max(per))
