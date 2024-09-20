# cria lista vazia
lista = []
# loop para inserir valores
while True:
    x = int(input('Insira um valor: '))
    # caso o valor inserido seja 0 sai do loop
    if x < 0:
        break
    # insere o valor no final da lista
    lista.append(x)
# imprime dados sobre a lista, e a lista ao contrario e normal
print(len(lista))
print(lista)
print(lista[::-1])
print(sum(lista))
print(sum(lista)/len(lista))
# cria mais duas listas
maior = []
menor = []
# loop para dividir os numeros abaixo de 7 e acima da media da lista inicial
for n in lista:
    if n > sum(lista)/len(lista):
        maior.append(n)
    if n < 7:
        menor.append(n)
# imprime o resultado
print(maior)
print(menor)
print('Fim')
