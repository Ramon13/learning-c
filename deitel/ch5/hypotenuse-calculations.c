#include<stdio.h>
#include<math.h>

double hypotenuse(double sidea, double sideb);

int main(void) {
	double sidea, sideb;
	int count = 1;
	puts("Enter with the right triangle sides, or a negative number to exit:");

	do {
		printf("Triangle %d\n", count);
		printf("%s", "side1: ");
		scanf("%lf", &sidea);

		printf("%s", "side2: ");
		scanf("%lf", &sideb);

		if (sidea < 0 || sideb < 0) 
			return -1;

		printf("Hypotenuse: %.2lf\n\n", hypotenuse(sidea, sideb));

		++count;
	}while(count <= 3);			
}

double hypotenuse(double sidea, double sideb) {
	return sqrt(pow(sidea, 2) + pow(sideb, 2));
} 
