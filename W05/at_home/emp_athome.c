/*
Name: Aria Avazkhani
Student number:
Email: aavazkhani@myseneca.ca
Workshop: Week 5
Section: R
Date: 2/20/2018
*/

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4 
struct Employee {
	int id;
	int age;
	double sal;
};
int main(void) {

	int option = 0;
	printf("---=== EMPLOYEE DATA ===---\n\n");
	int i;
	int counter=0;
	int new = 0;
	int srch;
	int don=0;
	struct Employee emp[SIZE] = { { 0 } };
	do {
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:	// Exit the program

			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0
			for (i = 0; i < SIZE; i++) {
				if (emp[i].id > 0 && emp[i].age > 0 && emp[i].sal > 0) {
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].sal);
				}
			}
			printf("\n");
		break;
		case 2:	// Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");
			if (counter < SIZE) {
				printf("Enter Employee ID: ");
				scanf("%d", &emp[new].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[new].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[new].sal);
				new++;
				counter++;
				printf("\n");
				break;
			}
			else {
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}
		break;
		case 3:
			don=0;
			printf("Update Employee Salary\n");
			printf("======================\n");
			do {
				printf("Enter Employee ID: ");
				scanf("%d", &srch);
				for (i=0;i<SIZE;i++){
					if (emp[i].id == srch){
						printf("The current salary is %.2lf\n", emp[i].sal);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].sal);
						don=1;
						printf("\n");
					}
				}
			}
			while (don!=1);	
		break;		
		case 4:
			don=0;
			printf("Remove Employee\n");
			printf("===============\n");
			do {	
				printf("Enter Employee ID: ");
				scanf("%d", &srch);
				for (i=0;i<SIZE;i++){
					if (emp[i].id == srch){
						printf("Employee %d will be removed", emp[i].id);
						emp[i].id = 0;
						emp[i].age = 0;
						emp[i].sal = 0;
						counter--;
						don=1;
						printf("\n\n");
					}
				}
			}
			while (don!=1);
		break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	}
	while (option != 0);
	printf("Exiting Employee Data Program. Good Bye!!!\n");
	return 0; 
}





// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 113
Enter Employee Age: 53
Enter Employee Salary: 120345.78

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 114
Enter Employee Age: 25
Enter Employee Salary: 46780

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 112
The current salary is 65000.00
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   99999.99
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 112
Employee 112 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!
*/