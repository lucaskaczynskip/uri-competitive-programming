x = int(input())
y = int(input())

if(x > y):
	aux = x
	x = y
	y = aux

count = x + 1
while True:
	if(count == y):
		break
	number = count
	if(number % 5 == 2 or number % 5 == 3):
		print(number)
	count += 1