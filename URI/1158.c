#include <stdio.h>

typedef enum { false, true } bool;

bool odd(int number) {
    if(number % 2 != 0)
        return true;
    
    return false;
}

int consecutiveOdd(int initValue, int amount) {
    int sum = 0, consecutive = amount, i = initValue;

    while(consecutive) {
        if(odd(i)) {
            sum += i;
            consecutive--;
        }

        i++;
    }

    return sum;
}

int main() {
    int n, x, y;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        printf("%d\n", consecutiveOdd(x, y));
    }

    return 0;
}