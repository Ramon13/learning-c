#include <stdio.h>
#include <time.h>
#include <math.h>

int binarysearch(int x, int v[], int n);
int enhancedbinarysearch(int x, int v[], int n);

void test(){
	clock_t begin, time_taken;
	int testscount = pow(10, 8);

	int v[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 127, 230, 332};
	
//binary search
	begin = clock();	
	for (int i = 0; i < testscount; i++){
		binarysearch(i, v, 13);
	}

	time_taken = clock() - begin;
	printf("binary search with two if's inside the loop - clocks: %lu - exec time: %lf\n", 
		(unsigned long) time_taken,
		(double) time_taken / CLOCKS_PER_SEC);

//enhanced binary search
	begin = clock();	
	for (int i = 0; i < testscount; i++){
		enhancedbinarysearch(i, v, 13);
	}

	time_taken = clock() - begin;
	printf("binary search with only one if inside the loop - clocks: %lu - exec time: %lf\n", 
		(unsigned long) time_taken,
		(double) time_taken / CLOCKS_PER_SEC);

}

int main(void){
	test();

	return 0;
}

/* binarysearch: find x in v[0] <= v[1] ... <= v[n-1] */
int binarysearch(int x, int v[], int n){
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high){
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}

	return -1;
}

int enhancedbinarysearch(int x, int v[], int n){
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high){
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	
	return (x == v[mid]) ? v[mid] : -1;
}


