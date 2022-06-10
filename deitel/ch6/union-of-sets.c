#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX_SET 20

void randArray(int array[], size_t size);
unsigned int binarySearch(int arr[], size_t size, int key);
void printArr(int array[], size_t size);
void selectionSort(int arr[], size_t size);

int main(void) {
	srand(time(NULL));

	int arrayA[10];
	randArray(arrayA, SIZE);

	int arrayB[10];
	randArray(arrayB, SIZE);

	int set[MAX_SET];
	for (unsigned int i = 0; i < MAX_SET; ++i) {
		set[i] = 101;
	}
	
	int setNext = 0; 
	for (unsigned int i = 0; i < SIZE; ++i) {
		if (binarySearch(set, MAX_SET, arrayA[i]) == -1) {
			set[setNext++] = arrayA[i];
			selectionSort(set, MAX_SET);
		}

		if (binarySearch(set, MAX_SET, arrayB[i]) == -1) {
			set[setNext++] = arrayB[i];
			selectionSort(set, MAX_SET);
		}
	}

	puts("Array A:");
	printArr(arrayA, SIZE);

	puts("Array B:");
	printArr(arrayB, SIZE);

	puts("Set:");
	printArr(set, MAX_SET);
}

void randArray(int array[], size_t size) {
	for (unsigned int i = 0; i < size; ++i) {
		array[i] = (rand() % 100) + 1;
	}
}

unsigned int binarySearch(int arr[], size_t size, int key) {
	int low = 0;
	int high = size - 1;

	while (low <= high) {
		unsigned int middle = (low + high) / 2;

		if (key == arr[middle]) {
			return middle;
		
		}else if (key < arr[middle]) {
			high = middle - 1;
	
		}else {
			low = middle + 1;
		}
	}

	return -1;
}

void selectionSort(int arr[], size_t size) {
	void swap(int arr[], int indexA, int indexB);

	for (unsigned int i = 0; i < size; ++i) {
		int smallest = arr[i];
		int smallestIndex = i;

		for (unsigned int j = i; j < size; ++j) {
			if (arr[j] < smallest) {
				smallest = arr[j];
				smallestIndex = j;
			}
		}
		
		swap(arr, i, smallestIndex);	
	}
}

void swap(int arr[], int indexA, int indexB) {
	int hold = arr[indexA];
	arr[indexA] = arr[indexB];
	arr[indexB] = hold;
}		

void printArr(int array[], size_t size) {
	for (unsigned int i = 0; i < size; ++i) {
		printf("%d, ", array[i]);
	}
	
	puts("");
}
