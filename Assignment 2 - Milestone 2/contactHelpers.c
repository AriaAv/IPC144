/* -------------------------------------------
Name: Aria Avazkhani
Student number: 134465160
Email: aavazkhani@myseneca.ca
Section: R       
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:

#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause: Empty function definition goes here:

void pause(void){
	printf("(Press Enter to Continue)");
	clearKeyboard();
}


// getInt: Empty function definition goes here:

int getInt(void){
	
	int a;
	char c='x';

	do {
		scanf("%d%c", &a, &c);
		if (c != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
		while (c != '\n');
	return a;
}

// getIntInRange: Empty function definition goes here:

int getIntInRange(int a, int b){
	
	int val;
	do {
		val = getInt();
		if (a > val || val > b) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", a, b);
		}
	}
	while (a > val || val > b);
	return val;
}

// yes: Empty function definition goes here:

int yes(void){
	
	char s='x';
	char c='x';
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


// menu: Empty function definition goes here:

int menu(void){
	
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

// ContactManagerSystem: Empty function definition goes here:

void ContactManagerSystem(void){
	
	int sel;
	int flag=0;
	 while (flag != 1){
		sel = menu();
		if (sel == 1) {
			clearKeyboard();
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}
		if (sel == 2) {
			clearKeyboard();
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}
		if (sel == 3) {
			clearKeyboard();
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}
		if (sel == 4) {
			clearKeyboard();
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}
		if (sel == 5) {
			clearKeyboard();
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}
		if (sel == 6) {
			clearKeyboard();
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
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

