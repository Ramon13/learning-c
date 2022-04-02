#include<stdio.h>

void printarr(int *arr, int arrlen){
	int i;

	for (i = 0; i < arrlen; ++i)
		printf("%d\n", *(arr+i));
}

int main(void){

	int a[10];
	a[0] = 13;
	a[1] = 66;
	
	int *pa;
	pa = &a[0];

	printf("endereço de pa => %p\n", pa);
	printf("endereço de a => %p\n", a);


	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	printarr(b+2, 8);	
	
	printf("%p\n", pa);	
	printf("%p\n", &pa);
	return 0;
}


