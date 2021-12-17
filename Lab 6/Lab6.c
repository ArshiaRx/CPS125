/* Arshia Rahim
Lab#: 6 */
#include <stdio.h>
int f1(int y);
int f2(int y);
int f3(int* x_address);
int f4(int y, int* add1, int* add2);

int f1(int y)
{
	int Division;
	Division = y / 10;
	return (Division);
}
int f2(int y)
{
	int Remainder;
	Remainder = y % 10;
	return (Remainder);

}
int f3(int* x_address)
{
	return (*x_address);
}

int f4(int y, int* add1, int* add2)
{
	*add1 = y / 10;
	*add2 = y % 10;
	printf("# of  10's: %d\n", *add1);
	printf("Remainder: %d\n", *add2);
}

int main() {
	int x, Value_of_x, Remainder, Division;

	do {
		printf("Enter a number between 10 and 99: ");
		scanf_s("%d", &x);
	} while (x <= 10 || x >= 99);
	Division = f1(x);
	printf("10's of a number = %d\n", Division);

	Remainder = f2(x);
	printf("Remainder: %d\n", Remainder);

	Value_of_x = f3(&x);
	printf("Value of x: %d\n", Value_of_x);

	f4(x, &Division, &Remainder);
	return (0);
}
