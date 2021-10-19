#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main() {
	char op;
	scanf("%s", &op);

	float m[TAM][TAM], result = 0;

	for (int i = 0; i < TAM; i++) 
		for (int j = 0; j < TAM; j++) 
			scanf("%f", &m[i][j]);

	int count = 0;
	
	for (int i = TAM-1; i > -1; i--) {
		for (int j = (TAM-1)-i+1; j < TAM; j++) {
			result += m[i][j];
			count++;
		}
	}
	
	if (op == 'M') result /= count;

	printf("%.1f\n", result);

	return 0;
}