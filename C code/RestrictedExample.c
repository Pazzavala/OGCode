// Restricted Example ResrtrictedExample.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ar[10], n;
	int * restrict ar2 = (int*) malloc(10 * sizeof(int));
	int * par = ar;

	for (n = 0; n < 10; n++) {
		ar[n] = n;
		ar2[n] = n;
	}

	for(n = 0; n < 10; n++) {
		par[n] += 5;
		ar2[n] += 5;
		ar[n] *= 2;
		par[n] += 3;
		ar2[n] += 3;

		printf("par[%d] = %d\n", n, par[n]);
		printf("ar[%d] = %d\n", n, ar[n]);
		printf("ar2[%d] = %d\n", n, *(ar2+n));
	}

	free(ar2);

	return 0;
}