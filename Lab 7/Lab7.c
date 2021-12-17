/* Arshia Rahim
2021-03-26
Lab7 */
#include <stdio.h>
int main(void)
{
	FILE* p;
	p = fopen("data1.txt", "r");
	int i = 0, n = 0;
	double x_arr[25], x, xhigh, xlow, x_2nd_arr[25], normx[25], min = 0, max = 100;
	while (fscanf(p, "%lf", &x) != EOF)                            /* Open file name called "data1.txt, and Until is not end of file keep looping*/
	{
		x_arr[i] = x;
		i++;
		n++;
	}
	printf("Number of elements: %d\n", n);
	printf("Numbers Are: \n");
	for (i = 0; i < n; i++)
	{
		printf("%0.2lf\t", x_arr[i]);

	}
	xhigh = x_arr[0];
	for (i = 1; i < n; i++)
	{
		if (x_arr[i] > xhigh)
			xhigh = x_arr[i];
	}
	printf("\n\nLargest Value: %0.2lf", xhigh);
	xlow = x_arr[0];
	for (i = 1; i < n; i++)
	{
		if (x_arr[i] < xlow)
			xlow = x_arr[i];
	}

	printf("\nSmallest Value: %0.2lf\n\n", xlow);
	printf("First Array\t\tSecond Array\n");
	for (i = 0; i < n; i++)                                                 /*Keep printing the first and second array values until no more values are left*/
	{
		x_2nd_arr[i] = 3 * x_arr[i];
		printf("%0.2lf\t\t\t%0.2lf\n", x_arr[i], x_2nd_arr[i]);
	}
	printf("\nORIGINAL ARRAY\t\tNormalixed Array\n");
	for (i = 0; i < n; i++)                                                 /*Keep printing the Original and Normalized array values until no more values are left*/
	{
		normx[i] = min + ((x_arr[i] - xlow) * (max - min)) / (xhigh - xlow);
		printf("%0.2lf\t\t\t%0.2lf\n", x_arr[i], normx[i]);
	}
	return (0);
}
