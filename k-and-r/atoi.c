#include<ctype.h>
#include<stdio.h>

int atoi(char s[]){
	int i, n, sign;

	for (i = 0; isspace(s[i]); ++i)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		++i;

	for (n = 0; isdigit(s[i]); ++i)
		n = 10 * n + (s[i] - '0');

	return n * sign;
}

int main (void){
	printf("%d\n", atoi({'-', '1'});
	printf("%d\n", atoi((char){'-', '2'}));
	printf("%d\n", atoi((char){' ', '3'}));

	return 0;
}
