n = int(input())

i = 1
while i <= n:
    print('{} {} {}'.format(i, i * i, i * i * i))
    print('{} {} {}'.format(i, (i * i) + 1, (i * i * i) + 1))
    i += 1