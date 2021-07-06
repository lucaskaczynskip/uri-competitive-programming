import sys

while True:
	number = int(input())

	if(number == 0): 
		break

	for i in range(1, number+1):
		if(i == number):
			sys.stdout.write(f'{i}\n')
		else:
			sys.stdout.write(f'{i} ')
