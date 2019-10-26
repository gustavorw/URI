n = int(input())
while n:
    t = input()
    n1 = int(t[0])
    n2 = int(t[2])
    l  = t[1]
    if n1 == n2:
        print(n1 * n2)
    elif l.isupper():
        print(n2-n1)
    else:
        print(n1 + n2)
    n = n - 1
    