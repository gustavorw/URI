import math
def despojado( numero):
    if numero == 1:
        return 0
    primo = 1
    i = 2
    while i <= math.sqrt(numero):
        if numero %(i*i) == 0:
            return 0
        if numero % i == 0:
            primo = 0
        i+=1
    return not(primo)
num = int(input())
cont = 0
x = 1
while x <= math.sqrt(num):
    if num % x == 0:
        cont+=despojado(x)
        if x != (num/x):
            cont+=despojado(num/x)
    x+=1
print(cont)
