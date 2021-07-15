#include <stdio.h>

typedef enum { false, true } bool;

bool isDivisor(int number, int i) {
    if(number % i == 0)
        return true;
    
    return false;
}

bool isPerfect(int number) {
    int sum = 0;

    for(int i = 1; i < number; i++) {
        if(isDivisor(number, i)) 
            sum += i;
    }

    if(sum == number)
        return true;

    return false;
}


int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int number; 
        scanf("%d", &number);

        if(isPerfect(number))
            printf("%d eh perfeito\n", number);
        else
            printf("%d nao eh perfeito\n", number);
    }

    return 0;
}