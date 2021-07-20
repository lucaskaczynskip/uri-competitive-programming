#include <stdio.h>

#define TAM 61

int main() {
    unsigned long long int fib[TAM];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < TAM; i++) {
        fib[i] = fib[i-2] + fib[i-1];
    }

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }

    return 0;
}