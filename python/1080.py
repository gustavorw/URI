maior = 0
pos = 0
for i in range(1, 11):
    val = int(input())
    if val > maior:
        maior = val
        pos = i

print('{}\n{}'.format(maior, pos))
