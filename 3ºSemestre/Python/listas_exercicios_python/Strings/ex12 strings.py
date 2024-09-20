x = input('digite um numero de telefone: ')
while True:
    if '-' in x:
        if len(x) < 9:
            x = '3' + x
        else:
            x = list(x)
            x.remove('-')
            x = ''.join(x)
            x = x[:4]+'-'+x[4:]
            break
    else:
        print('a')
        if len(x) < 8:
            x = '3' + x
        else:
            break
print(x)
