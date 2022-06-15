/* Wrtie function that adds two double values and returns result*/
#include <stdio.h>

/* Function prototype */
double addDouble(double, double);

int main() {
    double num1, num2, sum;
    int validInput;
    char ch;
    
    do {
        printf("\nEnter 2 values to be added: ");

        validInput = scanf("%lf %lf", &num1, &num2);


        // Dispose of invalid input
        while ((ch = getchar()) != '\n' )
            putchar(ch);

        if(validInput != 2)
            printf(" is not valid input.\n");


    } while (validInput != 2);
    
    sum = addDouble(num1, num2);
    
    printf("\n%.3lf + %.3lf = %.3lf\n", num1, num2, sum);
    
    return 0;
}

double addDouble(double a, double b) {
    return a + b;
}