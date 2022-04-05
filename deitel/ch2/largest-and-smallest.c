#include <stdio.h>
/*
 Inputs threee different integes and print the sum, the average,
 the product, the smallest and the largest of these numbers.
 Use only the single-selection form of the if statement.
*/
int main(void) {
	int a, b, c;
	
	puts("Enter three different itegers:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("Sum is %d\n", (a + b + c) );
	printf("Average is %d\n", (a + b + c) / 3);
	printf("Product is %d\n", (a * b * c) );
	
	int min = a;
	if (min > b) {
		min = b;
	}
	
	if (min > c) {
		min = c;
	}

	int max = a;
	if (max < b) {
		max = b;
	}

	if (max < c) {
		max = c;
	}

	printf("Smallest is %d\n", min);
	printf("Largest is %d\n", max);
}
