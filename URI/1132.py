# -*- coding: utf-8 -*-

x = int(input())
y = int(input())

if(x > y):
	aux = x
	x = y
	y = aux

total = 0
for number in range(x, y+1):
	if(number % 13 != 0):
		total = total + number

print(total)