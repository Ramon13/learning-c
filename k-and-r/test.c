#include <stdio.h>

int main(void){
	int i, n;
	int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};	
	n = 50;

	for (i = 0; i < n; i++)
		printf("%6d%c", a[i%10], (i%10==9 || i==n-1) ? '\n' : ' ');

	return 0;
}
