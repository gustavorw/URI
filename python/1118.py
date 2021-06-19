soma = cont = 0

while True:
    nota = float(input())
    
    if nota < 0 or nota > 10:
        print('nota invalida')
    else:
        soma += nota
        cont += 1
        
        if cont == 2:
            print('media = {:.2f}'.format(soma / cont))
            
            while True:
                print('novo calculo (1-sim 2-nao)')
                x = int(input())
                
                if x == 1 or x == 2:
                    break
                
            soma = cont = 0
            
            if x == 2:
                break
