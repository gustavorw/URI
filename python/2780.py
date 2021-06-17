def result(n):
    if(n <= 800):
        return 1
    elif(n > 800 and n <= 1400):
        return 2
    else:
        return 3


d = int(input())
print(result(d))
