positivos = 0

for i in range(6):
    num = float(input())
    if num > 0:
        positivos += 1

print('{} valores positivos'.format(positivos))