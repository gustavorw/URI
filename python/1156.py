s = 1
a = 3
b = 2

for i in range(1, 40):
    s = float(s + float(a) / float(b))
    a += 2
    b = b * 2

print('{:.2f}'.format(s))