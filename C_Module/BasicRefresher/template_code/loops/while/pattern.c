#include <stdio.h>

int main()
{
    int index = 0, restricted_index;
    while (index <15)
    {
        restricted_index=index%5;
        if (restricted_index==0)
            printf("_");
        else if (restricted_index==1)
            printf("_");
        else if (restricted_index==2)
            printf("_");
        else if (restricted_index == 3)
            printf("/");
        else if (restricted_index==4)
            printf("\\");
        index++;
    }
    printf("\n");
    return 0;
}