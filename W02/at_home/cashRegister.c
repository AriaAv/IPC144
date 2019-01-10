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
	int dimesNo;
	int nickelsNo;
	int penniesNo;
	double newAmount1;
	double newAmount2;
	double newAmount3;
	double newAmount4;
	double newAmount5;
	double gst;
	double balance;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	gst = amount * 0.13 + 0.005;
	balance = amount + gst;

	looniesNo = (int)balance / 1;
	newAmount1 = balance - (looniesNo * 1);

	quartersNo = (int) (newAmount1 / 0.25);
	newAmount2 = newAmount1 - (quartersNo * 0.25);

	dimesNo = (int) (newAmount2 / 0.10);
	newAmount3 = newAmount2 - (dimesNo * 0.10);

	nickelsNo = (int) (newAmount3 / 0.05);
	newAmount4 = newAmount3 - (nickelsNo * 0.05);

	penniesNo = (int) (newAmount4 / 0.01);
	newAmount5 = newAmount4 - (penniesNo * 0.01);
	printf("GST: %1.2lf\n", gst);
	printf("Balance owing: $%.2lf\n", balance);
	printf("Loonies required: %d, balance owing $%.2lf\n", looniesNo, newAmount1);
	printf("Quarters required: %d, balance owing $%.2lf\n", quartersNo, newAmount2);
	printf("Dimes required: %d, balance owing $%.2lf\n", dimesNo, newAmount3);
	printf("Nickels required: %d, balance owing $%.2lf\n", nickelsNo, newAmount4);
	printf("Pennies required: %d, balance owing $%.2lf\n", penniesNo, newAmount5);
				
	return 0;
}
