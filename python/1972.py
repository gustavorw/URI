n = int(input())

dentro = fora = 0

for i in range(n):
    x = int(input())
    if x >= 10 and x <= 20:
        dentro += 1
    else:
        fora += 1

print('{} in\n{} out'.format(dentro, fora))