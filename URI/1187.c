#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main() {
	char op;
	scanf("%s", &op);

	double m[TAM][TAM], result = 0;

	for (int i = 0; i < TAM; i++)
		for (int j = 0; j < TAM; j++)
			scanf("%lf", &m[i][j]);

	int count = 0;

	for (int i = 0; i < TAM; i++) {
		for (int j = i+1; j < (TAM-1)-i; j++) {
			result += m[i][j];
			count++;
		}
	}

	if (op == 'M') {
		result /= count;
	}

	printf("%.1lf\n", result);

	return 0;
}