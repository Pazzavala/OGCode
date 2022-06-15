// ICE Swap Function 2

#include <stdio.h>

void sort(int* x, int* y);

int main(void) {

	int x1, x2, valid;
	printf("Would you like to sort some values? Press (Anykey or ctrl + c to quit): \n");

	while (getchar() != EOF) {
		// Disgarding of extra input
			while(getchar() != '\n')
				getchar();
		do {

			printf("Enter 2 values: (ctrl + c to quit')\n");
			valid = scanf("%d %d", &x1, &x2);

		} while (valid != 2);

		printf("Before Sort:\nx1 = %d  |  x2 = %d\n", x1, x2);

		sort(&x1, &x2);

		printf("After Sort:\nx1 = %d  |  x2 = %d\n", x1, x2);
	}

	return 0;
}

void sort(int* px, int* py) {
	int temp;

	if(*px > *py) {
		temp = *px;
		*px = *py;
		*py = temp;
	}
}