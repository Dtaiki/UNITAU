# lista com as vogais
vogais = ['A', 'E', 'I', 'O', 'U']
# pede para digitar uma palavra
word = input('Digite uma palavra de 10 letras: ')
# cria um contador
con = 0
# loop para contar apelas 10 letras
for n in word[:10]:
    # transforma o caractere em maiusculo e compara com a lista de vogais, caso nao esteja na lista adiciona +1 no
    # contador e imprime a consoante
    if n.upper() in vogais:
        continue
    else:
        print(n)
        con += 1
# imprime o total de consoantes na palavra
print(con)
