#include <stdio.h>

int main()
{
    int hr;
    printf("Enter hour between 0 - 23: ");
    scanf("%d", &hr);
    
    if (hr>23)
    {
        printf("Invalid hour\n");
    }
    else
    {
        if(hr>=5 && hr<=11)
        {
            printf("Good morning!\n");
        }
        else if(hr>=12 && hr <=15)
        {
            printf("Good afternoon!\n");
        }
        else if (hr>=16 && hr <=21)
        {
            printf("Good evening!\n");
        }
        else
        {
            printf("Good night!\n");
        }
    }
    

    return 0;
}