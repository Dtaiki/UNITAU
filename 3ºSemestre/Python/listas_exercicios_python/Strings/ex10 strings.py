lista = ['Zero', 'Um', 'Dois', 'Três', 'Quatro', 'Cinco', 'Seis', 'Sete', 'Oito', 'Nove', 'Dez', 'Onze', 'Doze',
         'Treze', 'Quatorze', 'Quinze', 'Dezesseis', 'Dezessete', 'Dezoito', 'Dezenove', 'Vinte', 'Trinta', 'Quarenta',
         'Cinquenta', 'Sessenta', 'Setenta', 'Oitenta', 'Noventa']
x = input('digite um numero de 0 a 99: ')
if int(x) < 21:
    print(lista[int(x)])
else:
    if int(x) % 10 == 0:
        print(lista[int(x[0])+18])
    else:
        print(f'{lista[int(x[0])+18]} e {lista[int(x[1])]}')
