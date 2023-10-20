lista = []
while True:
    x = int(input('Digite um numero: '))
    if x < 0:
        break
    lista.append(x)
cont = [0, 0, 0, 0]
for n in lista:
    if 0 <= n <= 25:
        cont[0] += 1
    elif 26 <= n <= 50:
        cont[1] += 1
    elif 51 <= n <= 75:
        cont[2] += 1
    elif 76 <= n <= 100:
        cont[3] += 1
print(f'[0-25] = {cont[0]}\n[26-50] = {cont[1]}\n[51-75] = {cont[2]}\n[76-100] = {cont[3]}')
