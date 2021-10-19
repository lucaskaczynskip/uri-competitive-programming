#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main() {
	char op;
	scanf("%c", &op);

	double m[TAM][TAM], result = 0;

	for (int i = 0; i < TAM; i++) 
		for (int j = 0; j < TAM; j++)
			scanf("%lf", &m[i][j]);

	int count = 0;

	for (int i = TAM-1; i > -1; i--) {
		for (int j = TAM-i; j < i; j++) {
			result += m[i][j];
			count++;
		}
	}

	if (op == 'M') result /= count;

	printf("%.1lf\n", result);

	return 0;
}