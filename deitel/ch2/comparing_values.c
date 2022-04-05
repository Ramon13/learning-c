#include <stdio.h>

int main(void) {
	float highest;
	float current;

	puts("Enter with the highest rainfall ever in one season (mm):");
	scanf("%f", &highest);

	puts("Enter with the rainfall of the current year (mm):");
	scanf("%f", &current);

	if (current > highest) {
		puts("Uou! This year has the highest rainfall ever!");
		highest = current;
	}
}
