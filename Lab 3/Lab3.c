#include <stdio.h>
#include <math.h>
/*exercise #1 
int main() {
	int a, b, c, d, sum, sum1, sum2;
	double sum3;
	printf("Enter four Integer Number: \n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	sum = a + b + c + d;
	printf("The Sum of four Integers are: %d\n", sum);
	sum1 = (a + b)-(c + d);
	printf("The Sum of 1st two number subtracted by the sum of the 2nd two number is: %d\n", sum1);
	sum2 = (a*a) + (b*b) + (c*c) + (d*d);
	printf("Sum of square of the four numbers: %d\n", sum2);
	sum3 = sqrt(sum2)/sum;
	printf("Square root of sum of 4 integers divided by their sum: %.2lf\n", sum3);
	return(0);

}*/

/*Exercise #2
int main() {
	int x1 = 100, x2 = 200, x3 = 400, x4 = 800;
	double yard = 1.094, x1_y, x2_y, x3_y, x4_y;
	double mile = 0.0006215, x1_m, x2_m, x3_m, x4_m;
	x1_y = x1 * yard;
	x2_y = x2 * yard;
	x3_y = x3 * yard;
	x4_y = x4 * yard;
	x1_m = x1 * mile;
	x2_m = x2 * mile;
	x3_m = x3 * mile;
	x4_m = x4 * mile;
	printf("Meter    Yard      Miles\n");
	printf("%d      %.2lf    %lf\n", x1, x1_y, x1_m);
	printf("%d      %.2lf    %lf\n", x2, x2_y, x2_m);
	printf("%d      %.2lf    %lf\n", x3, x3_y, x3_m);
	printf("%d      %.2lf    %lf\n", x4, x4_y, x4_m);
return (0);
}*/

/*Exercise #3
int main() {
	double pi = 3.14, Volume, r;
	printf("Volume of a Sphere Calculator: \n");
	printf("What is the radius of the Sphere: ");
	scanf_s("%lf", &r);
	Volume = (4 / 3.0) * pi * (r*r*r);   
	printf("The Volume of the Sphere is %.2lf.", Volume);
	return (0);
}*/

/*Exercise #4
int main() {
	int Triangle = 180, a, b, c;
	printf("Triangle Angle Calculator\n");
	printf("What is the Angle of a: ");
	scanf_s("%d", &a);
	printf("What is the Angle of b: ");
	scanf_s("%d", &b);
	c = Triangle - (a + b);
	printf("The third angle of the Triangle is %d Degree.", c);
	return (0);
}*/

/*Exercise #5
int main() {
	int x, y, z, f;
	printf("What is the value of x: ");
	scanf_s("%d", &x);
	printf("What is the value of y: ");
	scanf_s("%d", &y);
	f = (x + y) * 3;
	z = x + y;
	if (x == y) 
	printf("The Triple of the sum of x and y is %d.", f);
	else 
		printf("The Sum of the two integer is %d", z);
	return (0);
}*/

/*Exercise #6 */
int main() {
	int number[3];

	int i, x, y, n = 3;

	printf("Enter three numbers \n");
	for (i = 0; i < n; i++)
		scanf_s("%d", &number[i]);

	

	for (i = 0; i < n; ++i)  
	{
		for (x = i + 1; x < n; ++x)
		{
			if (number[i] < number[x])
			{
				y = number[i];
				number[i] = number[x];
				number[x] = y;
			}
		}
	}

	printf("The numbers arranged in descending order are given below\n");

	for (i = 0; i < n; ++i)
	{
		printf("%d\n", number[i]);
	}
	return(0);
}
