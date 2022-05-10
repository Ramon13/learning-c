/*
 A program to calculate a car rental service charge
===================================================

 Initialize variables

 Input all rented car hours and calculates the charge of each one andthe total
 Print the results in a neat tabular format
====================================================

 While the user enter with a valid car number 
	if hour is greather or equal 8 hour
		set rental charge to 25
	else
		set rental charge to hour * 5

	if rental charge is greather than 50
		set rental charge to 50

	add hours * 0,5 to rental charge

	Print the car number
	Print the hours
	Print the charge of this car	

Print the total hours
Print the total charges
=======================================================
*/

#include <stdio.h>

double calculateCharges(double hours);

int main(void) {
	printf("%s %10s %10s\n", "Car", "Hours", "Charge");

	printf("%d %10d %12.2lf\n", 1, 12, calculateCharges(12));
	printf("%d %10d %12.2lf\n", 2, 34, calculateCharges(34)); 
 	printf("%d %10d %12.2lf\n", 3, 48, calculateCharges(48)); 
	printf("%s %6d %12.2lf\n", "TOTAL", 94, calculateCharges(12) + calculateCharges(34) + calculateCharges(48)); 
}

double calculateCharges(double hours) {
	double charge;

	if (hours <= 8) {
		charge = 25.0;
	}else {
		charge = ((int) hours % 24) * 5; 	
	}
	
	if (charge > 50) {
		charge = 50;
	}
	
	charge += ((int) hours / 24) * 50;
	charge += hours * 0.5;
	
	return charge;
}
	
		
