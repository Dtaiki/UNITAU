# importa funcao random da biblioteca
import random


# funcao para retornar um valor numerico aleatorio
def jogadado():
    input('jogue o dado novamente ')
    return random.randint(2, 12)


# pede para um botao para comecar o jogo
input('Comecar o jogo ')
# cria o seu numero aleatoriamente
res = random.randint(2, 12)
# decide se voce ganhou, perdeu ou tem outra chance
if res == 7 or res == 11:
    print(f'{res}, voce ganhou')
elif res in [2, 3, 12]:
    print(f'{res}, voce perdeu')
else:
    # imprime seu numero
    print(res)
    # entra em um loop para jogar dados ate ganhar ou perder
    while True:
        # chama uma funcao e atribui o retorno em uma variavel
        jogo = jogadado()
        print(jogo)
        # decide se perdeu, ganhou ou tem outra chance
        if jogo == 7:
            print(f'{jogo}, perdeu')
            break
        elif jogo == res:
            print(f'{jogo}, ganhou')
            break
