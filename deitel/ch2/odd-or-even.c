/*
2.24 Write a program thet reads an integer and determines and prints whether it's odd or even.
*/

#include <stdio.h>

int main(void) {
	int num;

	printf("%s", "Enter with a number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
		puts("even");
	else
		puts("odd");
}	
