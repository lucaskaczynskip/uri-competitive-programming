#include <stdio.h>

double func(int i) {
	return 1 / (double)i;
}

int main() {
	double s = 0;
	
	for(int i = 1; i <= 100; i++) {
		s += func(i);
	}
	
	printf("%.2lf\n", s);

	return 0;
}
