// PtrsArrays.c

#include <stdio.h>
#define SIZE 10

void PrintElements(int* pIs, int nIs);

int main(void) {
	int i, * pInts, Ints[SIZE] = {10, 11, 12, 13};

	pInts = Ints;
	Ints[6] = 16;
	*(pInts + 8) = 18;

	printf("Ints == &Ints[0]:	%s\n", Ints == &Ints[0] ? "True" : "False");
	//printf("Ints == &Ints:		%s\n", Ints == &Ints ? "True" : "False");
	
	printf("\n%5s %16s %16s %8s\n", "i", "&Ints[i]","(pInts + i)", "Equal?");

	for (i = 0; i < SIZE; i+=2) 
		printf("\n%5d %16p %16p %8s\n\n", i, &Ints[i], (pInts + i), &Ints[i] == (pInts + i) ? "Yes" : "NO");

	for (i = 0; i < SIZE; i+=2) 
		printf("\n%5d %12d %12d %12d\n", i, Ints[i], *(pInts + i), pInts[i]);

	return 0;
}