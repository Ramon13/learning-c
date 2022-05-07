/*
Reads a sequence of integers, sum and calculate their averages.
=============================================================
Initialize variables

Input the number of numbers to be entered
Input numbers, sum and calculate their averages
Print the sum and the average
============================================================

Initialize sum as 0
Initialize count as 0

Input the number of integers to be entered and set to count

Initialize i as 0
Initialize temp as 0
While i is less than count
	Input the next integer and set to temp
	add temp to sum

Print the sum
Divides the sum by count and print as average
*/

#include <stdio.h>

int main(void) {
	unsigned int sum = 0;
	unsigned int count;

	scanf("%u", &count);
	
	unsigned int temp = 0;
	for (int i = 0; i < count; ++i) {
		scanf("%u", &temp);
		sum += temp;
	}

	printf("Sum: %u\n", sum);
	printf("Average %.2f\n", ((float)sum / (float)count));
}
