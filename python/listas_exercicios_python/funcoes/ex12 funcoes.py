# importa uma biblioteca
import random


# funcao para embaralhar um palavra
def embaralha(palavra):
    # cria uma stirng com a palavra original separada por caractere
    nova = list(palavra)
    # embaralha os caracteres
    random.shuffle(nova)
    # junta os caracteres em uma nova string
    word = ''.join(nova)
    # imprime a palavra apos embaralhada
    print(word)


# pede para inserir uma palavra
x = input('Digite uma palavra: ')
# chama a funcao
embaralha(x)
