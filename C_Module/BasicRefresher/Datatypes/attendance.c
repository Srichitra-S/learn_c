#include <stdio.h>

int main()
{
	float attendance;
	double average;

	printf("Enter attendance and average: ");
	scanf("%f%lf", &attendance, &average);
	printf("Average is %.2f and average is %lf\n", average, attendance);

	return 0;
}


