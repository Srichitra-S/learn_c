#include <stdio.h>

int main()
{
    int i=0, j=0;

    while (i<5)
    {
        printf("Outer loop : i = %d, j = %d \n", i, j);

        j=0;
    
        while(j<3)
        {
            printf("Inner loop : i = %d, j = %d\n", i ,j);
            j++;
        }
        //printf("\n");
        i++;

    }

    return 0;
}