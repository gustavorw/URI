n = input().split(' ')
p1 = int(n[0]) * int(n[1]) 
p2 = int(n[2]) * int(n[3])
if p1 == p2:
    print("0")
elif p1 > p2:
    print("-1")
else:
    print("1")