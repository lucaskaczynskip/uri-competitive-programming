total = 0

while True:
	a, n = input().split(' ')
	a = int(a)
	n = int(n)

	if(n <= 0):
		n = input().split(' ')
		n = int(n)
	else:
		for i in range(a, n):
			total += (a + i)
		break

print(total)