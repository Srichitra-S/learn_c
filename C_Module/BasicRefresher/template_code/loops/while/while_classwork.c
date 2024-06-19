#include <stdio.h>

/*
index%5 -- restrict the value between 0 to 4

24 hours clock (0-24)
    have a train at 5, it gets delayed by 4hrs. what time, train will arrive?

    arrival time : actual time + delayed

    -----------------------

    have a train at 22:00, train gets delayed by 4hrs, what time train will arrive?


    arrival time: 22+4 = 26!

    so use modulus operator to limit to 24.
    26%24 = 2


    To find range : num%max_value -- range(0 to max_value-1)




*/

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