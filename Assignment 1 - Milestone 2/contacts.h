/* -------------------------------------------
Name: Aria Avazkhani
Student number: 134465160
Email: aavazkhani@myseneca.ca
Section: R
Date: 6/Mar/2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code here...

struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code here...

struct Number {
	char cell[21];
	char home[21];
	char business[21];
};
