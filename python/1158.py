n = int(input())

for i in range(n):
    x = input().split()

    a = int(x[0])
    b = int(x[1])
    soma = 0

    if a % 2 == 0:
        a += 1
    

    for i in range(b):
        soma += a
        a += 2
    
    print(soma)


