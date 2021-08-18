#include <stdio.h>
/* Course: CPS125
Lab4 - Section 4
Name: Arshia Rahim*/
/*Excersie #1 and #2:
int main() {
	int a1, a2, t1, t2, i, average;
	char Grade;

	printf("Enter Assignments Grades: \n");
	scanf("%d %d", &a1, &a2);
	for (i = 0; i < 100; i++) {
		if (a1 > 100)
			printf("INVALID. Enter Assignment 1 again\n");
		else if (a1 < 0)
			printf("INVALID. Enter Assignment 1 again\n");
		else
			continue;
		scanf("%d", &a1);
	}
	for (i = 0; i < 100; i++) {
		if (a2 > 100)
			printf("INVALID. Enter Assignment 2 again\n");
		else if (a2 < 0)
			printf("INVALID. Enter Assignment 2 again\n");
		else
			continue;
		scanf("%d", &a2);
	}

	printf("Enter Test Grades: \n");
	scanf("%d %d", &t1, &t2);
	for (i = 0; i < 100; i++) {
		if (t1 > 100)
			printf("INVALID. Enter Test 1 again.\n");
		else if (t1 < 0)
			printf("INVALID. Enter Test 1 again.\n");
		else
			continue;
		scanf("%d", &t1);
	}
	for (i = 0; i < 100; i++) {
		if (t2 > 100)
			printf("INVALID. Enter Test 2 again.\n");
		else if (t2 < 0)
			printf("INVALID. Enter Test 2 again.\n");
		else
			continue;
		scanf("%d", &t2);
	}
	average = (a1 + a2 + t1 + t2) / 4;
	printf("The average is: %d Percent\n", average); 



	 if (t1 < 50 || t2 < 50)                           
	printf("The letter grade is: %c\n", Grade = 'F');

	else if (average <= 100 && average >= 80)
		printf("The letter grade is: %c\n", Grade = 'A');

	else if (average <= 79 && average >= 70)
		printf("The letter grade is: %c\n", Grade = 'B');

	else if (average <= 69 && average >= 60)
		printf("The letter grade is: %c\n", Grade = 'C');

	else if (average <= 59 && average >= 50)
		printf("The letter grade is: %c\n", Grade = 'D');

	else if (average < 50)
		printf("The letter grade is: %c\n", Grade = 'F');

	return (0);
}*/

/*Exercise #3:
int main() {
	char warship_class;

	printf("What is the warship class: ");
	scanf("%c", &warship_class);



	switch (warship_class)
	{

	case 'S':
	case 's':
		printf("Submarine");
		break;

	case 'C':
	case 'c':
		printf("Cruiser");
		break;

	case 'D':
	case 'd':
		printf("Destroyer");
		break;

	case 'F':
	case 'f':
		printf("Frigate");
		break;

	case 'A':
	case 'a':
		printf("Aircraft Carrier");
		break;

	default:
		break;
	}
	if (warship_class == 'S' || warship_class == 's')
		printf("");

	else if (warship_class == 'C' || warship_class == 'c')
		printf("");

	else if (warship_class == 'D' || warship_class == 'd')
		printf("");

	else if (warship_class == 'F' || warship_class == 'f')
		printf("");

	else if (warship_class == 'A' || warship_class == 'a')
		printf("");

	else
		printf("The Ship is unknown.");
	return (0);
}*/

/*Exercise #4: 
int main() {
	float n;
	printf("Richter scale number (n)\tCharacterization\n\n");
	printf("n < 5.0 \t\t\tLittle or no damage\n");
	printf("5.0 <= n < 5.5 \t\t\tSome damage\n");
	printf("5.5 <= n < 6.5 \t\t\tSerious damage: Walls may crack or fall\n");
	printf("6.5 <= n < 7.5 \t\t\tDisaster: Houses and buildings may collapse\n");
	printf("n >= 7.5 \t\t\tCatastrophe: Most buildings destroyed\n\n");
	
	printf("Enter the Richter value: ");
	scanf("%f", &n);

	if (n < 5.0)
		printf("Little or no damage\n");
	else if (5.0 <= n && n < 5.5)
		printf("Some damage\n");
	else if (5.5 <= n && n < 6.5)
		printf("Serious damage: Walls may crack or fall\n");
	else if (6.5 <= n && n < 7.5)
		printf("Disaster: Houses and buildings may collapse\n");
	else if (n >= 7.5)
		printf("Catastrophe: Most buildings destroyed\n");

	return (0);
}*/

