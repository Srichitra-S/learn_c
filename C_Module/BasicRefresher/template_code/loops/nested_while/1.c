#include <stdio.h>

int main()
{
    int i=0, j;

    while (i<5)
    {
        j = 0;

        while(j<10)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;

    }

    return 0;
}