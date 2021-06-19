par = imp = pos = neg = 0

for i in range(5):
    num = int(input())
    if num % 2 == 0:
        par += 1
    if num % 2 != 0:
        imp += 1
    if num > 0:
        pos += 1
    if num < 0:
        neg += 1

print('{} valor(es) par(es)\n{} valor(es) impar(es)\n{} valor(es) positivo(s)\n{} valor(es) negativo(s)'.format(par, imp, pos, neg))