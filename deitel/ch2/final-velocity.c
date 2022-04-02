#include <stdio.h>

int main(void) {
	float u, a, t;

	puts("Enter the initial velocity(m/s):");
	scanf("%f", &u);
	
	puts("Enter the initial acceleration(m/s²)");
	scanf("%f", &a);

	puts("Enter the time that has elapsed(s)");
	scanf("%f", &t);
	
	printf("final velocity(m/s): %.2f\n", (u + a * t) );
	printf("distance traversed(m): %.2f\n", ( (u * t) + ((1.0/2.0) * a * (t * t)) ) );
}
