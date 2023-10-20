x = input('digite uma palavra: ')
y = x[::-1]
if x == y:
    print(f'{x} e um palindromo')
else:
    print(f'{x} nao e um palindromo')
