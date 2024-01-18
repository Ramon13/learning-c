#include <stdio.h>

/*Example of book - ch1*/

int main() {
	int fahr = 0;
	int lower = 0;
	int upper = 300;
	int step = 20;
	int celcius;

	while (fahr <= upper) {
		celcius = 5/9 * (fahr - 32);
		printf("%d\t%d\n", fahr, celcius);
		fahr += step;
	}
	
	return 0;
}