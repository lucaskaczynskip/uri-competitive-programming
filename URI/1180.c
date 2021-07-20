#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int x[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    int smaller[2];
    smaller[1] = x[0];
    
    for(int i = 1; i < n; i++) {
        if(x[i] < smaller[1]) {
            smaller[1] = x[i];
            smaller[0] = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", smaller[1], smaller[0]);

    return 0;
}