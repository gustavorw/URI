par = 0

for i in range(5):
    num = float(input())
    if num % 2 == 0:
        par += 1
print('{} valores pares'.format(par))