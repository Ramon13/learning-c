/*
Write a program that read in two integers and determines and prints whether the first is a multiple of the second.
*/

#include <stdio.h>

int main(void) {
	int num1, num2;

	puts("Is the first a multiple of the second?");

	printf("%s", "Enter with the first number: ");
	scanf("%d", &num1);

	printf("%s", "Enter with the second number: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0)
		puts("Is a multiple!");
	else
		puts("Is not a multiple.");
}

