#include <stdio.h>

typedef enum { false, true } bool;

bool isDivider(int number, int i) {
    if(number % i == 0)
        return true;
    
    return false;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i < n+1; i++) {
        if(isDivider(n, i))
            printf("%d\n", i);
    }

    return 0;
}