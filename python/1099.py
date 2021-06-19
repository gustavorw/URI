val = int(input())

for i in range(val):
    x, y = list(map(int, input().split()))
    
    soma = 0
    if x == y:
        soma = 0
    if x < y:
        for j in range(x + 1, y):
            if j % 2 != 0:
                soma += j
    if x > y:
        for j in range(y + 1, x):
            if j % 2 != 0:
                soma += j
    
    print(soma)