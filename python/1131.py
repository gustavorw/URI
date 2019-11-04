vgremio = 0
vInter = 0
emp = 0
cont = 0

while True:
    golInter, golgremio = list(map(int,input().split()))
    
    if golInter > golgremio:
        vInter += 1
    elif golgremio > golInter:
        vgremio += 1
    else:
        emp += 1
    cont += 1
    
    print('Novo grenal (1-sim 2-nao)')
    n = int(input())
    if n == 2:
        break
    
print('{} grenais'.format(cont))
print('Inter:{}'.format(vInter))
print('Gremio:{}'.format(vgremio))
print('Empates:{}'.format(emp))

if vInter > vgremio:
    print('Inter venceu mais')
elif vgremio > vInter:
    print('Gremio venceu mais')
else:
    print('Nao houve vencedor')
