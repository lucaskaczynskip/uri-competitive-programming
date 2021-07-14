#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	int aux = x;
	for(int i = 1; i < y+1; i++) {
		x--;
		if(x == 0) {
			printf("%d\n", i);
			x = aux;
		} else {
			printf("%d ", i);
		}
	}

	return 0;
}
