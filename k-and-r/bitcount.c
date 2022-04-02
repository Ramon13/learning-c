#include <stdio.h>

int bitcount(unsigned x){
	int b;

	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}

int fasterbitcount(unsigned x){
	int b;

	for (b = 0; x != 0; x &= (x - 1))
		b++;	
	return b;
}

int main(void){
	printf("%d\n", bitcount(10));
	printf("%d\n", fasterbitcount(10));
	printf("%d\n", fasterbitcount(15));	
	printf("%d\n", fasterbitcount(33));
}

