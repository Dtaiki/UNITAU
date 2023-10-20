s = input()
cont = 0
while True:
    print(s[:cont])
    cont += 1
    if cont == len(s)+1:
        break
