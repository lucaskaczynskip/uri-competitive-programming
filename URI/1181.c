#include <stdio.h>
#include <stdlib.h>

#define TAM 12

float line_operation(float *vet, char operation) {
	float result = 0;

	for (int i = 0; i < TAM; i++)
		result += vet[i];

	if (operation == 'M')
		return result / 12;

	return result;
}

int main() {
	int line;
	char operation;

	scanf("%d %c", &line, &operation);

	float m[TAM][TAM], vet[TAM];

	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j < TAM; j++) { 
			scanf("%f", &m[i][j]);

			if (i == line) vet[j] = m[i][j];
		}
	}

	printf("%.1f\n", line_operation(vet, operation));

	return 0;
}