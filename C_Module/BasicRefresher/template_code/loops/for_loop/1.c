#include <stdio.h>

/*
Algorithm : 

    init - only once at the beginning of the loop
    condition is checked for every iteration
    at the end of every iteration post evaluation expression 
*/

int main()
{
    int iter;

    for (iter=0;iter<10;iter++)
    {
        printf("Looped %d times\n", iter);
    }
    return 0;

}