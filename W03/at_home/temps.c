// Name: Aria Avazkhani
// Student Number: 134465160
// Email: aavazkhani@myseneca.ca
// Section: R
// Workshop: Week 3

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>
#define NUMS 4

int main(void) {

	int i;
	int low, high, lowTotal=0, highTotal=0;
	float avg;
	int highest = -40;
	int lowest = 40;
	int highi;
	int lowi;

		printf("---=== IPC Temperature Analyzer ===---");

		for (i = 0; i < NUMS; i++) {

		do {
			printf("\nEnter the high value for day %d: ", i + 1);
			scanf("%d", &high);
			printf("\nEnter the low value for day %d: ", i + 1);
			scanf("%d", &low);

			if ((low < -40 || high > 40) || (low > high)) {
				printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			}
		} while ((low < -40 || high > 40) || (low > high));
		
if (high > highest){
	highest = high;
	highi = i + 1;
}
if (low < lowest){
	lowest = low;
	lowi = i+1;
}
		highTotal = highTotal + high;
		lowTotal = lowTotal + low;
		avg = ((float)lowTotal + (float)highTotal) / (NUMS * 2);

	}

		printf("\nThe average (mean) temperature was: %.2lf", avg);
		printf("\nThe highest temperature was %d, on day %d", highest, highi);
		printf("\nThe lowest temperature was %d, on day %d\n", lowest, lowi);

		return 0;
}
