import sys

n = int(input())
n *= 2

i = 1
while(n):
	x = 3
		while(x):
			sys.stdout.write(f'{i} ')
			i *= 2
			sys.stdout.write('\n')
			x -= 1
	n -= 1