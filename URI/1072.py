x = int(input())

_in = 0
_out = 0
while(x):
	number = int(input())
	if(number >= 10 and number <= 20):
		_in += 1
	else:
		_out += 1
	x -= 1

print(f'{_in} in\n{_out} out')