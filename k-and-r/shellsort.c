#include <stdio.h>

void shellsort(int v[], int n){
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2)
		for (i = gap; i < n; i++){
			printf("n=%d, gap=%d, i=%d, j=%d, v[j]=%d, v[j+gap]=%d\n", n, gap, i, i-gap, v[i-gap], v[i]);

			for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap){

				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}				
}

int main(void){
	int v[] = {7,6,8,9,3,2,10,5,1};

	shellsort(v, 9);
	return 0;
}

