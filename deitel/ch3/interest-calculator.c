/*
 Calculate a simple interest loan

 Input loan principal, interest rate and the term of loan
 Calculate the interest charge with the formula:
 interest = principal * rate * days / 365
 Print the interest charge
==========================================================

While the principal is different to -1
	Input the principal as float
	Input the rate as float
	Input the days as unsigned integer
 
	apply the formula and set to interest

	Print a message with the interest charge
============================================================
*/

#include <stdio.h>

int main(void) {
	float principal, rate, interest;
	unsigned int days;	
	
	printf("%s", "Enter loan principal (-1 to end):");
	scanf("%f", &principal);

	while ((int) principal != -1) {
		printf("%s", "Enter interest rate:");
		scanf("%f", &rate);

		printf("%s", "Enter term of loan in days:");
		scanf("%d", &days);

		interest = principal * rate * days / 365; 		
		
		printf("The interest chage is $%.2f\n\n", interest);

		printf("%s", "Enter loan principal (-1 to end):");
		scanf("%f", &principal);
	}
}
