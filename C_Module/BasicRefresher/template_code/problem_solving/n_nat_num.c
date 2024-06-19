/*
Srichitra S

Program to find the sum of n natural numbers 
*/

#include <stdio.h>

    /* algorithm

    step 1: declare iter, sum =0;

    step 2: print "enter a value for n"

    step 3: read n using scanf

    step 4: for each iteration, iter should be 1 to N
                sum=sum+iter

    step 5: print sum
    
    */

int main()
{
    int num, iter=0, sum=0;
    printf("Enter a value for n: ");
    scanf("%d", &num);

    for(iter=1; iter<=num; iter++)
    {
        sum=sum+iter;
    }
    printf("\nSum of %d natural numbers is %d\n", num, sum);

    return 0;

}