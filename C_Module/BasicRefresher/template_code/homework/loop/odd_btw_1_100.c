/*
Srichitra S

Description : Program to print odd numbers between 1 and 100
*/

#include <stdio.h>

int main()
{
    int iter=0;

    while(iter<=100)
    {
        if (iter%2!=0)
        {
            printf("%d\n",iter);
            iter++;
        }
        else
        {
            iter++;
        }
        
    }
    return 0;
}