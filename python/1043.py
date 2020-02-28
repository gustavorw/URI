aux = input().split()

a, b, c = aux
a = float(a)
b = float(b)
c = float(c)

if a + b > c and a + c > b and b + c > a:
    print('Perimetro = {:.1f}'.format(a + b +c))
else:
    print('Area = {:.1f}'.format(((a + b) * c) / 2))

