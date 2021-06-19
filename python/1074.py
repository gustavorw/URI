n = int(input())

for i in range(n):
    x = int(input())
    if x == 0 :
        print('NULL')
    if x < 0 and x % 2 != 0:
        print('ODD NEGATIVE')
    if x < 0 and x % 2 == 0:
        print('EVEN NEGATIVE')
    if x > 0 and x % 2 != 0:
        print('ODD POSITIVE')
    if x > 0 and x % 2 == 0:
        print('EVEN POSITIVE')