#include <stdio.h>

int main()
{
    int iter =0;

    do 
    {
        printf("Looped %d times\n", iter);
        iter++;
    } while (iter<10);
}