#include <stdio.h>

#define TAM 10

int intoZeroToOne(int value) {
    if(value <= 0)
        return 1;
    
    return value;
}

int main() {
    int vet[TAM];

    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < TAM; i++) {
        vet[i] = intoZeroToOne(vet[i]);

        printf("X[%d] = %d\n", i, vet[i]);
    }

    return 0;
}