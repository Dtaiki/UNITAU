#   comeca um loop com infinitas repeticoes
while True:
    #   pede ao usuario inserir um valor
    sal = int(input('Digite o valor do salario: '))
    #   estrutura de decisao para decidir como sera reajustado o salario
    if sal <= 280:
        #   define a porcentagem e o valor final do reajuste
        reajuste = 0.2
        salreajuste = sal + sal * reajuste
    elif sal < 700:
        reajuste = 0.15
        salreajuste = sal + sal * reajuste
    elif sal < 1500:
        reajuste = 0.10
        salreajuste = sal + sal * reajuste
    else:
        reajuste = 0.5
        salreajuste = sal + sal * reajuste
    #   imprime os dados do reajuste salarial
    print(f'Salario antigo: {sal}\nPercentual do aumento: {reajuste*100}%\nValor do aumento: {salreajuste-sal}\n'
          f'Novo salario: {salreajuste}\n')
