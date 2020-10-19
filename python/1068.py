

def analisar_expressao(s):
    p = []
    for i in s:
        if i == '(':
            p.append(i)
        elif i == ')':
            if len(p) == 0:
                return False
            else:
                ult = p.pop()
                if ult != '(':
                    return False
                    break
    if len(p) != 0:
        return False
    return True





if __name__ == '__main__':
    while True:
        try:
            s = str(input())
            if analisar_expressao(s):
                print("correct")
            else: 
                print("incorrect")
        except EOFError:
            break
    
