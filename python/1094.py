def percentual(qtde, total):
    return (100 * qtde) / total

n = int(input())

c = r = s = 0
for i in range(n):
    val, tipo = input().split()
    qtde = int(val)
    
    if tipo == 'C':
        c += qtde
    if tipo == 'R':
        r += qtde
    if tipo == 'S':
        s += qtde
total = c + r + s
print('Total: {} cobaias'.format(total))
print('Total de coelhos: {}\nTotal de ratos: {}\nTotal de sapos: {}'.format(c, r, s))
print('Percentual de coelhos: {:.2f} %'.format(percentual(c, total)))
print('Percentual de ratos: {:.2f} %'.format(percentual(r, total)))
print('Percentual de sapos: {:.2f} %'.format(percentual(s, total)))
