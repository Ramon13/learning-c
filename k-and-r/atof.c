#include <ctype.h>
#include <stdio.h>

double atof(char s[]);

int main(void){

	printf("%lf\n", atof("-13.14"));
	printf("%lf\n", atof("3.44"));
	printf("%lf\n", atof("34.0"));
	printf("%lf\n", atof("-442.45556323424242"));
	printf("%lf\n", atof("4.34e-2"));
	printf("%lf\n", atof("5.75e2"));
	return 0;
}

double atof(char s[]){
	double power, value, exp;
	int i, sign, expsign;

	for (i = 0; isspace(s[i]); i++)
		;

	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-')
		i++;

	for (value = 0.0; isdigit(s[i]); i++)
		value = value * 10 + (s[i] - '0');

	if (s[i] == '.')
		i++;

	for (power = 1.0; isdigit(s[i]); i++){
		value = value * 10 + (s[i] - '0');
		power *= 10.0;
	}

	if (s[i++] == 'e'){
		
		expsign = (s[i] == '-') ? 1 : 0; 
	
		if (s[i] == '-')
			i++;

		for (exp = s[i] - '0'; exp > 0; --exp){
			if (expsign)
				power *= 10;
			else
				power /= 10;
		}
	}

	return sign * value / power;
}
