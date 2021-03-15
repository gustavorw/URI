ax, bax, cax= list(map(float,input().split()))

if ax > 0 or bax > 0 or cax > 0:
    if ax >= bax and ax >= cax:
        a = ax
        if bax >= cax:
            b, c = bax, cax
        else:
            b, c = cax, bax
    if bax >= ax and bax >= cax:
        a = bax
        if ax >= cax:
            b, c = ax, cax
        else:
            b, c = cax, ax
    if  cax>= ax and cax >= bax:
        a = cax
        if ax >= bax:
            b, c = ax, bax
        else:
            b, c = bax, ax 
    if ax == bax and bax == cax:
        a, b, c = ax, bax, cax
    
    if a >= b + c:
        print('NAO FORMA TRIANGULO')
    else:
        if a * a == (b * b + c * c):
            print('TRIANGULO RETANGULO')
        if a * a > (b * b + c * c):
            print('TRIANGULO OBTUSANGULO')
        if a * a < (b * b + c * c):
            print('TRIANGULO ACUTANGULO')
        if a == b == c:
            print('TRIANGULO EQUILATERO')
        if (a == b and a != c) or (a == c and c != b) or (b == c and b != a):
            print('TRIANGULO ISOSCELES')