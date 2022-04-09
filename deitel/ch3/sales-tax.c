/*
Get the total collections from a month and calculate the tax on the collections

=========================================================

Initialize variables
Input the total collections and calculate the sales taxes
Print the calculated sales, the taxes from state and county and the total taxes collected

t = 0.04s + 0.05s

C = s + t
C = 1.09s

s = C / 1.09
=========================================================

Initialize sales to 0
Initialize county_tax to 0
Initialize state_tax to 0

While input collections is different from -1
	Divide collections by 1.09 and set to sales;
	Multiply sales by 0.04 and set to state_tax
	Multiply sales by 0.05 and set to county_tax	

	Print the total collections

	Print the sales total

	Print the county_tax

	Print the state_tax

	Print the total tax sum
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	float sales = 0;
	float county_tax = 0;
	float state_tax = 0;

	char* month;
	float collection;

	printf("%s", "Enter total amount collected (-1 to quit): ");
	scanf("%f", &collection);

	printf("%s", "Enter the name of month: ");
	scanf("%s", &month);

	while (collection > 0) {
		sales = collection / 1.09;
		state_tax = sales * 0.04;
		county_tax = sales * 0.05;
	
		printf("Total Collections: $ %.2f\n", collection);
		printf("Sales: $ %.2f\n", sales);
		printf("County Sales Tax: $ %.2f\n", county_tax);
		printf("State Sales Tax: $ %.2f\n", state_tax);
		printf("Total Sales Tax Collected: $ %.2f\n",
			county_tax + state_tax);

		printf("%s", "\nEnter total amount collected (-1 to quit): ");
		scanf("%f", &collection);
	}
}	
