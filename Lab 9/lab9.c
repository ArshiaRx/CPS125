/*Arshia Rahim
Section #4
Lab: #9
Prof: Isaac Wougang*/
#include <stdio.h>
#define pi 3.14
#include<stdlib.h>
#include<string.h>
/*Exercise #1
struct shape {
	float line;
	float radius;
	float areacircle;
	float areacylinder;
	float volumecylinder;
};
int main(void) {
	struct shape s;
	printf("Enter the height: \n");
	scanf("%f", &s.line);
	printf("Enter the radius: \n");
	scanf("%f", &s.radius);
	s.areacircle = pi * s.radius * s.radius;

	s.areacylinder = 2 * pi * s.radius * s.line;

	s.volumecylinder = pi * s.radius * s.radius * s.line;
	printf("The area of circular cross section is: %f\n", s.areacircle);
	printf("The surface Area of the cylinder is: %f\n", s.areacylinder);
	printf("The Volume of the cyliner is: %f\n", s.volumecylinder);

	return 0;
}
*/
/*Exercise #2
struct strength {
	float p;
	float d;
	float Area;
	float stress;
	float strain;
};
int main(void){
	struct strength s;
	printf("Enter compression load: \n");
	scanf("%f", &s.p);
	printf("Enter the compression diameter: \n");
	scanf("%f", &s.d);
	s.Area = (pi * s.d * s.d) / 4;
	s.stress = s.p / s.Area;
	s.strain = s.stress / (30 * 10 ^ 6);
	printf("Load\tDiameter\tStress\tStrain\n");
	printf("%0.1f\t%0.1f\t\t%0.1f\t%0.1f\n", s.p, s.d, s.strain);
	return 0;
}*/
/*Exercise #3
struct car {
	char make[20];
	char model[20];
	char color[20];
	int year;
};
struct  car* ptr;
void display(struct car* p);
void display(struct car* p)
{
	printf("Make\tmodel\tcolor\tyear\n");
	for (int i = 0; i < 2; i++)
	{
		if (strcmp((p + i)->color, "yellow") == 0 && (p + i)->year > 2010)
		{
			printf("%s\t%s\t%s\t%d", (p + i)->make, (ptr + i)->model, (p + i)->color, (p + i)->year);
		}
	}
}
int main(void) {
	ptr = (struct car*)malloc(sizeof(struct car) * 2);
	for (int i = 0; i < 2; i++)
	{
		printf("Enter make, model, color & year\n");
		scanf("%s%s%s%d", (ptr + i)->make, (ptr + i)->model, (ptr + i)->color, &(ptr + i)->year);
	}
	display(ptr);
	return 0;
}*/
/* Exercise 4 --> Find the output by hand
void main() {
	struct gospel
	{
		int num;
		char mess1[50];
		char mess2[50];
	} m;
	m.num = 1;
	strcpy(m.mess1, "If all that you have is hammer");
	strcpy(m.mess2, "Everything looks like a naim");
	/*assume that the structure is located at address 1004
	printf("\n%u %u %u", &m.num, m.mess1, m.mess2);
}     
The output by hand was: 2 1036 1034*/