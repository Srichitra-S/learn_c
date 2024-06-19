#include <stdio.h>

int main()
{
    int iter;

    while(iter<10)
    {
        if(iter==5)
        {
            printf("Stuck in the loop\n");
            continue;

        }
        printf("%d\n",iter);
        iter++;
    }
    return 0;
}
