t = int(input())
print('{}:{}:{}'.format(int(t /3600), int((t % 3600) / 60), int((t % 3600) % 60)))