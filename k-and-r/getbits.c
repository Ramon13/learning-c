#include <stdio.h>

unsigned getbits(unsigned x, int p, int n){
	return (x >> (p+1-n)) & ~(~0 << n);
}

int main(void){
	unsigned bits = getbits(2, 4, 3);
	printf("%d\n", bits);

	return 0;
}
