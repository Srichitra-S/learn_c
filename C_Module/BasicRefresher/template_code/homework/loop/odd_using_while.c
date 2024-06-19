#include <stdio.h>

int main()
{
    int iter =1, limit =20;
    while(iter<limit)
    {
        printf("%d ", iter);  //loop executes 10 times
        iter=iter+2;
    }
    printf("\n");
    return 0;
}