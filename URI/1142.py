import sys

n = int(input())

i = 1
while(n):
	j = 3
	while(j):
		sys.stdout.write(f"{i} ")
		i += 1
		j -= 1
	sys.stdout.write("PUM\n")
	i += 1
	n -= 1'