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

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:

#include "contactHelpers.h"

// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):

#define MAXCONTACTS 5

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause:
void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
}


// getInt:

int getInt(void) {

	int a;
	char c = 'x';

	do {
		scanf("%d%c", &a, &c);
		if (c != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	} while (c != '\n');
	return a;
}

// getIntInRange:

int getIntInRange(int a, int b) {

	int val;
	do {
		val = getInt();
		if (a > val || val > b) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", a, b);
		}
	} while (a > val || val > b);
	return val;
}

// yes:

int yes(void) {

	char s = 'x';
	char c = 'x';
	while (s != 'y' && s != 'Y' && s != 'n' && s != 'N') {
		while (c != '\n') {
			scanf("%c%c", &s, &c);
			if (c != '\n') {
				clearKeyboard();
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			}
		}
		if (s != 'y' && s != 'Y' && s != 'n' && s != 'N') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
	}
	if (s == 'Y' || s == 'y')
		return 1;
	else
		return 0;
}

// menu:

int menu(void) {

	int m = -1;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");
	printf("Select an option:> ");
	while (m < 0 || m > 6) {
		scanf("%d", &m);
		if (m < 0 || m > 6) {
			clearKeyboard();
			printf("*** OUT OF RANGE *** <Enter a number between 0 and 6>: ");
		}
	}
	return m;
}

// ContactManagerSystem:

void ContactManagerSystem(void) {

	int sel;
	int flag = 0;
	struct Contact contact[MAXCONTACTS] = 
	{ { { "Rick",{ '\0' }, "Grimes" },
		{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
		{ "4161112222", "4162223333", "4163334444" } },
	{ 
		{ "Maggie", "R.", "Greene" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9051112222", "9052223333", "9053334444" } },
	{ 
		{ "Morgan", "A.", "Jones" },
		{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
		{ "7051112222", "7052223333", "7053334444" } },
	{ 
		{ "Sasha",{ '\0' }, "Williams" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9052223333", "9052223333", "9054445555" } }, }
	;
	while (flag != 1) {
		sel = menu();
		if (sel == 1) {
			printf("\n");
			clearKeyboard();
			displayContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
		}
		if (sel == 2) {
			printf("\n");
			clearKeyboard();
			addContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
		}
		if (sel == 3) {
			printf("\n");
			clearKeyboard();
			updateContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
		}
		if (sel == 4) {
			printf("\n");
			clearKeyboard();
			deleteContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
		}
		if (sel == 5) {
			printf("\n");
			clearKeyboard();
			searchContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
		}
		if (sel == 6) {
			printf("\n");
			clearKeyboard();
			sortContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
		}
		if (sel == 0) {
			clearKeyboard();
			printf("\nExit the program? (Y)es/(N)o: ");
			if (yes() == 1) {
				printf("\n");
				printf("Contact Management System: terminated\n");
				flag = 1;
			}
			else printf("\n");
		}
	}
}

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:

void getTenDigitPhone(char telNum[]){
	int needInput = 1;
	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:

int findContactIndex(const struct Contact contacts[], int size, const char cellNum[]){
	int i = 0;
	int comp;
	for (i = 0; i < size; i++) {
		comp = strcmp(contacts[i].numbers.cell, cellNum);
		if (comp == 0) {
			return i;
		}
	}
	return -1;
}

// displayContactHeader

void displayContactHeader(void) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}

// displayContactFooter

void displayContactFooter(int total) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", total);
}

// displayContact:

void displayContact(const struct Contact *p) {
	if (p->name.middleInitial[0] != '\0') {
		printf(" %s %s %s\n", p->name.firstName, p->name.middleInitial, p->name.lastName);
	}
	else printf(" %s %s\n", p->name.firstName, p->name.lastName);
	printf("    C: %-10s   H: %-10s   B: %-10s\n", p->numbers.cell, p->numbers.home, p->numbers.business);
	printf("       %d %s, ", p->address.streetNumber, p->address.street);
	if (p->address.apartmentNumber > 0) {
		printf("Apt# %d, ", p->address.apartmentNumber);
	}
	printf("%s, %s\n", p->address.city, p->address.postalCode);
}

// displayContacts:

void displayContacts(const struct Contact contact[], int size) {

	int i;
	int totalContact = 0;
	displayContactHeader();

	for (i = 0; i < size; i++) {
		if (strlen(contact[i].numbers.cell) > 0) {
			displayContact(&contact[i]);
			totalContact++;
		}
	}
	displayContactFooter(totalContact);
}

// searchContacts:

void searchContacts(const struct Contact contact[], int size) {
	char cellNum[11];
	int contactIndex = 0;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(cellNum);
	contactIndex = findContactIndex(contact, size, cellNum);

	if (contactIndex == -1) {
		printf("*** Contact NOT FOUND ***\n");
	}
	else {
		printf("\n");
		displayContact(&contact[contactIndex]);
		printf("\n");
	}
}

// addContact:

void addContact(struct Contact contact[], int size) {
	char emptyIndex[11] = { '\0' };
	int slot;
	struct Contact tempContact = { { { 0 } } };

	slot = findContactIndex(contact, size, emptyIndex);

	if (slot != -1) {
		getContact(&tempContact);
		contact[slot] = tempContact;
		printf("--- New contact added! ---\n");
	}
	else {
		printf("*** ERROR: The contact list is full! ***\n");
	}
}

// updateContact:

void updateContact(struct Contact contact[], int size) {
	char contactInput[11] = { '\0' };
	int input = 0;
	int contactIndex;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(contactInput);
	contactIndex = findContactIndex(contact, size, contactInput);

	if (contactIndex == -1) {
		printf("*** Contact NOT FOUND ***\n");
	}
	else {
		printf("\nContact found:\n");
		displayContact(&contact[contactIndex]);
		printf("\n");
		printf("Do you want to update the name? (y or n): ");
		input = yes();

		if (input == 1) {
			getName(&contact[contactIndex].name);
		}
		printf("Do you want to update the address? (y or n): ");
		input = yes();
		if (input == 1) {
			getAddress(&contact[contactIndex].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		input = yes();
		if (input == 1) {
			*contact[contactIndex].numbers.cell = '\0';
			*contact[contactIndex].numbers.home = '\0';
			*contact[contactIndex].numbers.business = '\0';
			getNumbers(&contact[contactIndex].numbers);
		}
		printf("--- Contact Updated! ---\n");
	}

}

// deleteContact:

void deleteContact(struct Contact contact[], int size) {
	char contactInput[11] = { '\0' };
	int input = 0;
	int contactIndex;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(contactInput);
	contactIndex = findContactIndex(contact, size, contactInput);
	if (contactIndex == -1)
		printf("*** Contact NOT FOUND ***\n");
	else {
		printf("\nContact found:\n");
		displayContact(&contact[contactIndex]);
		printf("\n");
		printf("CONFIRM: Delete this contact? (y or n): ");
		input = yes();
		if (input == 1) {
			contact[contactIndex].numbers.cell[0] = '\0';
			printf("--- Contact deleted! ---\n");
		}
	}
}

// sortContacts:

void sortContacts(struct Contact contact[], int size) {
	///*
	int i, j;
	struct Contact temp;

	for (i = size - 1 ; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (strcmp(contact[j].numbers.cell, contact[j+1].numbers.cell) > 0) {

				temp = contact[j];
				contact[j] = contact[j + 1];
				contact[j + 1] = temp;
			}
		}
	}
	printf("--- Contacts sorted! ---\n");
	//*/
	//printf("<<< Feature to sort is unavailable >>>");
}
