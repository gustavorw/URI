a = []

for i in range(100):
    a.append(float(input()))
    if a[i] <= 10.0:
        print('A[{}] = {:.1f}'.format(i, a[i]))
    
