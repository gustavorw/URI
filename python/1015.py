import math
x = input().split()
x1 = float(x[0])
y1 = float(x[1])
y = input().split()
x2 = float(y[0])
y2 = float(y[1])

print('{:.4f}'.format(math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)))