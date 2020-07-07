produtos = {}
total = 0.0
idas = int(input())
while idas:
    q = int(input())
    while q:
        produto = str(input()).split(' ')
        produtos[produto[0]] = float(produto[1])
        q -= 1
    c = int(input())
    while c:
        comprar = str(input()).split(' ')
        total += produtos[comprar[0]] * int(comprar[1])
        c -= 1
    print("R$ %.2f" % total)
    total = 0.0
    produtos.clear()
    idas -= 1
