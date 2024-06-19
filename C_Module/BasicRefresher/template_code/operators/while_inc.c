#include <stdio.h>

int main()
{
    int x = 0;
    while(x++ < 5)
    {
        printf("%d", ++x);
    }
    printf("\n");
    printf("%d",x);
}