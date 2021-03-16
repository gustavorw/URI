from math import sqrt
x = input().split()

a = float(x[0])
b = float(x[1])
c = float(x[2])

d = (b * b) - 4 * a *c
if d > 0 and a > 0:
    r1 = ((-b) + sqrt(d)) / (2 * a)
    r2 = ((-b) - sqrt(d)) / (2 * a)

    print('R1 = {:.5f}\nR2 = {:.5f}'.format(r1, r2))
else:
    print('Impossivel calcular')