#include <stdio.h>

int main()
{
    int iter;
    iter = 0;

    while(iter<5)
    {
        printf("Looped %d times\n", iter+1);
        iter++;
    }
    printf("After while = %d\n", iter);
    return 0;
}