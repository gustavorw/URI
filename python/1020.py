d = int(input())
#a = d / 365
#m = (d % 365) / 30
#d = (d % 365) % 30
print('{} ano(s)'.format(int(d / 365)))
print('{} mes(es)'.format(int((d % 365) / 30)))
print('{} dia(s)'.format(int((d % 365) % 30)))