s = input()
cont = 1
while True:
    print(s[:len(s)-cont])
    cont += 1
    if cont == len(s)+1:
        break
