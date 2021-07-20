#include <stdio.h>

#define TAM 1000

int main(void) {
    int n[TAM], t;
    scanf("%d", &t);

    int j = 0;
    
    for(int i = 0; i < TAM; i++) {
        if(j == t)
            j = 0;

        n[i] = j;
        j++;

        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}