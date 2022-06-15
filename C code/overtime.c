#include <stdio.h>
#include <string.h>

int main() {
	float regualrPay, overtimePay, totalPay, income, weeks;
	int regualrHours, overtimeHours;
	char firstName[30], lastName[30], fullName[60], choice;

	char space[] = " ";

	do {
		printf("\nEnter your first name: ");
		scanf("%s",firstName);

		printf("Enter your lat name: ");
		scanf("%s", lastName);

		printf("Enter your wage: ");
		scanf("%f", &regualrPay);

		printf("Enter total hours worked: ");
		scanf("%d", &regualrHours);

		printf("Enter weeks to calculate for: ");
		scanf("%f", &weeks);

		overtimePay = regualrPay + (regualrPay/2);

		strcpy(lastName, strcat(space, lastName));

		strcpy(fullName, strcat(firstName, lastName));

		printf("\n\nHello %s ", fullName);

		printf("\nRegualr pay rate is: $%.2f\n", regualrPay);
		printf("Your overtime pay rate is: $%.2f\n\n", overtimePay);


		if(regualrHours >= 40) {
			overtimeHours = regualrHours - 40;
			regualrHours = 40;
		} else
			overtimeHours = 0;

		printf("Regualr hours: %d\n", regualrHours);
		printf("Overtime hours: %d\n\n", overtimeHours);

		totalPay = (regualrPay * regualrHours) + (overtimePay * overtimeHours);
		income = totalPay - totalPay * 0.2;

	//	printf("Enter Initials: ");
		// char firstInit, lastInit;
		// firstInit = getchar();
		// getchar();
		// lastInit = getchar();
		// getchar();
		
		printf("Weekly paycheck amount for %d %d: $%.2f\n", totalPay, firstInit, lastInit);
		printf("After taxes income: $%.2f\n", income);

		

		printf("The amount you would make is: $%.2f\n\n", income*weeks);

		printf("Would you like to make another calculation? (Y/N): ");

		// Collects the previous [enter]
		getchar();
		choice = getchar();	// Could use getch() but cant press backspace is typed wrong

		if (choice == 'n')
			choice = 'N';

	} while (choice != 'N');
	


	return 0;
}