cont = soma = 0
while True:
    nota = float(input())
    
    if nota < 0 or nota > 10:
        print('nota invalida')
    else:
        soma += nota
        cont += 1
        if cont == 2:
            break

print('media = {}'.format(soma / cont))