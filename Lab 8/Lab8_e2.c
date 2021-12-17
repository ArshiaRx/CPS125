/*Arshia Rahim
Lab#8
Exercise 2 and 1*/
#include<stdio.h>
#include<stdlib.h>
int count_zeros(int arr[], int size);
int count_neg(int arr[], int size);
int count_zeros(int arr[], int size) {
	int i, c;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			c++;
	}
	return(c);
}
int count_neg(int arr[], int size) {
	int i, c = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] < 0)
			c++;
	}
	return(c);
}
int main(void)
{
	FILE* p;
	p = fopen("data3.txt", "r");
	int i, j, how_many, c;
	int* ptr_1, * arr;
	fscanf(p, "%d", &how_many);
	ptr_1 = (int*)malloc(sizeof(int));
	*ptr_1 = 7;
	printf("Value of ptr_1 is %d\n", *ptr_1);
	arr = (int*)malloc(sizeof(int) * 5);
	printf("Enter Five elements\n");
	for (i = 0; 1 < 5; i++) {
		scanf("%d", arr + i);   /*  &arr[i]  */
	}
	printf("Elements are\n");
	for(i = 0; i < 5; i++) {
		printf("%d\n", *(arr + i));    /**/
	}
	free(arr);
	arr = (int*)malloc(sizeof(int) * how_many);
	for (i = 0; i < 4; i++)
	{
		fscanf(p, "%d", (arr + i));
	}
	c = count_zeros(arr, 5);
	printf("No of zeroes: %d\n", c);
	c = count_neg(arr, 5);
	printf("No of negatives: %d", c);
	return (0);
}
/*int checkdiag(int matrix[][100], int size);
int checkdiag(int matrix[][100], int size) {
	int i, j, p, q, r;
	for (i = 0; 1 < size; i++) {
		for (j = 0; j < size; i++) {
			p = matrix[0][0];
			q = matrix[1][1];
			r = matrix[2][2];
		}
	}
	if (p == q && q == r && r == p)
		return(1);
	else
		return(-1);
}
int main(void) {
	FILE* p;
	p = fopen("data2.txt", "r");
	int a[3][3], x, q;
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; i++) {
			fscanf(p, "%d", &x);
			a[i][j]=x;
		}
	}
printf("Numbers are");
for(i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++)
	{
		printf("%d\t", a[i][j]);
	}
	printf("\n");
}
q = checkdiag (a, 3);
if (q == 1)
printf("All diagonals are equal\n");
else
printf("All diagonals are not equal\n");
return (0);
}*/
