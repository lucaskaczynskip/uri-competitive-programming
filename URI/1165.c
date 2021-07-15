#include <stdio.h>

typedef enum { false, true } bool;

bool isDivider(int number, int i) {
	if(number % i == 0)
		return true;
	
	return false;
}

bool isPrime(int number) {
	int count = 0;

	for(int i = 1; i <= number; i++) {
		if(isDivider(number, i))
			count++;
	}

	if(count == 2)
		return true;
	
	return false;
}

int main() {
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		int number;

		scanf("%d", &number);

		if(isPrime(number))
			printf("%d eh primo\n", number);
		else
			printf("%d nao eh primo\n", number);
	}

	return 0;
}
