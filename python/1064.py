cont = 0
soma = 0

for i in range(6):
    num = float(input())
    if num > 0:
        cont += 1
        soma += num
print('{} valores positivos'.format(cont))
print('{:.1f}'.format(soma / cont))