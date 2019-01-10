/*
Name: Aria Avazkhani
Email: aavazkhani@senecacollege.ca
Seneca ID: 134465160
*/

#include <stdio.h>

int main (void){

	double amount;
	int looniesNo;
	int quartersNo;
	double newAmount1;
	double newAmount2;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	looniesNo = (int)amount / 1;
	newAmount1 = amount - (looniesNo * 1);

	quartersNo = (int) (newAmount1 / 0.25);
	newAmount2 = newAmount1 - (quartersNo * 0.25);

	printf("Loonies required: %d, balance owing $%.2lf\n", looniesNo, newAmount1);
	printf("Quarters required: %d, balance owing $%.2lf\n", quartersNo, newAmount2);

	return 0;
}
