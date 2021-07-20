#include <stdio.h>

#define TAM 100

int main(void) {
    double n[TAM], t;
    scanf("%lf", &t);
    
    for(int i = 0; i < TAM; i++) {
        if(!i)
            n[i] = t;
        else
            n[i] = n[i-1] / 2;

        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}