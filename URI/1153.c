#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int value = 0;
	for(int i = n; i > 0; i--) {
		if(i == n)
			value = n;
		else
			value *= (n - i);
	}

	printf("%d\n", value);

	return 0;
}
