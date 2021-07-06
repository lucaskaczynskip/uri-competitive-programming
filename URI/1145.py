import sys

x = int(input())
y = int(input())

i = 1
for number in range(1, y+1):
	if(i != x):
		sys.stdout.write(f'{number} ')
		i += 1
	else:
		sys.stdout.write(f'{number}\n')
		i = 1