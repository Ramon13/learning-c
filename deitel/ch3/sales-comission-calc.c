/*
Process each salesperson gross sales and display his earnings

=================================================

Initialize variables
Input the sales in dollars and calculate the earnings
Display the total eanings (salary)

=====================================================

Initialize commission_basis to 0.09
Initialize salary_base to 200

While input sells is different to -1
	Multiply sells by comission_basis and set to comission
	Add salary_base to comission and set to total
	Print total 
*/

#include <stdio.h>

int main(void) {
	float commission_basis = 0.09;
	int salary_base = 200;
	float sells, commission, total;

	printf("%s", "Enter sales in dollars (-1 to end): ");
	scanf("%f", &sells);

	while (sells > -1) {
		commission = sells * commission_basis;
		total = salary_base + commission;
		
		printf("Salary is: $%.2f\n\n", total);

		printf("%s", "Enter sales in dollars (-1 to end): ");
		scanf("%f", &sells);
	}
}
