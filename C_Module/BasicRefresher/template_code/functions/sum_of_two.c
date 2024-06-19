#include<stdio.h>

float average(int num1, int num2)
{
    int sum = num1 + num2;
    float avg = (float)sum/2;
    return avg;
}

int main()
{
    int num1, num2;
    printf("Enter two values: ");
    scanf("%d%d", &num1, &num2);
    float aveg = average(num1, num2);

    printf("Average is:%f ", aveg);

    return 0;

}