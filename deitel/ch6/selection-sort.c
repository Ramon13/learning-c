#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void selectionSort(int arr[], size_t size);
void randArray(int arr[], size_t size);
void printArr(int arr[]);

int main(void) {
	srand(time(NULL));

	int arr[SIZE];

	randArray(arr, SIZE);

	puts("Unsorted array: ");
	printArr(arr);

	selectionSort(arr, SIZE);
	puts("Sorted with selection sort: ");
	printArr(arr);	
}

void selectionSort(int arr[], size_t size) {
	void swap(int arr[], int index1, int index2);

	for (unsigned int i = 0; i < size; ++i) {
		int smallest = arr[i];
		int smallestIndex = i;
 
		for (unsigned int j = i; j < size; ++j) {
			if (arr[j] < smallest) {
				smallest = arr[j];
				smallestIndex = j;
			}
		}
	
		swap(arr, i, smallest); 
	}
}

void swap(int arr[], int index1, int index2) {
	int hold = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = hold;
}

void randArray(int arr[], size_t size) {
	for (unsigned int i = 0; i < size; ++i) {
		arr[i] = (rand() % 100) + 1;
	}
}

void printArr(int arr[]) {
	for (unsigned int i = 0; i < SIZE; ++i) {
		printf("%d, ", arr[i]);	
	}

	puts("");
}
