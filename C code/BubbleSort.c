// BubbleSort.c
// Bubble sort uses two for loops
// Outer loop Keeps executing the inner loop
// until the flag indicates no swaps occured
// Inner loop compares adjacent values and swaps
// them if second value is smaller than first value.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 25

int BubbleSort(int* pArray, int size);
void printArray(int* pArr, int size);
void fillRandom(int* pArr, int size);

int main(void) {
	int arr[SIZE], swaps;

	fillRandom(arr, SIZE);

	printArray(arr, SIZE);

	swaps = BubbleSort(arr, SIZE);

	printf("\n\tNumber of Swaps = %d\n\n", swaps);

	printArray(arr, SIZE);

	return 0;
}

int BubbleSort(int* pArray, int size) {
	int i, j, temp, swaps = 0;

	for (i = 0; i < size - 1; i++) {
		for(j = 0; j < size - i - 1; j++) {
			if(pArray[j] > pArray[j+1]){
				temp = pArray[j];
				pArray[j] = pArray[j+1];
				pArray[j+1] = temp;
				swaps++;
			}
		}
	}

	return swaps;
}

void printArray(int* pArr, int size) {
	int i;

	for (i = 0; i < size; i++)
		printf("\tarr[%d] = %d\n", i, *(pArr + i));
}

void fillRandom(int* pArr, int size) {
	int i;

	for(i = 0; i < size; i++)
		pArr[i] = rand()%1000;
}