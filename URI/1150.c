#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	while(y <= x) {
		scanf("%d", &y);
	}

	int value, count = 0, aux = x+1;
	value = x + aux;
	while(value < y) {
		value += aux;
		count++;
	}

	printf("%d\n", count+1);

	return 0;
}
