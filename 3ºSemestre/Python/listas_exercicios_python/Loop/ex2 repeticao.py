nome = input('Digite seu nome: ').split()
while True:
    senha = input('Digite sua senha: ').split()
    if set(senha) & set(nome):
        continue
    else:
        break
