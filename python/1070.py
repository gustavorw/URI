x = int(input())
cont = 0
i = x 
while i >= x:
    if i % 2 != 0:
        print(i)
        cont += 1
        if cont == 6:
            break
    i += 1

    