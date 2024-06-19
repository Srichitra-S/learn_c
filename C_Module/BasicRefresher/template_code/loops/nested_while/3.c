#include <stdio.h>

int main()
{
    int i=0, j=0;

    while (i<5)
    {
        j=0;
    
        while(j<3)
        {
            printf("%d", j+1);
            j++;
        }
        printf("\n");
        i++;

    }

    return 0;
}