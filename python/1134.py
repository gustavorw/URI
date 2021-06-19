a = g = d = 0

while True:
    cod = int(input())
    
    if cod == 4:
        break
    elif cod == 1:
        a += 1
    elif cod == 2:
        g += 1
    elif cod == 3:
        d += 1

print('MUITO OBRIGADO\nAlcool: {}\nGasolina: {}\nDiesel: {}'.format(a, g, d))