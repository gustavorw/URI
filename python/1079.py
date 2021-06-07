n = int(input())

for i in range(n):
    a, b, c = list(map(float, input().split()))
    media = (a * 2 + b * 3 + c * 5) / 10
    print('{:.1f}'.format(media))
    