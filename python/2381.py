n = input().split(' ')
sort = int(n[1])
n = int(n[0])
lista = []
while n:
    nome = input()
    lista.append(nome)
    n-=1
lista.sort()
print(lista[sort-1])