x = int(input())
y = int(input())

if(x > y):
	aux = y
	y = x
	x = aux

total = 0
for i in range(x+1, y):
	if(i % 2 != 0):
		total += i

print(total)