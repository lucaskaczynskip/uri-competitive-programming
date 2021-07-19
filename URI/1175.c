#include <stdio.h>

#define TAM 20

int main() {
    int vet[TAM];

    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < TAM; i++) {
        int aux[2] = {vet[i], (TAM-i) - 1};

        if(i < 10) {
            vet[i] = vet[aux[1]];
            vet[aux[1]] = aux[0]; 
        }

        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}