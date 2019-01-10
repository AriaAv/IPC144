/* -------------------------------------------
Name: Aria Avazkhani
Student number: 134465160
Email: aavazkhani@myseneca.ca
Section: R  
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+

#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:

void getName(struct Name *p){

	int choice;

	printf("Please enter the contact's first name: ");
	scanf("%[^\n]s", (*p).firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	choice = yes();
	if (choice == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%[^\n]s", (*p).middleInitial);
		clearKeyboard();
	}
	printf("Please enter the contact's last name: ");
	scanf("%[^\n]s", (*p).lastName);
	clearKeyboard();

}

// getAddress:


void getAddress(struct Address *p){

	int choice;

	printf("Please enter the contact's street number: ");
	(*p).streetNumber = getInt();
	printf("Please enter the contact's street name: ");
	scanf("%[^\n]s", (*p).street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	choice = yes();
	if (choice == 1) {
		printf("Please enter the contact's apartment number: ");
		(*p).apartmentNumber = getInt();
	}
	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]s", (*p).postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf("%[^\n]s", (*p).city);
	clearKeyboard();

}


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable

void getNumbers(struct Numbers *p){

	int choice;
	
	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone((*p).cell);
	printf("Do you want to enter a home phone number? (y or n): ");
	choice = yes();
	if (choice == 1) {
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone((*p).home);

	}
	printf("Do you want to enter a business phone number? (y or n): ");
	choice = yes();
	if (choice == 1) {
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone((*p).business);
	}
}

// getContact


void getContact(struct Contact *p){

	getName(&(p->name));
	getAddress(&(p->address));
	getNumbers(&(p->numbers));
}