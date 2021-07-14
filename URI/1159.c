#include <stdio.h>

typedef enum { false, true } bool;

bool even(int number) {
    if(number % 2 == 0)
        return true;
    
    return false;
}

int consecutiveEven(int initValue) {
    int sum = 0, consecutive = 5, i = initValue;

    while(consecutive) {
        if(even(i)) {
            sum += i;
            consecutive--;
        }

        i++;
    }

    return sum;
}

int main() {
    int x;

    while(true) {
        scanf("%d", &x);

        if(x == 0) 
            break;
        
        printf("%d\n", consecutiveEven(x));
    }

    return 0;
}