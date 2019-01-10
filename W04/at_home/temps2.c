//--------------------------------------------------
// Name:           Aria Avazkhani
// Email:          aavazkhani@myseneca.ca
// Section:        R
// Workshop:       Week4
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below

#include <stdio.h>

int main(void) {

	int d;
	int temph[10];
	int templ[10];
	int i;
	int highr = -100;
	int highd;
	int lowr = 100;
	int lowd;
	int avgd;
	int tempsum = 0;
	float avg;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	do {
		scanf("%d", &d);
		if (d > 10 || d < 3)
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
	} while (d < 3 || d > 10);
	printf("\n");
	for (i = 0; i < d; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &temph[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &templ[i]);
		if (temph[i] > highr) {
			highr = temph[i];
			highd = i + 1;
		}
		if (templ[i] < lowr) {
			lowr = templ[i];
			lowd = i + 1;
		}
	}
	printf("\nDay  Hi  Low");
	for (i = 0; i < d; i++) {
		printf("\n%d    %d    %d", i + 1, temph[i], templ[i]);
	}
	printf("\n\nThe highest temperature was %d, on day %d", highr, highd);
	printf("\nThe lowest temperature was %d, on day %d\n", lowr, lowd);

	do {
		printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &avgd);
		if (avgd == -1) {
			break;
		}
		else if (avgd > 4 || avgd < 1) {
			do {
				printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
				scanf("%d", &avgd);
				if (avgd == -1) {
					printf("\nGoodbye!");
					break;
				}
			} while (avgd > 4 && avgd < 1);
		}
		if (avgd <5 && avgd > 0) {
			for (i = 0; i<avgd; i++) {
				tempsum = tempsum + temph[i] + templ[i];
				avg = (float)tempsum / ((i + 1) * 2);
			}
			printf("\nThe average temperature up to day %d is: %.2f\n", avgd, avg);
			tempsum = 0;
		}
	} while (avgd != -1);
	printf("\nGoodbye!\n");
	return 0;
}