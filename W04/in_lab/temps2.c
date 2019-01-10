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

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	do {
		scanf("%d", &d);
		if (d > 10 || d < 3)
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
	}while (d < 3 || d > 10);
	printf("\n");
	for (i = 0; i < d; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &temph[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &templ[i]);
	}
	printf("\nDay  Hi  Low");
	for (i = 0; i < d; i++) {
		printf("\n%d    %d    %d", i+1, temph[i], templ[i]);
	}
	printf("\n");

	return 0;
}