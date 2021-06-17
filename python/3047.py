def mais_velho(a, b, c):
    if a > b and a > c:
        return a
    elif b > a and b > c:
        return b
    return c

if __name__ == '__main__':
    m = int(input())
    a = int(input())
    b = int(input())

    c = m - (a + b)
    r = mais_velho(a, b, c)
    print(r)
