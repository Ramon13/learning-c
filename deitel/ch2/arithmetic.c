#include <stdio.h>

int main(void) {
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);

	printf("sum: %d\n", (a + b) );
	printf("difference: %d\n", (a - b) );
	printf("product: %d\n", (a * b) );
	printf("quocient: %.2f\n", ( (float) a / b) );
	printf("remainder: %d\n", (a % b) );
}
