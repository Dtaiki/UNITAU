cpf = input('digite um cpf: ')
if len(cpf) != 14:
    print('cpf invalido2')
    exit()
if cpf[3] != '.' and cpf[7] != '.' and cpf[11] != '-':
    print('cpf invalido1')
    exit()
for n in cpf:
    if n in ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '.', '-']:
        continue
    else:
        print('cpf invalido3')
        exit()
print(f'{cpf} e valido')
