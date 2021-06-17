def insertion_sort(lista):
  for i in range( 1, len( lista ) ):
    chave = int(lista[i])
    k = i
    while k > 0 and chave < int(lista[k - 1]):
        lista[k] = lista[k - 1]
        k -= 1
    lista[k] = chave
n = input().split(' ')
insertion_sort(n)
print(n[len(n) - 1])