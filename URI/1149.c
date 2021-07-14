#include <stdio.h>

int main() {
	int a, n;
	scanf("%d", &a);

	while(1) {
		if(n <= 0)
			scanf("%d", &n);
		else
			break;
	}

	int total = 0;
	for(int i = 0; i < n-1; i++) {
		total += (a + i);
	}

	printf("%d", total);

	return 0;
}
