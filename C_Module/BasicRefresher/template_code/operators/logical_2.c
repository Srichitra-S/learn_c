#include <stdio.h>

int main()
{
    int num1 = 1, num2 = 0;

    //if(num2++ && num2++)
    //if(num2++ && ++num1)
    if(++num1 && num2++)
    {
        printf("In if: num1 %d num2 %d\n", num1, num2);
    }
    else
    {
        printf("In else: num1 %d num2 %d\n", num1, num2);
    }

    return 0;

}