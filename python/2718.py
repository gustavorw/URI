def lampadas_Queimadas(n):
    sequencia = []
    cont = 0
    binario = bin(n)
    n2 = len(binario)-1
    while n2 >=0:
        if binario[n2] == '1':
            cont+=1
        else:
            sequencia.append(cont)
            cont = 0
        n2-=1
    return max(sequencia)

n = int(input())
cont = 0
while n:
    lam = int(input())
    print(lampadas_Queimadas(lam))
    n-=1
