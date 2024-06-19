/*
Srichitra S

Description : To check if given number is perfect or not

1. declare variable
2. read value for num
3. check num >0
    check number is perfect or not
   else
    invalid input

*/

#include <stdio.h>

int main()
{
    int i, num, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // check i is a factor or not

    for (i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        } 
    }
    if (num==sum)
    {
        printf("\nPerfect number");
    }
}