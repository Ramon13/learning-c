/*
Calculate a montly payment of a mortgage debt
========================================

-Initialize variables
-Input the account number, mortgage amount (in dollars), mortgage term (in years), interest rate (as a decimal) and calculate the monthly payabl interest
-Print the monthy payable interest in dollars rounded off to the nearest dollar

i = payable interest
a = mortgage amount
r = interest rate
t = mortgage term

i = (a + (a * r * t)) / (t / 12) 
=========================================

Initialize payable_interest to zero

Input the acc_number
Input the mortgage_amount
Input the mortgage_term
Input the interest_rate

While acc_number is greater than zero
	Multiply the mortgage_amount by interest_rate by mortgage_term and add to mortgage_amount

	If the mortgage_term is greater than zero 
		Multiply mortgage_term by 12, divide mortgage_amount by this and set to payable_interest
	else
		Print an error message caused by illegal mortgage_term

	Print the payable_interest

	Require the next mortgage calculation input block

*/

#include <stdio.h>

int main(void) {
	int payable_interest = 0;
	int acc_number;
	int mortgage_amount;
	float mortgage_term;
	float interest_rate;

	printf("%s", "enter account number (-1 to end): ");
	scanf("%d", &acc_number);	
	
	while (acc_number != -1) {
		printf("%s", "Enter mortgage amount (in dollars): ");
		scanf("%d", &mortgage_amount);	

		printf("%s", "Enter mortgage term (in years): ");
		scanf("%f", &mortgage_term);	

		printf("%s", "Enter interest rate (as decimal): ");
		scanf("%f", &interest_rate);		

		mortgage_amount += mortgage_amount * interest_rate * mortgage_term;
		
		if (mortgage_term > 0) {
			payable_interest = mortgage_amount / (mortgage_term * 12);
		
		}else {
			puts("The mortgage term must be greather than zero.");
			return -1;
		}

		printf("The monthly payable interest is: $ %d\n\n", payable_interest);

		printf("%s", "enter account number (-1 to end): ");
		scanf("%d", &acc_number);			
	}
}
