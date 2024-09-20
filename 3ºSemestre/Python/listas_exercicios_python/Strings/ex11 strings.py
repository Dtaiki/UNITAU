import random


def palavra():
    with open('palavras.txt', 'r') as arquivo:
        conteudo = arquivo.read()
        palavras = conteudo.split()
        escolhido = palavras[random.randrange(0, len(palavras))]
        arquivo.close()
    return escolhido.upper()


def resposta(palavra, certas):
    print('A palavra é: ', end='')
    for n in range(len(palavra)):
        if certas[n]:
            print(palavra[n], end=' ')
        else:
            print('_', end=' ')
    print()


word = palavra()
certas = [False]*len(word)
cont = 0
acerto = 0
erro = acerto
print(word)
while cont < 6:
    x = input('Digite uma letra: ').upper()
    for n in range(len(word)):
        if x == word[n]:
            certas[n] = True
            acerto += 1
    if acerto == erro:
        cont += 1
        if cont == 6:
            print('voce perdeu')
        print(f'-> Você errou pela {cont}ª vez. Tente de novo!')
        continue
    erro = acerto
    resposta(word, certas)
