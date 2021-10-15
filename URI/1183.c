#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main() {
	char op;	
	scanf("%s", &op);

	float m[TAM][TAM], result = 0;

	int count = 0;
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j < TAM; j++) {
			scanf("%f", &m[i][j]);

			if (j > i) {
				result += m[i][j];
				count++;
			}
		}
	}

	if (op == 'M') result /= count;

	printf("%.1f\n", result);

	return 0;
}