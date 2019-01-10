/* -------------------------------------------
Name: Aria Avazkhani
Student number: 134465160
Email: aavazkhani@myseneca.ca
Section: R
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:

void getName(struct Contact *p){

	char choice;

	printf("Please enter the contact's first name: ");
	scanf("%s", (*p).name.firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%s", p->name.middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%s", p->name.lastName);
}

// getAddress:

void getAddress(struct Contact *p){

	char choice;

	printf("Please enter the contact's street number: ");
	scanf("%d", &p->address.streetNumber);
	printf("Please enter the contact's street name: ");
	scanf("%s", p->address.street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &p->address.apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", p->address.postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %s", p->address.city);
}


// getNumbers:

void getNumbers(struct Contact *p){

	char choice;

	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &choice);
	if (choice == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%s", p->numbers.cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &choice);
	if (choice == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%s", p->numbers.home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &choice);
	if (choice == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%s", p->numbers.business);
	}
}

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:

void getContact(struct Contact *p){

	
}