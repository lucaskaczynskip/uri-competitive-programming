#include <stdio.h>

#define TAM 10

int main() {
    int vet[TAM], number;
    
    scanf("%d", &number);
    vet[0] = number;

    for(int i = 1; i < TAM; i++) {
        vet[i] = vet[i-1] * 2;
    }

    for(int i = 0; i < TAM; i++) {
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}