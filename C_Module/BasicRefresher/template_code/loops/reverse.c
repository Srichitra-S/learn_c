#include <stdio.h>

int main()
{
    int rev_num=0,num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0)
    {
        digit = num%10;
        rev_num=rev_num*10 + digit;
        num=num/10;
    }
    printf("Reversed number is %d \n",rev_num);

    return 0;
} 