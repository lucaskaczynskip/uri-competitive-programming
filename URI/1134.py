fuel = [0, 0, 0]

while True:
	_input = int(input())
	while(_input < 1 and _input > 4):
		_input = int(input())
	if(_input == 4):
		break
	if(_input == 1):
		fuel[0] += 1
	if(_input == 2):
		fuel[1] += 1
	if(_input == 3):
		fuel[2] += 1

print("MUITO OBRIGADO")
print(f"Alcool: {fuel[0]}")
print(f"Gasolina: {fuel[1]}")
print(f"Diesel: {fuel[2]}")