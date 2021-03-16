x = input().split()

hi = int(x[0])
mi = int(x[1])
hf = int(x[2])
mf = int(x[3])

if hf == hi and mf == mi:
    print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)')
else:
    hf = hf - hi
    mf = mf - mi

    if hf < 0:
        hf += 24
    if mf < 0:
        mf += 60
        hf -= 1
    print('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(hf, mf))