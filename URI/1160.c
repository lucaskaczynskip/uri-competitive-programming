#include <stdio.h>

typedef enum { false, true } bool;

int surprassB(int pa, int pb, double g1, double g2) {

    int years = 0, populationA = pa, populationB = pb;
    double percentA, percentB;

    while(populationA <= populationB) {
        if(years >= 100) 
            return false;
        
        percentA = populationA * (g1 / 100);
        percentB = populationB * (g2 / 100);

        populationA += percentA;
        populationB += percentB;

        years++;
    }


    return years;
}

void result(int years) {
    if(!years)
        printf("Mais de 1 seculo.\n");
    else    
        printf("%d anos.\n", years);
}

int main() {
    int testCases;
    scanf("%d", &testCases);

    for(int i = 0; i < testCases; i++) {
        int populationA, populationB;
        double percentA, percentB;

        scanf("%d %d %lf %lf", &populationA, &populationB, &percentA, &percentB);

        int years = surprassB(populationA, populationB, percentA, percentB);
    
        result(years);
    }

    return 0;
}