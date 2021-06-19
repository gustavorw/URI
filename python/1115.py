while True:
    x, y = list(map(int, input().split()))
    
    if x == 0 or y == 0:
        break
    elif x > 0 and y > 0:
        print('primeiro')
    elif x > 0 and y < 0:
        print('quarto')
    elif x < 0 and y > 0:
        print('segundo')
    elif x < 0 and y < 0:
        print('terceiro')