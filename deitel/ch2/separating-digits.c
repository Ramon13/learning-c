#include <stdio.h>

int main (void) {
	int num, ten_of_thousand, thousand, hundred, ten, unit; 

	printf("%s", "Enter with a five-digit number: ");
	scanf("%d", &num);

	ten_of_thousand = num / 10000;
	thousand = (num / 1000) % (ten_of_thousand * 10);
	hundred = (num / 100) % (ten_of_thousand * 100 + thousand * 10);	
	ten = (num / 10) % (ten_of_thousand * 1000 + thousand * 100 + hundred * 10);
	unit = num % (ten_of_thousand * 10000 + thousand * 1000 + hundred * 100 + ten * 10);

	printf("%d\t%d\t%d\t%d\t%d\n", ten_of_thousand, thousand, hundred, ten, unit);
}	
