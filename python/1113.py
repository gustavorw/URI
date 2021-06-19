while True:
    x, y = list(map(int, input().split()))
    
    if x == y:
        break
    elif x < y:
        print('Crescente')
    else:
        print('Decrescente')