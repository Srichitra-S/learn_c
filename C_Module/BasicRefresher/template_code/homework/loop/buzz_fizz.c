/*
Srichitra S

Description : Program to print values from 1 to 100
               1. If value is multiples of 3, print Fizz
               2. If value is multiple of 5, print Buzz
               3. If value is multiple of 3 and 5, print FizzBuzz

*/

#include <stdio.h>

int main()
{
    int iter=1;
    while(iter<=100)
    {
        if (iter%3==0 && iter%5==0)
        {
            printf("FizzBuzz\n");
        }
        else if (iter%3==0)
        {
           printf("Fizz\n"); 
        }
        else if (iter%5==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",iter);
        }
        iter++;
    }
    return 0;
}