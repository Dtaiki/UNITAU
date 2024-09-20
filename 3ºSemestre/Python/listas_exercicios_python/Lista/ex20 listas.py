# lista com o nome dos carros
carros = ['Ford Bronco Sport', 'Chevrolet Equinox', 'Jeep Renegade', 'Mitsubishi Eclipse Cross', 'Ford Territory']
# lista com o consumo de cada carro
lph = [8.6, 9, 9, 9.1, 9.4]
# loop para imprimir os dados dos carros
for n in range(len(carros)):
    print(f'Veículo {n+1}')
    print(f'Nome: {carros[n]}')
    print(f'Km por litro: {lph[n]}')
print('\nRelatório Final')
# loop para imprimir e calcular qual carro e mais economico em uma viagem de 1000km
for n in range(len(carros)):
    print(f'{n+1} - {carros[n]:<10} - {lph[n]:>6} - {1000/lph[n]>6} litros - R$ {(1000/lph[n]>6)*2.25}')
print(f'O menor consumo é do {carros[lph.index(max(lph))]}.')
