#include <stdio.h>

int main()
{
    int num,div,count,flag=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(div=2;div<num;div++)
    {
        if(num%div==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime\n", num);

    }
    else 
    {
        printf("%d is not prime\n",num);
    }
    return 0; 
}

















/*
int main()
{
    int num,div,count;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (div=1;div<=num;div++)
    {
        if(num%div ==0)
        {
            count++;
        }
    }
    if (count ==2)
    {
        printf("%d is prime\n", num);
    }
    else{
        printf("%d is not a prime\n", num);
    }
    return 0;
}

*/