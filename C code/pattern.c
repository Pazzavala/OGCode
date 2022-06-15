#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    for (int i = n; i > 0; i--, n--) {
        for (int j = -n + 1; j < n; j++) {
            printf("%d", i);
        }
        printf("\n%d", i);
    }

    return 0;
}
