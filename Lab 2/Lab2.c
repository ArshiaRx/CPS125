/* NAME:  Arshia Rahim - 500994106
COURSE:   CPS125 - Section 4
DUE DATE: 2021-02-02
LAB #2 */
#include <stdio.h>
/*Exercise #1
int main(void) {
	printf("This\n is\n my\n first\n C\n program.\n");
	return 0;
}*/


/*Exercise #2
int main(void) {
	printf("X 0 X\n");
	printf("X X 0\n");
	printf("0 0 X\n");
	return 0;
}*/


/*Exercise #3
int main(void) {
	int a = 3, b = 4, e;
	double c, d, f = 4;
	d = a + b;
	c = a / (f - b);
	printf("The value of d is %.2f\n", d);
	return (0);
}*/


/*Exercise #4
int main(){
	double n;
	printf("Enter a real Number: ");
	scanf("%lf", &n);

	printf("n = %d\n", ((int) n/100)*100);

	printf("n = %d\n", ((int) n/1000)*1000);
	printf("n = %.1lf", n);
	return 0;
}*/


/*Exercise #5
#include <math.h>

int main(){
	double Long_radius, Short_radius, A1_circumference, A2_circumference;
	printf("What is the long radius: ");
	scanf("%lf", &Long_radius);
	printf("What is the short radius: ");
	scanf("%lf", &Short_radius);
	A1_circumference= 2 * 3.14 *sqrt(((Long_radius*Long_radius)+(Short_radius*Short_radius))/2);

	printf("%lf\n", A1_circumference);
	A2_circumference= 3.14*(3*(Long_radius+Short_radius)-sqrt((3*Long_radius)+Short_radius)*(Long_radius+(3*Short_radius)));

	printf("%.5lf", A2_circumference);
	return (0);
}*/


/*Homework Portion*/
int main(void) {
	double B_odmeter, E_odmeter, Distance, reimbursement;
	double Rate = 0.35;
	printf("MILLEAGE REIMBURSEMENT CALCULATOR\n");
	printf("Enter begininning odometer reading=> ");
	scanf("%lf", &B_odmeter);
	printf("Enter ending odometer=> ");
	scanf("%lf", &E_odmeter);
	Distance = E_odmeter - B_odmeter;
	reimbursement = Distance / Rate;
	printf("You traveled %lf miles. At $0.35 per mile, your reimbursement is $%lf.\n", Distance, reimbursement);
	return (0);
}