import random


def palavra():
    with open('palavras.txt', 'r') as arquivo:
        conteudo = arquivo.read()
        palavras = conteudo.split()
        escolhido = palavras[random.randrange(0, len(palavras))]
        arquivo.close()
    return escolhido.upper()


def embaralha(word):
    word = list(word)
    random.shuffle(word)
    word = ''.join(word)
    return word


word = palavra()
emb = embaralha(word)
cont = 6
print(word)
print(emb)
while cont > 0:
    res = input('digite a palavra correta: ').upper()
    if res == word:
        print('parabens voce ganhou')
        break
    else:
        cont -= 1
        if cont == 0:
            print('voce perdeu')
        else:
            print('tente novamente')
