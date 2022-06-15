#include <stdio.h>

void interchange(int* pNum1, int* pNum2);

int main(void) {
	int x = 5, y = 10;

	printf("OG Values: x = %d  |  y = %d\n", x, y);

	interchange(&x, &y);

	printf("Swapped Values: x = %d  |  y = %d\n", x, y);

	return 0;
}

void interchange(int* pNum1, int* pNum2) {
	int temp;
	temp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = temp;
}