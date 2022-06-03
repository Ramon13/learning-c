#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c;

	printf("%s", "Enter with the first number: ");
	scanf("%lf", &a);

	printf("%s", "Enter with the second number: ");
	scanf("%lf", &b);

	printf("%s", "Enter with the third number: ");
	scanf("%lf", &c);

	printf("Original: %8.3lf | Rounded: %8.3lf\n", a, ceil(a));
	printf("Original: %8.3lf | Rounded: %8.3lf\n", b, ceil(b));
	printf("Original: %8.3lf | Rounded: %8.3lf\n", c, ceil(c));
}
