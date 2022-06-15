#include <stdio.h>
#include <math.h>

unsigned int isRightTriangle(double sidea, double sideb, double sidec);
 
int main(void) {
	double sidea, sideb, sidec;

	puts("Enter with the three sides of a triangle\n");

	printf("%s", "Side 01: ");
	scanf("%lf", &sidea);
	
	printf("%s", "Side 02: ");
	scanf("%lf", &sideb);

	printf("%s", "Side 03: ");
	scanf("%lf", &sidec);

	if (isRightTriangle(sidea, sideb, sidec)) {
		puts("This is a right-angled triangle.");
	}else {
		puts("The input sides does not form a right triangle.");
	}
}

unsigned int isRightTriangle(double sidea, double sideb, double sidec) {
	double hypotenuse(double sidea, double sideb);

	double max = sidea;
	
	if (max < sideb)
		max = sideb;

	if (max < sidec)
		max = sidec;

	if (max == hypotenuse(sidea, sideb) ||
		max == hypotenuse(sidea, sidec) ||
		max == hypotenuse(sideb, sidec)) {
		return 1;
	}

	return 0;
}

double hypotenuse(double sidea, double sideb) {
	return sqrt(sidea * sidea + sideb * sideb);
}	
