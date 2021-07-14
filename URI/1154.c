#include <stdio.h>

typedef enum { false, true } bool;

int main() {
	int age = 0, count = 0;
	float average = age;
	
	while(true) {
		scanf("%d", &age);
		
		if(age < 0)
			break;

		average += age;
		count++;
	}
	
	printf("%.2f\n", average/count);
	return 0;
}
